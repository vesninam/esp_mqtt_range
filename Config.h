String ssidAP = "ESP_WIFI"; // имя контроллера и точки доступа
String passwordAP = "ESP8266123"; // пароль точки доступа

char* TOPIC_HELLO = "lab/sensors/stair/range/state";
char* TOPIC_DATA = "lab/sensors/stair/range/data";

//char* ssidCLI = "YOUR_SSID"; // имя контроллера и точки доступа
//char* passwordCLI = "YOUR_PASS"; // пароль точки доступа

char* ssidCLI = "";
char* passwordCLI = "";

char* mqtt_broker = "broker.emqx.io";

const int mqtt_port = 1883;

const int led = 2;

const int trigPin = 12; 
const int echoPin = 14;  
