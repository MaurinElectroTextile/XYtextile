TextileXY
=========

The resistive XY textile interface
http://maurin.donneaud.free.fr/?-XYinteraction,3-

The textileXY is a large tactile interface use to play electronic music. The performer plays it simply by the movement of his/her hand on it's surface. This textile interface allows users to compose and interpret electronic music by choreographic movements. By its size, its texture, its flexibility and its transparency, this textile interface involves the whole body in the musical interpretation. Like a music score, the sound elements are graphically represented on the fabric, giving to the composer the ability to locate and play (with) them. Thus, for each piece of music, a graphic partition is carried out. The idea behind this project is also to develop an opposite approach to a classical process (from graphic towards the sound). Created in collaboration with graphic designers and composers, these hybrid textiles offer spaces to be explored by look, touch and gesture. Today, this multi- functional project inspires new usages in numerous domains. For example, we're currently working with a choreographer to integrate dance with the musical fabric. We have already created an installation in which allowed two people to communicate by drawings on the fabric over an internet connection. We also plan to use this programmable surface for gesture recognition. The idea is to associate symbolic gestures with a particular function: for example, to make an ambient light glow, you need to draw a circle on the sensitive fabric placed on a room wall.

The textileXY is currently used by Marco Marini a French Electro-Acoustic composer. Within the research project "ENIGMES" on the topic of navigable score, Marco Marini was taken part in creation of a dedicated XY textile. Currently finished, through performances Marco Marini uses all the gestual and acoustic actions patterns required to interprete this interactive score: musical notations, sound lines, trajectory... The movement of his hands on the textile surface triggers musical lietmotives. Inspired by echography (graphic sounds patterns), each graphic pattern uses simultaneously technical and symbolic codes. These patterns allow the musician to localise the sounds, their shape and their duration. The role of the performer is transformed, he is musican and dancer which makes for a unique mis-en-scene of the musical score. Facing the public the performer (both musician and dancer) shows how the movement of his hands bring to life the music as he traces the patterns on the surface of the translucent fabric. His fingers in contact with the fabric playlike the record head on a record : distorting the duration of the sound or simply triggering sound events. For the time being the sound environment that we are exploring are highly experimental but new, more "pop" partitions are in perspective.

Hardware : http://arduino.cc/en/Main/ArduinoBoardZero

Software :
Here we propose a set of programs usable with the XY interface. Those pieces of software are to be considered as a modular base to be adapted to a particular application. The code used for this library is mainly Pure Data, a multi-platform open-source visual programming. This library is inspired by the ENIGMES-Lib originally designed for Max Msp by Roland Cahen for the ENIGMES project. "ENIGMES-Lib" is a set of programs made for playing sound through interactive graphical metaphors.

 * Arduino zero sketch with optimized communication
 * Pure Data driver : data acquisition of XY textile
 * Processing driver : data acquisition of XY textile
 * Curves following : mapp any sound file onto a graphic curve by Vincent Rioux
 * Zone detection : describe zones, with complex shapes and possibly overlapping, and associates them with sound datas.
 * Angular detection : determine distance and angular value of one vector made by the finger and a reference point.
 * Munger player : a real-time multichannel granular synthesis player by Dan Trueman.
 * Python within Pure Data gesture recognition : record curves gesture and match them with effect. Vincent Rioux.

