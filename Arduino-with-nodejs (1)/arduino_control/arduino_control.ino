void setup()
{
  Serial.begin(9600);
}
void loop()
{
  while(!Serial.available());  //wait until a byte was received
  analogWrite(13, Serial.read()); //output received byte
}
