/* 
 * Project myProject
 * Author: Your Name
 * Date: 
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

// We define MY_LED to be the LED that we want to blink.
//
// In this tutorial, we're using the blue D7 LED (next to D7 on the Photon
// and Electron, and next to the USB connector on the Argon and Boron).
const pin_t MY_LED = D7;

// The following line is optional, but recommended in most firmware. It
// allows your code to run before the cloud is connected. In this case,
// it will begin blinking almost immediately instead of waiting until
// breathing cyan,
SYSTEM_THREAD(ENABLED);
SYSTEM_MODE(SEMI_AUTOMATIC);

// Random note to show git tools

// The setup() method is called once when the device boots.
void setup()
{
  // Particle.disconnect();
  // WiFi.off();
	// In order to set a pin, you must tell Device OS that the pin is
	// an OUTPUT pin. This is often done from setup() since you only need
	// to do it once.
	Serial1.begin(9600);
	Serial.begin(9600);
	pinMode(MY_LED, OUTPUT);
}

// The loop() method is called frequently.
void loop()
{
	
	if (Serial1.available() > 0){
		
		String recievedData = Serial1.readString();
		
		Serial.println("Recieved Data: " + recievedData);

	// And repeat!
	}
}