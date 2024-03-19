int led = 3;
int pont = A0;
int val;

void setup(){
	pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void loop(){
	for(int i = 0; i <= 255; i++) {
        analogWrite(led, i);
        Serial.println(i);
    }
    delay(500);

    for(int i = 255; i >= 0; i--) {
        analogWrite(led, i);
        Serial.println(i);

    }

    delay(500);
}
