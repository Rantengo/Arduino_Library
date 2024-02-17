#include <ArduinoWiFiServer.h>
#include <BearSSLHelpers.h>
#include <CertStoreBearSSL.h>
#include <ESP8266WiFi.h>
#include <ESP8266WiFiAP.h>
#include <ESP8266WiFiGeneric.h>
#include <ESP8266WiFiGratuitous.h>
#include <ESP8266WiFiMulti.h>
#include <ESP8266WiFiScan.h>
#include <ESP8266WiFiSTA.h>
#include <ESP8266WiFiType.h>
#include <WiFiClient.h>
#include <WiFiClientSecure.h>
#include <WiFiClientSecureBearSSL.h>
#include <WiFiServer.h>
#include <WiFiServerSecure.h>
#include <WiFiServerSecureBearSSL.h>
#include <WiFiUdp.h>

#include <Blynk.h>

//Include the library files
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define BLYNK_AUTH_TOKEN "" //Enter your blynk auth token between "…"

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "";//Enter your WIFI name between "…"
char pass[] = "";//Enter your WIFI password between "…"

//Get the button value
BLYNK_WRITE(V0) 
{
digitalWrite(D0, param.asInt());
}
void setup() 
{
//Set the LED pin as an output pin
pinMode(D0, OUTPUT);
Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() 
{
//Run the Blynk library
Blynk.run();
}
