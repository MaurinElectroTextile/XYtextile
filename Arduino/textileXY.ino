////////////////// déclarations des variables
#define Y1             10                   // select the analog pin 10
#define Y2             9                    // select the analog pin 9
#define X1             11                   // select the analog pin 11
#define X2             12                   // select the analog pin 12
#define sensorPin0     1                    // select the analog input pin 0
#define sensorPin1     0                    // select the analog input pin 1
#define del            2

int rawData_X=0;  // variables for sensor1 data
int rawData_Y=0;  // variables for sensor1 data
int Xmsb, Xlsb, Ymsb, Ylsb;

////////////////// initialisation
void setup() {
  Serial.begin(19200);
}

////////////////// boucle principale
void loop() {
  // FIRST TIME : GET X VALUE
  pinMode(X1, INPUT);                  // put pin in high impedance (+infinite) 
  pinMode(X2, INPUT);                  // put pin in high impedance (+infinite)
  pinMode(Y1, OUTPUT);                 // declare the Pin as an OUTPUT
  pinMode(Y2, OUTPUT);                 // declare the Pin as an OUTPUT
  digitalWrite(Y1, LOW);               // turn off the Pin 10
  digitalWrite(Y2, HIGH);              // turn on the Pin 9
  delay(del);

  rawData_X = analogRead(sensorPin0);
  transmitX(rawData_X);

  // SECOND TIME : GET Y VALUE 
  pinMode(X1, OUTPUT);                 // declare the Pin as an OUTPUT
  pinMode(X2, OUTPUT);                 // declare the Pin as an OUTPUT
  pinMode(Y1, INPUT);                  // put pin in high impedance (+infinite)
  pinMode(Y2, INPUT);                  // put pin in high impedance (+infinite;)
  digitalWrite(X1, HIGH);              // turn on the Pin 11
  digitalWrite(X2, LOW);               // turn off the Pin 12
  delay(del);

  rawData_Y = analogRead(sensorPin1);
  transmitY(rawData_Y);
}

////////////////// fonctions de communication série (Arduino -> PC)
void transmitX(int Xdata){
  // octet 1 for X ; MSB for X (More Signifiant Bits)
  // 00000xxx  Value (after being shifted 5 times)
  // ||
  // ||--------> MSB
  // |---------> X
  Xmsb =  Xdata >> 5 ;                 // Division by 32, save the 5 Msb bits
  Serial.write(Xmsb);                     // Send X MSB

  // octet 0 for X ; LSB for X (Less Signifiant Bits)
  // xxxxxxxx       value
  // 00011111     & mask (31)
  // 01000000     + flag
  // 010xxxxx     = result for
  // 01000000     + 64     for LSB flag
  // first bit is 0 for X flag
  Xlsb =  Xdata & 31 ;                 // save the 5 lsb bits
  Xlsb = Xlsb + 64 ;                    // set second bit to 1 for lsb marker
  Serial.write(Xlsb);                    // Send X LSB
}

void transmitY(int Ydata){
  // octet 1 for Y ; MSB for Y (More Significant Bits)
  // 10000xxx  Value (after being shifted 5 times)
  // ||
  // ||--------> MSB
  // |---------> 1=>Y
  Ymsb = Ydata >> 5 ;                  // Division by 32, save the 5 Msb bits
  Ymsb = Ymsb + 128 ;                  // add a bit for Y
  Serial.write(Ymsb);                      // Send Y MSB

  // octet 0 for Y ; LSB for Y (Less Significant Bits)
  // xxxxxxxx       value
  // 00011111     & mask
  // 000xxxxx     = result
  // 01000000     + 64     for LSB flag
  // 10000000     + 128    for Y flag
  Ylsb = Ydata & 31 ;                  // save the 5 lsb bits
  Ylsb = Ylsb + 64 ;                    // set second bit to 1 for lsb marker
  Ylsb = Ylsb + 128 ;                  // add a bit for Y
  Serial.write(Ylsb);                    // Send Y LSB
}
