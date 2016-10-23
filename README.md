# The XYtextile

### Transforming the textile into an intuitive way to interact with computers. This project is part of electronic textiles research on IHM gesture interaction that have been started in 2005.
- Credit : Maurin Donneaud <maurin@datapaulette.org>
- Repository : https://github.com/MaurinElectroTextile/TextileXY
- Web site : http://maurin.donneaud.free.fr/?-XYinteraction,3-

![alt tag](https://farm1.staticflickr.com/151/415702494_c5f5f388be_o_d.jpg)

## The project

The XYtextile is a large tactile interface use to play electronic music.
The performer plays it simply by the movement of his/her hand on it's surface.
This textile interface allows users to compose and interpret electronic music by choreographic movements.
By its size, its texture, its flexibility and its transparency, this textile interface involves the whole body in the musical interpretation.
Like a music score, the sound elements are graphically represented on the fabric, giving to the composer the ability to locate and play (with) them.
Thus, for each piece of music, a graphic partition is carried out.
The idea behind this project is also to develop an opposite approach to a classical process (from graphic towards the sound).
Created in collaboration with graphic designers and composers, these hybrid textiles offer spaces to be explored by look, touch and gesture.
Today, this multi- functional project inspires new usages in numerous domains.
For example, we're currently working with a choreographer to integrate dance with the musical fabric.
We have already created an installation in which allowed two people to communicate by drawings on the fabric over an internet connection.
We also plan to use this programmable surface for gesture recognition.
The idea is to associate symbolic gestures with a particular function: for example, to make an ambient light glow, you need to draw a circle on the sensitive fabric placed on a room wall.

Within the research project "ENIGMES" on the topic of navigable score, Marco Marini was taken part in the creation of a new XYtextile audio and graphic composition.
Actualy Marco Marini uses this interface to do musical graphic notations and live performances.
Marco play The fabric as an instrument, facing the public through the translucent fabric he manipulate the sound as a physical material and act like a dancer.

<<<<<<< HEAD
## Electronic Hardware
This smart textile is made out of two conductive fabrics, each one containing conductive lines oriented in opposite directions.
When a pressure is apply on the fabric, the two fabrics connect and the electronic sens the position of the touch.
The technic is derivative from the voltage divider technic.

![alt tag](https://farm1.staticflickr.com/176/429687135_4d1ef7704b_o_d.gif)

## Electronic firmware
Arduino sketch with optimized communication
To get the XY coordinates the firmware do a two time sensing algorithm.
Eatch sequence sens a value who is proportional to X or Y finger position.
This principle can be illustrated by two potentiometers with the middles pins connected together and the others pins connected to the microcontroleur.
Below, the two-time program to obtain significant values of XY finger position. 
=======
## Electronic Hardware
This smart textile is made out of two conductive fabrics, each one containing conductive lines oriented in opposite directions. When a pressure is apply on the fabric, the two fabrics connect and the electronic sens the position of the touch. The technic is derivative from the voltage divider technic.

![alt tag](https://farm1.staticflickr.com/176/429687135_4d1ef7704b_o_d.gif)

## Electronic firmware
To get the XY coordinates the firmware do a two time sensing algorithm. Eatch sequence sens a value that cotrespond to X or Y finger position. This principle can be illustrated by two potentiometers with the middles pins connected together and the others pins connected to the microcontroleur. Below you can see the two-time program schematics to obtain the XY values of thr finger position.
>>>>>>> 8818fea018fd1431148e6009f1d78e572ed8dd2a

![alt tag](https://github.com/MaurinElectroTextile/XYtextile/blob/master/docs/Schematic.gif)

<<<<<<< HEAD
## Software
This library contains a set of programs that can be combined to fit any graphic pattern composition.
The code used for that project is mainly Pure Data. This library is a fork of the ENIGMES-Lib (Max-MSP) made by Roland Cahen for the ENIGMES project. 
=======
## Software
This library contains a set of programs that can be combined to fit any graphic pattern composition. The code used for that project is mainly Pure Data. This library is a fork of the ENIGMES-Lib (Max-MSP) made by Roland Cahen for the ENIGMES project. 
>>>>>>> 8818fea018fd1431148e6009f1d78e572ed8dd2a

- Pure Data driver : data acquisition of XY textile
- Processing driver : data acquisition of XY textile
- Curves following : mapp any sound file onto a graphic curve by Vincent Rioux
- Zone detection : describe zones, with complex shapes and possibly overlapping, and associates them with sound datas.
- Angular detection : determine distance and angular value of one vector made by the finger and a reference point.
- Munger player : a real-time multichannel granular synthesis player by Dan Trueman.
- Python within Pure Data gesture recognition : record curves gesture and match them with effect. Vincent Rioux.

