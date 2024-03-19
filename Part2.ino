int led = 3;
int pont = A0;
int val;
int time;

void setup(){
	pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void loop(){
  val = analogRead(pont);
  val = map(val, 0, 1023, 0, 4000);
  
  time = val / 512;
  
  for(int i = 0; i <= 255; i++) {
    analogWrite(led, i);
    delay(time);
  }
  for(int i = 255; i >= 0; i--) {
    analogWrite(led, i);
    delay(time);
  }
}
