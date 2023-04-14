const int n = 4;

int leds[n] {0, 1, 2, 3};

int states[n] {LOW, LOW, LOW, LOW};

long swap_times[n] {0, 0, 0, 0};

int intervals[n] {100, 2 * 100, 4 * 100, 3 * 100};

void setup() {
  for (int i=0; i<n; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  long current_time = millis();
  
  for (int i=0; i<n; i++) {
    if (current_time - swap_times[i] >= intervals[i]) {
      swap_times[i] = current_time;
      if (states[i] == LOW) {
        states[i] = HIGH;
      }
      else {
        states[i] = LOW;
      }
      digitalWrite(leds[i], states[i]);
    }
  }
  
  
}