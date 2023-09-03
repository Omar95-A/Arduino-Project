# Arduino Project

> Smart Hand Sanitizer Machine Project (Sensörlü El Dezenfektan Makinesinin Projesi). It's Software Engineering College Project. YMÜ338 Microprocessors and Programming (YMÜ338 Mikroişlemciler ve Programlama) Bachelor's Project.

## Contents

- [📄 About Project](#About_Project)
- [⚙️ How The Project Works](#How_The_Project_Works)
- [🖼️ Project Images](#Project_Images)
- [👨‍💻 Source Code](#Source_Code)



## About_Project

### Introduction

Smart Hand Sanitizer Machine Project (Sensörlü El Dezenfektan Makinesinin Projesi). It's Software Engineering College Project. YMÜ338 Microprocessors and Programming (YMÜ338 Mikroişlemciler ve Programlama) Bachelor's Project.

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
- Two Electrical Resistance
- Liquid Soap Box
- Code on the Arduino IDE program

For more details about the project components you can read the [Project Report](https://github.com/Omar95-A/Arduino-Project/blob/main/Project%20Report.pdf).

## How_The_Project_Works

When an analog signal is generated in front of the sensor, the servo motor will be instructed to move to a certain degree according to the code written in its program in the arduino IDE, while the Microcontroller is programmed on the Arduino board via the `Arduino IDE` program using a USB cable. When the Distance Sensor detects motion within the sensor area, it will use a Servo Motor to make a motion to press the liquid soap box high part out to use it.


## Project_Images

<p align="center">
    <table>
        <tr>
            <td><img src="https://github.com/Omar95-A/Arduino-Project/blob/main/img/Arduino%203.JPG" width="100"/></td>
            <td><img src="https://github.com/Omar95-A/Arduino-Project/blob/main/img/IMG_05.JPG" width="100"/></td>
        </tr>
    </table>
</p>


## Source_Code

You need to include some of libraries in code like:

- To use the Membrane Keypad:

```bash
#include <Keypad.h>
```

- To use the Servo Motor:

```bash
#include<Servo.h>
```

- To define the variables that we will use it for LED's and the buzzer:

```bash
#define ledr 6
#define ledb 7
#define trig 8
#define echo 9
#define buzzer 12

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
```

