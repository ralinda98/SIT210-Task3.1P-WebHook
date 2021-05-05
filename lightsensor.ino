// The pin the phototransistor is plugged into.
const pin_t SENSOR_PIN = A0;

// Declaring the integer variable analogvalue to store the value of the phototransistor.
int analogValue;

void setup()
{
}

void loop()
{
    // Checking and storing the value of the phototransistor in the int variable analogvalue.
    analogValue = analogRead(SENSOR_PIN);
    
    // Putting the light data into a string.
    String light = String(analogValue);

    // Publishing data to webhook.
    Particle.publish("light", light, PRIVATE);

    // Reads data for 10 times per second (100 millisecond delay).
    delay(30000ms);
}