#include "Config.h"
#include "WIFI.h"
#include "Server.h"
#include "MQTT.h"
#include "Range.h"


void setup(void){
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  for(int i=0; i< 3; i++) {
    digitalWrite(led, !digitalRead(led));
    delay(500);
  }
  WIFI_init(false);
  server_init();
  MQTT_init();
  range_init();
  mqtt_cli.publish(TOPIC_HELLO, "hello emqx");  
}

void loop(void){
  server.handleClient();                   
  mqtt_cli.loop();
  int range = get_range();
  mqtt_cli.publish(TOPIC_DATA, String(range).c_str());  
  delay(1000);
}
