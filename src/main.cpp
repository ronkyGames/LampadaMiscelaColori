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
  // read the sensor values
  redSensorValue = analogRead(redSensorPin);
  greenSensorValue = analogRead(greenSensorPin);
  blueSensorValue = analogRead(blueSensorPin);

  // print the sensor values
  Serial.print("Raw Sensor Values \t Red: ");
  Serial.print(redSensorValue);
  Serial.print("\t Green: ");
  Serial.print(greenSensorValue);
  Serial.print("\t Blue: ");
  Serial.println(blueSensorValue);

  // map the sensor values to the RGB range
  redValue = redSensorValue / 4;
  greenValue = greenSensorValue / 4;
  blueValue = blueSensorValue / 4;

  // print the RGB values
  Serial.print("Mapped Sensor Values \t Red: ");  
  Serial.print(redValue);
  Serial.print("\t Green: ");
  Serial.print(greenValue);
  Serial.print("\t Blue: ");
  Serial.println(blueValue);

  // write the RGB values to the LED pins

  analogWrite(redLEDPin, redValue);
  analogWrite(greenLEDPin, greenValue);
  analogWrite(blueLEDPin, blueValue);
  
}

