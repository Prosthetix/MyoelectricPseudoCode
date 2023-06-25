const int emg = AO;
const int emgFreq = 100;
void setup(){
  Serial.begin(1000);
}

void loop(){
  int emgVal = analogRead(emg);
  Serial.println(emgVal);
  delay(1000 / emgFreq);
}
