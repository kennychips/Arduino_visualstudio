void setup()
{

  /* add setup code here */
  // initialize serial communication at 9600 bits per second:
	Serial.begin(9600);

}

void loop()
{

  /* add main program code here */
	Serial.println("test");
	delay(1000);        // delay in between reads for stability
}
