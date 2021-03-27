/*************************************************************
  Download latest Blynk library here:
    https://github.com/blynkkk/blynk-library/releases/latest

  Blynk is a platform with iOS and Android apps to control
  Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build graphic interfaces for all your
  projects by simply dragging and dropping widgets.

    Downloads, docs, tutorials: http://www.blynk.cc
    Sketch generator:           http://examples.blynk.cc
    Blynk community:            http://community.blynk.cc
    Follow us:                  http://www.fb.com/blynkapp
                                http://twitter.com/blynk_app

  Blynk library is licensed under MIT license
  This example code is in public domain.

 *************************************************************
  This example runs directly on NodeMCU.

  Note: This requires ESP8266 support package:
    https://github.com/esp8266/Arduino

  Please be sure to select the right NodeMCU module
  in the Tools -> Board menu!

  For advanced settings please follow ESP examples :
   - ESP8266_Standalone_Manual_IP.ino
   - ESP8266_Standalone_SmartConfig.ino
   - ESP8266_Standalone_SSL.ino

  Change WiFi ssid, pass, and Blynk auth token to run :)
  Feel free to apply it to any other example. It's simple!
 *************************************************************/

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] ="iwfmCybLXrBDEytF3TPLN5fbQTyAakmg";
// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "sravani";
char pass[] = "ksravani";
//int buzzer = D2;
//int smokeA0 = A0;
//int sensorThres = 600;
void setup()
{
  // Debug console
  Serial.begin(9600);
   Blynk.begin(auth, ssid, pass);
  //pinMode(D3,INPUT);
 // pinMode(relay,OUTPUT);
  //pinMode(A0,INPUT);
  /*pinMode(buzzer, OUTPUT);
  pinMode(smokeA0, INPUT);*/
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
}
void loop()
{
  /*int x = analogRead(A0);
  Serial.println("Soil:");
  Serial.println(x);
  if(x > 0 && x <= 200){
    Serial.println(x);
     digitalWrite(1,LOW);
     digitalWrite(2,HIGH);
  }
  
  else if(x > 200 && x <= 500){
    Serial.println(x);
     digitalWrite(1,LOW);
     digitalWrite(2,LOW);
  }
  else if(x > 500 && x <= 1023){
    Serial.println(x);
     digitalWrite(1,HIGH);
     digitalWrite(2,LOW);
 }*/
 /*int analogSensor = analogRead(smokeA0);

 Serial.print("Pin A0: ");
 Serial.println(analogSensor);
 // Checks if it has reached the threshold value
 if (analogSensor > sensorThres)
 {
   tone(buzzer, 1000, 200);
   Blynk.notify("ALERT : FIRE IN THE FIELDS");  
 }
 else
 {
   noTone(buzzer);
 }*/
  Blynk.run();
  delay(1000);
}
