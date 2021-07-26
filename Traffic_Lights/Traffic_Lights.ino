#define RED_PIN     5
#define YELLOW_PIN  6
#define GREEN_PIN   7

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
}
void loop() {
  digitalWrite(RED_PIN, HIGH);      // turn the Red ON
  digitalWrite(GREEN_PIN, LOW);     // turn the Green OFF (previously ON).
  delay(5000);
  
  digitalWrite(YELLOW_PIN, HIGH);   // turn the Yellow ON
  digitalWrite(RED_PIN, LOW);       // turn the Red OFF (previously ON).
  delay(1000);

  digitalWrite(GREEN_PIN, HIGH);    // turn the Green ON
  digitalWrite(YELLOW_PIN, LOW);    // turn the Yellow OFF (previously ON).
  delay(3000);  
}
