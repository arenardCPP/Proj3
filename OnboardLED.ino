#define PIN_LED 2

void setup() {
  // put your setup code here, to run once:
  //init pin LED_BUILTIN as output
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN_LED, HIGH); //turn led off
  delay(1000); //wait 1 sec
  digitalWrite(PIN_LED, LOW); //turn led on
  delay(1000); //wait 1 sec
}
