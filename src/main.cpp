#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Touch Detection System using TTP223
 * @author ANUBHAV GAUTAM
 * @date 2026-01-25
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */
int touchPin = 3;


void setup() {
    pinMode(touchPin, INPUT);
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);


}

void loop() {

    int state = digitalRead(touchPin);
    if (state == HIGH) {
        digitalWrite(LED_BUILTIN, HIGH);
        ....Serial.println("Touch");
    else {
        digitalWrite(LED_BUILTIN, LOW);
        Serial.println("Not Touch");
    }
    }
}
