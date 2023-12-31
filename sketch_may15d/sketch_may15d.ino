
#include <Keypad.h>
#include<Servo.h>
#define ledr 6
#define ledb 7
#define trig 8
#define echo 9
#define buzzer 12

int kere=0;
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
char storepass[]="1234";
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
