// Code for blinking

const int LedPins = {11, 10, 7};  // Led pins 

void blink() {
    for (int pin = 0; pin < 3; pin++) {
        // Read the pins and write the opposite of the current input.
        digitalWrite(LedPins[pin], !digitalRead(LedPins[pin]));
    }
}

const no_of_led = 3
const int checkPointSensors = {2, 3, 4};

void checkPoint() {
    bool checkPointEncountered = true;
    for (int s = 0; s < no_of_led; s++) {
        int signal = digitalRead(checkPointSensors[s]);
        if (signal == 1) {
            checkPointEncountered = false;
            break;
        }
    }
    if (checkPointEncountered) {
        blink();
    }
}
