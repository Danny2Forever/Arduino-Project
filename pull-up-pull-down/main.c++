#define LED_PIN1 8
#define BUTTON_PIN1 7
#define LED_PIN2 6
#define BUTTON_PIN2 5


byte lastButtonState1 = LOW;
byte ledState1 = LOW;
byte lastButtonState2 = LOW;
byte ledState2 = LOW;

void setup() {
  pinMode(LED_PIN1, OUTPUT);
  pinMode(BUTTON_PIN1, INPUT);
  pinMode(LED_PIN2, OUTPUT);
  pinMode(BUTTON_PIN2, INPUT);
}

void loop() {
  byte buttonState1 = digitalRead(BUTTON_PIN1);
  if (buttonState1 != lastButtonState1) {
    lastButtonState1 = buttonState1;
    if (buttonState1 == HIGH) {
      if(ledState1 == HIGH){
        ledState1 = LOW;
        digitalWrite(LED_PIN1, ledState1);
      }else{
        ledState1 = HIGH;
        digitalWrite(LED_PIN1, ledState1);
      }
    }
  }
  
  byte buttonState2 = digitalRead(BUTTON_PIN2);
  if (buttonState2 != lastButtonState2) {
    lastButtonState2 = buttonState2;
    if (buttonState2 == HIGH) {
      if(ledState2 == HIGH){
        ledState2 = LOW;
        digitalWrite(LED_PIN2, ledState2);
      }else{
        ledState2 = HIGH;
        digitalWrite(LED_PIN2, ledState2);
      }
    }
  }
}
