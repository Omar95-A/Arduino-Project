# Arduino Project <img src="https://github.com/Omar95-A/Arduino-Project/blob/main/img/Arduino_Logo.svg.png" width="50"/>

> Smart Hand Sanitizer Machine Project (Akıllı El Dezenfektan Makinesinin Projesi). It's Software Engineering College Project. YMÜ338 Microprocessors and Programming (YMÜ338 Mikroişlemciler ve Programlama) course project of the software engineering program at Firat University.


## Contents

- [📄 About Project](#About_Project)
- [⚙️ Working Principle](#Working_Principle)
- [📈 Flowchart](#Flowchart)
- [🖼️ Project Images](#Project_Images)
- [🔌 Circuit Diagram](#Circuit_Diagram)
- [𓉧 Schematic Diagram](#Schematic_Diagram)
- [👨‍💻 Source Code](#Source_Code)
- [📚 References](#References)

<br>

## About_Project

### Introduction

In covid-19 pandemic period which is a global outbreak, hand hygiene is the core preventive measure in the spread of the disease with COVID-19 transmission mainly spreading between people through direct, indirect (through contaminated objects or surfaces), or close contact with infected people via mouth and nose secretions, washing hands with soap and running water is of critical importance. In order to eliminate most of the germs on the hands, one needs to apply a good hand washing practice but this will make the hand sanitizer dispenser to be contaminated.
<br><br>
The main objective of this project is to work on a smart hand sanitizer machine that this machine work without touching a liquid soap bottle, in order to reduce the spread of the covid-19 virus. The method used to achieve the objectives of this project is by using the Arduino. In addition to the way the smart hand sanitizer machine  works by means of a sensor, I will also add to this project the possibility of working a this machine based on a password to learn how to work passwords with machines b using Arduino, as this project allows the machine to be used in two different ways at the same time.

### Project Components
Smart Hand Sanitizer Machine Project composed of:
- Arduino Uno
- Arduino Uno USB Cable
- Breadboard
- Distance sensor
- Servo Motor
- 4X4 Membrane Keypad
- Two LED
- One Buzzer
- Two Resistance
- Jump wire
- Liquid Soap Bottle
- Cardboard Pieces
- Code on the Arduino IDE
<img src="https://github.com/Omar95-A/Arduino-Project/blob/main/img/Project%20Components.png" width="900"/>

For more details about the project components [List of project components](https://github.com/Omar95-A/Arduino-Project/blob/main/img/Component%20List.png).

<br>

## Working_Principle

Whenever the user puts his/her hand at a distance less than 10 cm, the ultrasonic sensor detects it. The signal from the ultrasonic sensor is then processed and obtained in the Arduino Microcontroller. Then  Arduino will send an output signal to the motor driver, LEDs and Buzzer. Also Servo Motor will make a motion to press the liquid soap bottle high part out to use it. In addition to the way the smart hand sanitizer machine works by means of a sensor, I will also add to this project the possibility of working a this machine based on a password to learn how to work passwords with machines b using Arduino. When the correct password is entered, the Servo Motor will start and the blue LED will turn on. If the password is wrong, the red LED and the buzzer will turn on.

<br>

## Flowchart
<img src="https://github.com/Omar95-A/Arduino-Project/blob/main/img/Flowchart%20-1.png" width="900"/>
<br>

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

- Ensure that all project components are present and placement as follows:
<img src="https://github.com/Omar95-A/Arduino-Project/blob/main/img/Smart%20Hand%20Sanitizer%20Machine%20Project.png" width="900"/>

- Insert the LEDs and resistors into the Arduino. Make sure the longer leg of the LED is to the right, connected to the resistor. The resistor doesn't have a direction, so it doesnt matter which way it goes in, and short leg to GND.
<img src="https://github.com/Omar95-A/Arduino-Project/blob/main/img/Smart%20Hand%20Sanitizer%20Machine%20Project%20(1).png" width="900"/>

- Insert the ultrasonic distance sensor and buzzer into the Arduino.
<img src="https://github.com/Omar95-A/Arduino-Project/blob/main/img/Smart%20Hand%20Sanitizer%20Machine%20Project%20(2).png" width="900"/>

- Insert the servo motor and keypad into the Arduino.
<img src="https://github.com/Omar95-A/Arduino-Project/blob/main/img/Smart%20Hand%20Sanitizer%20Machine%20Project%20(3).png" width="900"/>

For more details about circuit diagram of the project, you can see: [Tinkercad](https://www.tinkercad.com/things/30m5I481pNB).

<br>

## Schematic_Diagram
<img src="https://github.com/Omar95-A/Arduino-Project/blob/main/img/Schematic%20Diagram.jpg" width="900"/>
<br>

## Source_Code

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
      }else if(key=='D')
    {
      if(i==4){
        for(int j=0;j<4;j++){
          if(pass[j]==storepass[j]){
            count++;
          }
        }
        if(count==4){
           kere++;
          Serial.print("\nŞifre Doğru, Basım sayısı= ");
          Serial.print(kere);
          Serial.println(" kere");
          for (pos = 0; pos <= 540 ; pos += 1)
  {
    myservo.write(pos);
    digitalWrite(ledb,HIGH);
  
    delay(1);
    
  }
  delay(100);
  for (pos = 540; pos >= 0; pos -= 1)
  {
    myservo.write(pos);
    digitalWrite(ledb,LOW);
    
    delay(1);
  }
          delay(1000);
          i=0;
          count=0;

        }else{
          Serial.println("\nŞifre Yanlış, lütfen tekrar deneyin ");
        digitalWrite(ledr,HIGH);
        digitalWrite(buzzer,HIGH);
        delay(1000);
        digitalWrite(ledr,LOW);
        digitalWrite(buzzer,LOW);
        i=0;
        count=0;
        }
      }else {
        Serial.println("\nŞifre Yanlış, lutfen tekrar deneyin ");
        digitalWrite(ledr,HIGH);
        digitalWrite(buzzer,HIGH);
        delay(1000);
        digitalWrite(ledr,LOW);
        digitalWrite(buzzer,LOW);
        i=0;
        count=0;
          
        }
    }

    
    
    
       if (calc_dis()<10)
{
  for (pos = 0; pos <= 540 ; pos += 1)
  {
    myservo.write(pos);
    digitalWrite(ledb,HIGH);
    digitalWrite(buzzer,HIGH);
    digitalWrite(ledr,LOW);
    delay(1);
    
    
  }
  delay(100);
  kere++;
  Serial.print("Basım sayısı= ");
  Serial.print(kere);
  Serial.println(" kere");
  for (pos = 540; pos >= 0; pos -= 1)
  {
    myservo.write(pos);
    digitalWrite(ledb,LOW);
    digitalWrite(buzzer,LOW);
    digitalWrite(ledr,HIGH);
    
    delay(1);
  }
  
  delay(100);

}

}

int calc_dis()
{
  int duration,distance;
  digitalWrite(trig,HIGH);
  delay(10);
  digitalWrite(trig,LOW);
  duration=pulseIn(echo,HIGH);
  distance = (duration/2) / 29.1;
  return distance;
}

```

<br>

## References

- WHO Guidelines on Hand Hygiene in Health Care [World Health Organization](https://www.who.int/teams/integrated-health-services/patient-safety).
- To learn the basics of Arduino or electronics you can learn from the [arduino.cc](https://docs.arduino.cc/hardware/uno-rev3) it's very useful.
- [Arduino Course for Beginners - Open-Source Electronics Platform.](https://www.youtube.com/watch?v=zJ-LqeX_fLU)
- [JavaTpoint](https://www.javatpoint.com/arduino) provides Arduino Tutorial.
- I created circuit diagram, schematic diagram of the project and I learned more about electronics with [Tinkercad](https://www.tinkercad.com/things/30m5I481pNB) is a free web app for 3D design, electronics, and coding, trusted by over 50 million people around the World.
- I created a flowchart with [Canva](https://www.canva.com/design/DAFuoo02xBY/TyN5XwLQAvG_vTvyXp-9ng/view?utm_content=DAFuoo02xBY&utm_campaign=share_your_design&utm_medium=link&utm_source=shareyourdesignpanel)'s free online flowchart maker.
- To see all the practical steps of the project, you can watch [my video](https://www.youtube.com/watch?v=MxZ4iplioMw) on YouTube.
- For more details about the project you can see [project report](https://github.com/Omar95-A/Arduino-Project/blob/main/Project%20Report.pdf).

<br>
