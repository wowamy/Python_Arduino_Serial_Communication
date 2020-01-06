#define LED 13
String str;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    // 讀取傳入的字串直到"\n"結尾
    str = Serial.readStringUntil('\n');

    if (str == "LED_ON") {           
        digitalWrite(LED, HIGH);     
        Serial.println("LED is ON");
    } else if (str == "LED_OFF") {
        digitalWrite(LED, LOW);
        Serial.println("LED is OFF");
    }
  }
}
