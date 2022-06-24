#include <TFT_eSPI.h>

void setup()
{
  Serial.begin(115200);                     //波特率115200
/*  Serial.println("");
  WiFi.mode(WIFI_STA);
  WiFi.begin("Timmo5","SLwhx...0103");
  while (WiFi.status() != WL_CONNECTED) {   //等待连接wifi
      delay(500);
      Serial.print(".");
    }
  Serial.println("Connected Successful!!"); //成功连接
    Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
*/
}


void loop()
{
    digitalWrite(TFT_BL, 255);
}

