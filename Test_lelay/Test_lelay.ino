#define Lamp1 2

char test ;

void setup() 
{
  Serial.begin(9600);
  pinMode(Lamp1, OUTPUT);
}

void loop()
{
  if(Serial.available())
    test = Serial.read();
  else if(test == '1')
  {
    digitalWrite(Lamp1, HIGH);
  }
  else if(test == '0')
  {
    digitalWrite(Lamp1, LOW);
  }
}
