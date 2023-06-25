const int emgPin1 = A0;
const int emgPin2 = A1;

const int servoPin = 9; 

const int emgFreq = 100; //in hertz
const int threshold1 = 500;
const int threshold2 = 500; 

const int minAngle = 0;
const int maxAngle = 180; 

const int restPosition = 90;
const int flexPosition = 0;
const int extendPosition = 180;


Servo servoMotor;

void setup() {
  Serial.begin(9600);
  servoMotor.attach(servoPin);
  servoMotor.write(restPosition);
}

void loop() {
  int emgValue1 = analogRead(emgPin1);
  int emgValue2 = analogRead(emgPin2);

  bool flexDetected = emgValue1 > threshold1;
  bool extendDetected = emgValue2 > threshold2;

  if (flexDetected && !extendDetected) {
    servoMotor.write(flexPosition);
    Serial.println("Flex");
  } else if (!flexDetected && extendDetected) {
    servoMotor.write(extendPosition);
    Serial.println("Extend");
  } else {
    servoMotor.write(restPosition);
    Serial.println("Rest");
  }

  delay(1000 / emgFreq);

} 
