#define LED 5
#define ON LOW
#define OFF HIGH
bool val = digitalRead(5);

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

int viive = 1000;

void loop(){ 
  digitalWrite (LED, ON);
  if (val = true){Serial.println("LED ON");}
  delay(viive);
  digitalWrite(LED, OFF);
  Serial.println("LED OFF");
  delay(viive);
 
}
