/*
 Name:		Motorsteuerung.ino
 Created:	30.11.2018 23:00:05
 Author:	Johannes
*/

//PWM-Pins müssen benutzt werden.
int defaultPin = 11, inputOne = 6, inputTwo = 5;

/*
0 = Anweisung
1 = Speed
2 = Modus
*/
int inputmode = 0;

// the setup function runs once when you press reset or power the board
void setup() {
	Serial.begin(9600);
	pinMode(defaultPin, OUTPUT);
	pinMode(inputOne, OUTPUT);
	pinMode(inputTwo, OUTPUT);

	analogWrite(defaultPin, 128);

	Serial.println("Bitte gib etwas ein, das von dir gesetzt werden soll (speed oder mode).");

}

// the loop function runs over and over again until power down or reset
void loop() {
	if (Serial.available()) {
		if (inputmode == 0) {
			String input = Serial.readString();
			if (input == "speed") {
				inputmode = 1;
				Serial.println("Bitte gib eine gültige Geschwindigkeit ein (0 - 255).");
				return;
			}
			if (input == "mode") {
				inputmode = 2;
				Serial.println("Bitte gib einen gültigen Modus ein (0 - 2).");
				return;
			}
		}

		int input = Serial.parseInt();

		if (inputmode == 1) {
			inputmode = 0;
			setSpeed(input);
			Serial.println("Bitte gib etwas ein, das von dir gesetzt werden soll (speed oder mode).");
			return;
		}

		if (inputmode == 2) {
			inputmode = 0;
			setMode(input);
			Serial.println("Bitte gib etwas ein, das von dir gesetzt werden soll (speed oder mode).");
			return;
		}
	}
}

void setMode(int mode) {
	switch (mode) {
	case 1:
		digitalWrite(inputOne, LOW);
		digitalWrite(inputTwo, HIGH);
		break;

	case 2:
		digitalWrite(inputOne, HIGH);
		digitalWrite(inputTwo, LOW);
		break;

	default:
		digitalWrite(inputOne, LOW);
		digitalWrite(inputTwo, LOW);
	}
}

void setSpeed(int speed) {
	if (speed >= 0 && speed <= 255) {
		analogWrite(defaultPin, speed);
	}
}