#include <SoftwareSerial.h>

#include <String.h>

SoftwareSerial mySerial(2, 3);

#include <LiquidCrystal.h>

#define trigPin 4

#define echoPin 5

#define M1 12

#define M2 13

#define IR AO

#define GAS A1

LiquidCrystal Icd(6, 7, 8, 9, 10, 11);

float powerValue = 0;

int valu=0

void setup()

mySerial.begin(9600);

Serial.begin(9600);

pinMode(M1, OUTPUT);

pinMode(M2, OUTPUT);

pinMode(IR, INPUT);

pinMode(GAS, INPUT);

pinMode(trigPin, OUTPUT); 

pinMode(echoPin, INPUT); 

lcd begin(16, 2); 

lcd.setCursor(0, 0);
  
  lcd.print(" BOOTING MODEM ");
  
  delay(1), Icd setCursor(0, 1);

  lcd.print(" PLEASE WAIT "):

delay(10000);

lcd setCursor(0, 0); 

lcd print(" SMART DUMPSTER "); 

delay(1);

lcd setCursor(0, 1)3;

Icd print("LEVEL:    ");

delay(3000),

}

void loop()

{

if(digitalRead(GAS)==LOW&&digitalRead(IR)==HIGH)

{

lcd setCursor(10, 1):

lcd print("BIO ");

digitalWrite(M1, HIGH);

digitalWrite(M2, LOW);

delay(250);

digitalWrite(M1, LOW);

digitalWrite(M2, LOW);

delay(100);

digitalWrite(M1, LOW);

digitalWrite(M2, HIGH);

delay(350)

digitalWrite(M1, LOW);

digitalWrite(M2, LOW);

delay(100);

Icd.setCursor(10, 1);

Icd.print("    ");

}

if(digitalRead(GAS)==HIGH&&digitalRead(IR)==HIGH)

{

lcd.setCursor(10, 1):

lcd.print("NONBIO");

delay(500);

lcd.setCursor(10, 1); 

lcd print(" ");

}

long duration, distance,

digitalWrite(trigPin, LOW);

delayMicroseconds(2);

digitalWrite(trigPin, HIGH);

delayMicroseconds(10);

digitalWrite(trigPin, LOW);

duration = pulseln(echoPin, HIGH); 

distance = (duration/2)/29.1;

if(distance>100){distance=0;}

// distance = 100 - distance:

lcd.setCursor(6, 1);

lcd.print(" ");

lcd.setCursor(6, 1);

Icd.print(distance),

if(distance>2 && distance<10)

{

mySerial.print("AT");

mySerial.write(13);

mySerial.write(10);

delay(1000);

mySerial.println("AT+CMGF=1");

mySerial.write(13);

mySerial.write(10);

delay(1000);

mySerial.println("AT+CMGS="63813933151"); 

mySerial.write(13);

mySerial write(10); 

delay(1000);

mySerial.println("http://www.annaunivbyethost3.com/waste.html"); 

mySerial.write(26);

mySerial write(10); 

delay(10000);

}

}
