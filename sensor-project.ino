#include <Stepper.h>
#include <Servo.h>

Servo servo1;
#define ir 5
#define proxi 6
#define buzzer 12
int potPin = A0;
int soil = 0;
int fsoil;

// For 28BYJ-48 stepper motor with ULN2003
const int stepsPerRevolution = 2048;
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11); // IN1, IN3, IN2, IN4

void setup() {
  Serial.begin(9600);
  pinMode(proxi, INPUT_PULLUP);
  pinMode(ir, INPUT);
  pinMode(buzzer, OUTPUT);

  servo1.attach(7);
  myStepper.setSpeed(10); // RPM

  // Initialize servo
  servo1.write(180);
  delay(2000);
  servo1.write(70);
  delay(2000);
}

void loop() {
  fsoil = 0;
  int L = digitalRead(proxi);
  //Serial.print(L);

  if (L == 0) {
    tone(buzzer, 1000, 1000);
    Serial.println("Metal Waste Detected");
    // Rotate ~240° CW (240/360 * 2048 = 1365 steps)
    myStepper.step(1365);
    delay(2000);

    servo1.write(180);
    delay(2000);
    servo1.write(70);
    delay(2000);
    // Rotate ~240° CCW
    myStepper.step(-1365);
    delay(2000);
  }

  if (digitalRead(ir) == 0) {
    tone(buzzer, 1000, 500);
    delay(2000);

    for (int i = 0; i < 3; i++) {
      soil = analogRead(potPin);
      soil = constrain(soil, 485, 1023);
      fsoil = (map(soil, 485, 1023, 100, 0)) + fsoil;
      delay(75);
    }

    fsoil = fsoil / 3;
    //Serial.print(fsoil);
    //Serial.print("%\n");

    if (fsoil > 20) {
      // Rotate ~120° CW (120/360 * 2048 = 682 steps)
      Serial.println("Wet Waste Detected");
      myStepper.step(682);
      delay(2000);

      servo1.write(180);
      delay(2000);
      servo1.write(70);
      delay(2000);

      // Rotate ~120° CCW
      myStepper.step(-682);
      delay(2000);
    } else {
      Serial.println("Dry Waste Detected"); 
      tone(buzzer, 1000, 500);
      delay(2000);
      servo1.write(180);
      delay(2000);
      servo1.write(70);
      delay(2000);
    }
  }
}
