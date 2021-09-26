#include <WiFi.h>

const char* ssid = "XXXX";
const char* password =  "XXXX";

void setup() {
  delay(10);
  Serial.begin(115200);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) { //Check for the connection
    delay(1000);
    Serial.println("Conecting...");
    
    if (WiFi.status() == 1){

      Serial.println("No SSID Avaible");
           
    }
     
    if (WiFi.status() == 6){

      Serial.println("Disconnected");
           
    }
    
  }

  Serial.print("Conection was successfully, IP: ");
  Serial.println(WiFi.localIP());

}

void loop() {
  

}
