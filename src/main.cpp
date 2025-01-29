#include <Arduino.h>

// define the LED pin
const int greenLEDPin = 9;
const int redLEDPin = 10;
const int blueLEDPin = 11;

// define the sensor pin
const int redSensorPin = A0;
const int greenSensorPin = A1;
const int blueSensorPin = A2;

// define the RGB variables
int redValue = 0;
int greenValue = 0;
int blueValue = 0;

// define the sensor variables
int redSensorValue = 0;
int greenSensorValue = 0;
int blueSensorValue = 0;

void setup() {
  // open a serial connection
  Serial.begin(9600);

  // initialize the LED pins as outputs
  pinMode(greenLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
}

