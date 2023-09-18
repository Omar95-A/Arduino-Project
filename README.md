# Arduino Project

> Smart Hand Sanitizer Machine Project (Akıllı El Dezenfektan Makinesinin Projesi). It's Software Engineering College Project. YMÜ338 Microprocessors and Programming (YMÜ338 Mikroişlemciler ve Programlama) course project of the software engineering program at Firat University.
> Project In Progress ⚙️

## Contents

- [📄 About Project](#About_Project)
- [⚙️ Working Principle](#Working_Principle)
- [🖼️ Project Images](#Project_Images)
- [🔌 Circuit Diagram](#Circuit_Diagram)
- [📈 Flowchart](#Flowchart)
- [𓉧 Schematic Diagram](#Schematic_Diagram)
- [👨‍💻 Source Code](#Source_Code)



## About_Project

### Introduction

In covid-19 pandemic period which is a global outbreak, hand hygiene is the core preventive measure in the spread of the disease with COVID-19 transmission mainly spreading between people through direct, indirect (through contaminated objects or surfaces), or close contact with infected people via mouth and nose secretions, washing hands with soap and running water is of critical importance. In order to eliminate most of the germs on the hands, one needs to apply a good hand washing practice but this will make the hand sanitizer dispenser to be contaminated.
<br><br>
The main objective of this project is to work on a smart hand sanitizer machine that this machine work without touching a liquid soap box, in order to reduce the spread of the covid-19 virus. The method used to achieve the objectives of this project is by using the Arduino. In addition to the way the smart hand sanitizer machine  works by means of a sensor, I will also add to this project the possibility of working a this machine based on a password to learn how to work passwords with machines b using Arduino.

### Project Components
Smart Hand Sanitizer Machine Project composed of:
- Arduino Uno board
- Arduino Uno USB Cable
- Large breadboard
- Distance sensor
- Servo Motor
- 4X4 Membrane Keypad
- Two LED
- One Buzzer
- Two Resistance
- Jump wire
- Liquid Soap Bottle
- Cardboard Pieces
- Code on the Arduino IDE program
<img src="https://github.com/Omar95-A/Arduino-Project/blob/main/img/Project%20Components.png" width="900"/>

For more details about the project components [List of project components](https://github.com/Omar95-A/Arduino-Project/blob/main/img/Component%20List.png).

## Working_Principle

Whenever the user puts his/her hand at a distance less than 10 cm, the ultrasonic sensor detects it. The signal from the ultrasonic sensor is then processed and obtained in the Arduino Microcontroller. Then  Arduino will send an output signal to the motor driver, LEDs and Buzzer. Also Servo Motor will make a motion to press the liquid soap bottle high part out to use it. In addition to the way the smart hand sanitizer machine works by means of a sensor, I will also add to this project the possibility of working a this machine based on a password to learn how to work passwords with machines b using Arduino. When the correct password is entered, the Servo Motor will start and the blue LED will turn on. If the password is wrong, the red LED and the buzzer will turn on.


## Project_Images

<p align="center">
    <table>
        <tr>
            <td><img src="https://github.com/Omar95-A/Arduino-Project/blob/main/img/Arduino%203.JPG" width="100"/></td>
            <td><img src="https://github.com/Omar95-A/Arduino-Project/blob/main/img/IMG_01.jpg" width="100"/></td>
            <td><img src="https://github.com/Omar95-A/Arduino-Project/blob/main/img/IMG_04.png" width="100"/></td>
            <td><img src="https://github.com/Omar95-A/Arduino-Project/blob/main/img/IMG_05.JPG" width="100"/></td>
            <td><img src="https://github.com/Omar95-A/Arduino-Project/blob/main/img/IMG_02.jpg" width="100"/></td>
            <td><img src="https://github.com/Omar95-A/Arduino-Project/blob/main/img/IMG_03.jpg" width="100"/></td>
            <td><img src="https://github.com/Omar95-A/Arduino-Project/blob/main/img/IMG_0725.JPG" width="100"/></td>
        </tr>
        <tr>
            <td><img src="https://github.com/Omar95-A/Arduino-Project/blob/main/img/IMG_0727.JPG" width="100"/></td>
            <td><img src="https://github.com/Omar95-A/Arduino-Project/blob/main/img/IMG_8420%20-%20Copy.JPG" width="100"/></td>
            <td><img src="https://github.com/Omar95-A/Arduino-Project/blob/main/img/Project%20Components.png" width="100"/></td>
        </tr>
    </table>
</p>
<br>

## Circuit_Diagram

- Ensure that all project components are present and arranged as below:
<img src="https://github.com/Omar95-A/Arduino-Project/blob/main/img/Smart%20Hand%20Sanitizer%20Machine%20Project.png" width="900"/>

- Connect the two LEDs and resistors to the Arduino board.
<img src="https://github.com/Omar95-A/Arduino-Project/blob/main/img/Smart%20Hand%20Sanitizer%20Machine%20Project%20(1).png" width="900"/>



<br>

## Flowchart

<br>

## Schematic_Diagram

<br>

## Source_Code
Project In Progress ⚙️ 
> I am currently working on the project code to improve it, if you are excited about this project and want to work on your own arduino project, you can give me a star if there are a lot of people who want to see this project completed, I will work on this project more quickly.
<br>
You need to include some of libraries in code like:

- To use the Membrane Keypad:

```bash
#include <Keypad.h>
```

- To use the Servo Motor:

```bash
#include<Servo.h>
```

<br>

```bash
#define ledr 6
#define ledb 7
#define trig 8
#define echo 9
#define buzzer 12

int kere = 0;
const byte ROWS = 4; 
const byte COLS = 4;
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {A2, A3, A4, A5};
byte colPins[COLS] = {5, 4, 3, 2};

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
char pass[4];
char storepass[] = "1234";
int i,count, pos = 0; 
Servo myservo;

void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(ledb,OUTPUT);
  pinMode(ledr,OUTPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
  myservo.attach(11);
}

void loop() {

  char key = keypad.getKey();
    if (key && key!='D'){
      Serial.print(key);
      pass[i]=key;
      i++;
      }
}
```

