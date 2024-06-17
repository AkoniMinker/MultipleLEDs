// C++ code
//

int animationSpeed = 400;
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(animationSpeed); // Wait for 1000 * animationSpeed millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(animationSpeed); // Wait for 1000 * animationSpeed millisecond(s)
  digitalWrite(12, HIGH);
  delay(animationSpeed);
  digitalWrite(12, LOW);
  delay(animationSpeed);
  digitalWrite(11, HIGH);
  delay(animationSpeed);
  digitalWrite(11, LOW);
  delay(animationSpeed);
}