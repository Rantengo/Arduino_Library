/*New blynk app project
   Home Page
*/

//Include the library files
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define BLYNK_AUTH_TOKEN "fde0Nj3E--PpjGbF-GskzCu9yiwP3dVM" //Enter your blynk auth token

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Azka kambing";//Enter your WIFI name
char pass[] = "azka kambing";//Enter your WIFI password

//Get the button value
BLYNK_WRITE(V0) 
{
  digitalWrite(D0, param.asInt());
  //digitalWrite(D1, param.asInt());

}
BLYNK_WRITE(V1) 
{
  digitalWrite(D1, param.asInt());
}

void setup() {
  //Set the LED pin as an output pin
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  //Initialize the Blynk library
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  //Run the Blynk library
  Blynk.run();
}


