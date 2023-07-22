#include <Wire.h>
#include <FirebaseESP8266.h>
#include  <ESP8266WiFi.h>
 
#define FIREBASE_HOST "https://team7-2a1d6-default-rtdb.firebaseio.com/"
#define WIFI_SSID "IIITS_Student" // Change the name of your WIFI
#define WIFI_PASSWORD "iiit5@2k18" // Change the password of your WIFI
#define FIREBASE_Authorization_key "WwXpx55qf0P18WerBrTK1ioRpaTsGuT65f4sWWkB"
 
FirebaseData firebaseData;
FirebaseJson json;

char r, g, b, cnt, clr;
void setup() {
  Serial.begin(115200); /* begin serial for debug */
  Wire.begin(D1, D2); /* join i2c bus with SDA=D1 and SCL=D2 of NodeMCU */
  WiFi.begin (WIFI_SSID, WIFI_PASSWORD);
  Serial.print("Connecting...");
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(300);
  }
  Serial.println();
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());
  Serial.println();
  Firebase.begin(FIREBASE_HOST,FIREBASE_Authorization_key);
}

void loop() {
  Wire.beginTransmission(8); /* begin with device address 8 of slave */
  Wire.write("Hello Arduino");  /* sends hello string */
  Wire.endTransmission();    /* stop transmitting */
  Wire.requestFrom(8, 13); /* request & read data of size 13 from slave */
  if(Wire.available()){
    char r = Wire.read();
    char g = Wire.read();
    char b = Wire.read();
    char cnt = Wire.read();
    char clr = Wire.read();
    Serial.println(r);
    Serial.println(g);
    Serial.println(b);
    Serial.println(cnt);
    Serial.println(clr);

    Firebase.setFloat(firebaseData, "Red:", r);
    Firebase.setFloat(firebaseData, "Green:", g);
    Firebase.setFloat(firebaseData, "Blue:", b);
    Firebase.setFloat(firebaseData, "Color:", cnt);
    Firebase.setFloat(firebaseData, "Count:", clr);
    delay(3000);
  }
  Serial.println();
  delay(1000);
}
