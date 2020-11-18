#define LED 6
int val = 0;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  
}

int viive = 300;
int LEDViive = 100;

void loop(){
  digitalWrite (LED, HIGH);
  delay(viive);
  digitalWrite(LED, LOW);
  delay(viive);
  val = digitalRead(LED);
  digitalWrite(LED, val);
  Serial.println(val);
}
