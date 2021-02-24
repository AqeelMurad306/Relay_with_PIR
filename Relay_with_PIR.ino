int PIR = 3;
#define RELAY 2

void setup()
{
  pinMode(PIR, INPUT);
  pinMode(RELAY, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int status = digitalRead(PIR);
  
  Serial.println(status);

  if (status == 1) {
    digitalWrite(RELAY, HIGH);
  }
  else {
    digitalWrite(RELAY, LOW);
  }
  
  delay(50);
} 
