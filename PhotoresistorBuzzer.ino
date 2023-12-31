/*
  To learn more about this project, check out the readME.adoc file
*/
// Headers
// Variables
int photoVal;
int buzzTone;
int buzzPin = 3;
int photoPin = A0;
int dT = 250;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  while(!Serial){
    ;
  }
  pinMode(buzzPin, OUTPUT);
  pinMode(photoPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  photoVal = analogRead(photoPin);
  bbuzzTone = (9.2/620.)*photoVal-(9.2*130.)/620.+.8;
  analogWrite(buzzPin, buzzTone);
  Serial.print("PhotoVal");
  Serial.println(photoVal);
  Serial.print("BuzzTone");
  Serial.println(buzzTone);
  delay(dT);
}
