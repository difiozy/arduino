#include <TaskManager.h>

// constants won't change. Used here to set a pin number:
const int ledPin = LED_BUILTIN;  // the number of the LED pin

// Variables will change:
int ledState1 = LOW;  // ledState used to set the LED
int ledState2 = LOW;  // ledState used to set the LED
int ledState3 = LOW;  // ledState used to set the LED
int ledState4 = LOW;  // ledState used to set the LED
int ledState5 = LOW;  // ledState used to set the LED
int ledState6 = LOW;  // ledState used to set the LED

void setup() {
  // set the digital pin as output:
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);

  // Create a task that's scheduled every second
  taskManager.scheduleFixedRate(10000000, [] {
      if (ledState1 == LOW) {
        ledState1 = HIGH;
      } else {
        ledState1 = LOW;
      }

      // set the LED with the ledState of the variable:
      digitalWrite(11, ledState1);
	}, TIME_MICROS);

  taskManager.scheduleFixedRate(200000, [] {
    if (ledState2 == LOW) {
      ledState2 = HIGH;
    } else {
      ledState2 = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(10, ledState2);
	}, TIME_MICROS);

  taskManager.scheduleFixedRate(400000, [] {
    if (ledState3 == LOW) {
      ledState3 = HIGH;
    } else {
      ledState3 = LOW;
    }
    // set the LED with the ledState of the variable:
    digitalWrite(9, ledState3);
	}, TIME_MICROS);


  taskManager.scheduleFixedRate(800000, [] {
    if (ledState4 == LOW) {
      ledState4 = HIGH;
    } else {
      ledState4 = LOW;
    }
    // set the LED with the ledState of the variable:
    digitalWrite(6, ledState4);
	}, TIME_MICROS);

  taskManager.scheduleFixedRate(50000, [] {
    if (ledState5 == LOW) {
      ledState5 = HIGH;
    } else {
      ledState5 = LOW;
    }
    // set the LED with the ledState of the variable:
    digitalWrite(5, ledState5);
	}, TIME_MICROS);

  taskManager.scheduleFixedRate(160000, [] {
    if (ledState6 == LOW) {
      ledState6 = HIGH;
    } else {
      ledState6 = LOW;
    }
    // set the LED with the ledState of the variable:
    digitalWrite(3, ledState6);
	}, TIME_MICROS);
}

void loop() {
  taskManager.runLoop();
}