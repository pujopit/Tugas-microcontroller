  float sa=3;
  float mi=5;
  float de=4;
void setup() 
 
  {
    Serial.begin(9600);
    Serial.println("Berikut adalah perhitungan Matematikanya");
    Serial.print("sa=  ");
    Serial.println(sa);
    Serial.print("mi=  ");
    Serial.println(mi);
    Serial.print("de=  ");
    Serial.println(de);
    
    Serial.print("de/sa =  ");     // tan=depan/samping
    Serial.println(de/sa);
    Serial.print("sa/mi =  ");    // cos=samping/miring
    Serial.println(sa/mi);
    Serial.print("de/mi =  ");   // sin=depan/miring
    Serial.println(de/mi);
    
}

void loop() {
  
}
