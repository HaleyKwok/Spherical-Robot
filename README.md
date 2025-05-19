# Petronus Spherical Robot


Pet + Patronus = Your Pets’ PETRONUS

P: Perception
E: Environment
T: Teleoperation
R: Robotics
O: Operations
N: Navigation
U: Utility
S: System

<div align="center"><img src="/pic/PetronusLogo.png" align="center" />
</div> 

---

## 📍 Mission
Our mission is to provide innovative and practical solutions that improve the quality of life for pets and their owners. We are committed to leveraging the latest trends in Artificial Intelligence (AI) and the Internet of Things (IoT) to provide a range of products that enable pet owners to monitor and care better for their pets.

--- 

## 🔆 Introduction

Petronus is a spherical robot with a purpose of being a pet sitter. The aim of this product is to create a robot-led solution that leverages the latest trends in artificial intelligence (AI) and the Internet of Things (IoT) to care for pets, improve their quality of life, help monitor their daily activities and create a compelling experience. With the use of this robot, pet owners will be able to monitor and play with their pets whenever they want. Our product development process involves extensive research and development to ensure that our products meet the needs of pet owners and their pets.

---

## 🥳 Features

### Product Overview 
<div align="center"><img src="/pic/SphericalRobot.jpeg" align="center" width = "350" />
</div> 

<br>

- Bluetooth: Linking to mobile devices
<div align="center"><img src="/pic/Bluetooth.png" align="center" />
</div>  

<br>

- Mini camera: Monitoring the real-time situation 
<div align="center"><img src="/pic/Camera.png" align="center" />
</div> 

<br>

- Music Player: Playing music to the pets remotely through mobile devices
<div align="center"><img src="/pic/Music.png" align="center" />
</div> 

<br>

- LED Lights: Entertaining with pets
<div align="center"><img src="/pic/LED.png" align="center" />
</div> 
<br>

