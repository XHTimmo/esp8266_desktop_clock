#include <ArduinoWiFiServer.h>
#include <BearSSLHelpers.h>
#include <CertStoreBearSSL.h>
#include <ESP8266WiFi.h>
#include <ESP8266WiFiAP.h>
#include <ESP8266WiFiGeneric.h>
#include <ESP8266WiFiGratuitous.h>
#include <ESP8266WiFiMulti.h>
#include <ESP8266WiFiSTA.h>
#include <ESP8266WiFiScan.h>
#include <ESP8266WiFiType.h>
#include <WiFiClient.h>
#include <WiFiClientSecure.h>
#include <WiFiClientSecureBearSSL.h>
#include <WiFiServer.h>
#include <WiFiServerSecure.h>
#include <WiFiServerSecureBearSSL.h>
#include <WiFiUdp.h>

void setup()
{
  Serial.begin(115200);                     //波特率115200
  Serial.println("");
  WiFi.mode(WIFI_STA);
  WiFi.begin("Timmo5","SLwhx...0103");
  while (WiFi.status() != WL_CONNECTED) {   //等待连接wifi
      delay(500);
      Serial.print(".");
    }
  Serial.println("Connected Successful!!"); //成功连接
    Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

}


void loop()
{
}

