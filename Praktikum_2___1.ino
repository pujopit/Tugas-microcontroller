void setup() 
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, 1);
  pinMode(12, 1);
  pinMode(13, 1);
}
void loop() 
{
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10,1);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,0);  
}
