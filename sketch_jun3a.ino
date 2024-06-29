#include <Servo.h>

Servo servo;
int pos = 0;
bool state;
int on = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(9,INPUT);
  servo.attach(3);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  state = digitalRead(9);
  Serial.println(state);
  if (state) {
    on++;
    delay(500);
  }
  if ( on % 2 == 0 ) {
    servo.write(90);
    delay(500);
  }
  else {
    servo.write(0);
  }
}