Demonstration Video: [Video in Google Drive](https://drive.google.com/file/d/1X-75ReIW8xzi45FKERpuovpHpaWbvhPE/view?usp=sharing)
<br>

Control Diagram: [Control Diagram](/doc/ControlDiagramExplanation.pdf)
<div align="center"><img src="/pic/ControlDiagram.png" align="center"/>
</div> 
<br>

Code for reference: [Version 1](/code/Motion_Control_V2.ino)
<br>

> A program that controls two DC motors and a strip of WS2812 LEDs using an external device via a software serial interface. It is waiting for serial input via pins 6 and 7, and it reacts to certain characters (A, B, C, D, E, F, G, a, b, c, d, e, f, g) to control the direction and speed of the two DC motors. The motors are connected to pins 3, 9, 10, and 11. Additionally, the program initializes the WS2812 LED strip using the FastLED library and sets the brightness of the LEDs. There is also a function to twinkle the LEDs at a certain interval and chance.

### What's New?

Code for reference: [Version 2](/code/LEDlightband.ino)
<br>

> The software serial interface is used to communicate with an external device via the pins 6 and 7. The program waits for serial input and reacts to a series of characters (A, B, C, D, E, F, G, a, b, c, d, e, f, g) by controlling the direction and speed of two DC motors connected to the pins 3, 9, 10, and 11. The strip of WS2812 LED beads is connected to pin 5, and it is initialized with the FastLED library. The program sets the brightness of the LEDs, and it has a function to twinkle the LEDs at a certain interval and chance.
>> It is another version of the Spherical Robot with an LED strip; all descriptions in this report are based on Version 1 only.

---

### 📐 Product Design
<div align="center"><img src="/pic/ProductDesign.png" align="center" width = "300" />
</div> 
<br>

#### Plastic Layers
<div align="center"><img src="/pic/Layer.png" align="center" />
</div> 
<br>

#### Mechanical Components
<div align="center"><img src="/pic/MechanicalComponent.png" align="center" />
</div> 
<br>

#### Electronic Components
<div align="center"><img src="/pic/ElectronicComponent.png" align="center" />
</div> 
<br>

---

## 🧾 Petronus Pet Care Ball Robot User Guide
User Guide in PDF version: [User Guide](/doc/UserGuide.pdf)

<details close>
<summary>User Guide</summary>
  
- **The package should include:**
1. The Pet Care Ball Robot  2. Two 18650 Rechargeable batteries.  3. A User Guide

- **I. Unboxing the Robot**
1. Remove all parts from the packaging.
2. Make sure all parts are present and in good condition. If there are any damage or defects, please contact our Customer Service team as soon as possible.
3. Check the user guide for instructions.

- **II. Charging the batteries**
1. Connect the batteries with the charging box to a power source using the charging cable.
2. Charging will take 2-3 hours to complete.
3. Ensure that the batteries is fully charged prior to first use.

- **III. Connecting your device as controller**
1. Download BluetoothLE app via Apple’s App Store, Android’s Google Play Store or any app store.
2. Open the ball robot and take the main body out of the casing.
3. Turn on the Bluetooth module by ()
4. Ensure that the device you want to use as controller has its Bluetooth on.
5. Open the BluetoothLE app.
6. Search for “3103G12”.
7. Click connect to pair the robot with your smartphone.

- **IV. Operating the Robot**
1. Open the BluetoothLE app to control the robot's movement and speed.
2. Ensure that the device is properly connected.
3. Click on “Open Terminal”.
4. Click on “FFE0”.
5. Control the robot’s movement by using the instructions provided.
4. There are several instruction modes available:
- Enter “A” or “a” to move forward
- Enter “B” or “b” to move backwards
- Enter “L” or “l” to turn left
- Enter “R” or “r” to turn right
- Enter “S” or “s” to spin
- Enter “N” or “n” to stop
- Enter “O” or “o” to turn off lights

- **V. Playing Music**
1. Turn on the speaker by holding down the button on the speaker.
2. Turn on Bluetooth on your device that you would like to use as a controller.
3. Look for a device named “MT”.
4. Click on “MT” to pair the speaker with your device.
5. Once paired successfully, play any sound on your device.
6. If there is no sound output, try increasing the volume or reconnecting your device.
7. If it still does not work, please contact our Customer Service team.

- **VI. Cleaning the Robot**
1. Only clean the case of the robot with a damp cloth after each use.
2. Do not use any harsh cleaning agents.
3. Let it dry before reassembling with the main body or storing.
4. DO NOT clean the inner body with a damp cloth.
5. Clean the inner body using a brush and very lightly brush the parts/components to not potentially damage the parts.

- **VII. Storing the Robot**
1. Store the robot in a cool, dry place.
2. Keep the robot away from direct sunlight.
3. DO NOT let the robot get into contact with any liquid.
3. Make sure the robot is fully charged and dry before storing it away.

</details>

---

## 📋 Technical Report

Business Proposal: 
[Business Proposal](/doc/BusinessProposal_v2.pdf)


---

## Business Report

Booth Presentation: 
[Booth Presentation](https://github.com/HaleyKwok/Spherical_Robot/blob/main/BoothPresentation.pdf)

<div align="center"><img src="/pic/Poster.png" align="center" width = "350"/>
</div> 


---

## 📝 Changelog
- __[2022.10.02]__: Project started.
- __[2022.11.25]__: Genenate the business ideas and prepare the materials.
- __[2023.01.15]__: Mechanical parts in progress.
- __[2023.02.27]__: Electronic parts in progress.
- __[2023.04.03]__: Release code.
- __[2023.04.04]__: Demo released.
- __[2023.04.16]__: Finalized the project details.

## 📭 Contact
If your have any comments or questions, feel free to contact kwokhinchi@gmail.com 

---

Copyright © [The Hong Kong Polytechnic University, Faculty of Engineering, Department of Industrial & Systems Engineering](https://www.polyu.edu.hk/ise/), [Haley Kwok](https://github.com/HaleyKwok), SALEH Alessandra Sylva, WONG Pak Ki, WONG Sze Nga, LUI Uen Yau, SO Hiu Lam, and SIN Tak Chi. All rights reserved.


<img src = '/pic/logo-polyu.png'>
<img src = '/pic/tagline1.png' width = 200>
