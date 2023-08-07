// Motor connections (Rename these)
const int thumbMotor = 5;
const int indexMotor = 6;
const int middleMotor = 7;
const int ringMotor = 8;
const int pinkyMotor = 9;

// Define PWM pin for the thumb motor (replace with the actual PWM pin number)
const int pwmPin1 = 10;

// Variables for motor speed and duration
int emgSpeed = 0; // Variable from the data
int emgDuration = 0; // Variable from the EMG sensor data

// Variables to indicate actuation for each finger
bool thumbAct = false; // Thumb actuated in EMG sensor data
bool indexAct = false; // Index finger actuated in EMG sensor data
bool middleAct = false; // Middle finger actuated in EMG sensor data
bool ringAct = false; // Ring finger actuated in EMG sensor data
bool pinkyAct = false; // Pinky finger actuated in EMG sensor data

void setup() {
  pinMode(thumbMotor, OUTPUT);
  pinMode(indexMotor, OUTPUT);
  pinMode(middleMotor, OUTPUT);
  pinMode(ringMotor, OUTPUT);
  pinMode(pinkyMotor, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  if (thumbAct) {
    thumb();
    delay(emgDuration);
    thumbStop();
  }

  if (indexAct) {
    index();
    delay(emgDuration);
    indexStop();
  }

  if (middleAct) {
    middleFinger();
    delay(emgDuration);
    middleStop();
  }

  if (ringAct) {
    ringFinger();
    delay(emgDuration);
    ringStop();
  }

  if (pinkyAct) {
    pinky();
    delay(emgDuration);
    pinkyStop();
  }
}

void thumb() {
  digitalWrite(thumbMotor, HIGH);
  analogWrite(pwmPin1, emgSpeed);
}

void thumbStop() {
  digitalWrite(thumbMotor, LOW);
  analogWrite(pwmPin1, 0);
}

void index() {
  digitalWrite(indexMotor, HIGH);
  analogWrite(/* pwmPin for index motor */, emgSpeed);
}

void indexStop() {
  digitalWrite(indexMotor, LOW);
  analogWrite(/* pwmPin for index motor */, 0);
}

void middleFinger() {
  digitalWrite(middleMotor, HIGH);
  analogWrite(/* pwmPin for middle motor */, emgSpeed);
}

void middleStop() {
  digitalWrite(middleMotor, LOW);
  analogWrite(/* pwmPin for middle motor */, 0);
}

void ringFinger() {
  digitalWrite(ringMotor, HIGH);
  analogWrite(/* pwmPin for ring motor */, emgSpeed);
}

void ringStop() {
  digitalWrite(ringMotor, LOW);
  analogWrite(/* pwmPin for ring motor */, 0);
}

void pinky() {
  digitalWrite(pinkyMotor, HIGH);
  analogWrite(/* pwmPin for pinky motor */, emgSpeed);
}

void pinkyStop() {
  digitalWrite(pinkyMotor, LOW);
  analogWrite(/* pwmPin for pinky motor */, 0);
}
