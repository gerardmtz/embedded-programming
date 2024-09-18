// C++ code
//

// LED struct to store the pin
// where the led is connected and
// the state of the LED

struct LED {
	int  pin;    // pin where the led is
  	bool state;  // led state (on or off)
};

// Array of leds with
// default state

LED leds[] = {
  {13, false},
  {12, false},
  {11, false},
  {10, false},
  {9, false},
  {8, false},
  {7, false},
  {6, false},
  {5, false},
  {4, false},
};

// initializing the array of leds on setup

void setup()
{
  for (int i = 0; i < 10; i++) {
  	pinMode(leds[i].pin, OUTPUT); // setting pin to output mode
    digitalWrite(leds[i].pin, leds[i].state ? HIGH : LOW); // set the led to LOW because the state is false 
  }
}

void turnOnLed(int index) {
  leds[index].state =  true;
  digitalWrite(leds[index].pin, HIGH);
  delay(500); // Wait for 500 millisecond(s)
}

void turnOffLed(int index) {
	leds[index].state = false;
  	digitalWrite(leds[index].pin, LOW);
	delay(500); // Wait for 500 millisecond(s)
}


void loop()
{
  int pin_number = 0; // the pin number where each pin is connected
  
  for (pin_number; pin_number < 10; pin_number++) {
  	turnOnLed(pin_number);
  	turnOffLed(pin_number);
  }
  
  for (pin_number; pin_number > 0; pin_number--) {
  	turnOnLed(pin_number);
  	turnOffLed(pin_number);
  }
}
