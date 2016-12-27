float a=4;
float b=5;
float c=3;
float degree,degreeB,degreeC;

void setup() {
  Serial.begin(9600);
  Serial.print("Panjang sisi A segitiga = ");
  Serial.println(a);
  Serial.print("Panjang sisi B segitiga = ");
  Serial.println(b);
  Serial.print("Panjang sisi C segitiga = ");
  Serial.println(c);
  Serial.print("Derajat a");
  degree = acos((b*b + c*c - a*a) / (2.0*b*c)) * (180.0/3.14159);
  degreeB = acos((a*a + c*c - b*b) / (2.0*a*c)) * (180.0/3.14159);
  degreeC = 180.0 -degree - degreeB;
  Serial.print("Angle A = "); Serial.println(degree);
  Serial.print("Angle B = "); Serial.println(degreeB);
  Serial.print("Angle C = "); Serial.println(degreeC);
}

void loop() {
  // put your main code here, to run repeatedly:

}
