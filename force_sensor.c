/*
    Project name : ESP8266 Force Sensor
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-force-sensor
*/

#define FORCE_SENSOR_PIN A0

void setup() {
    Serial.begin(115200);
}

void loop() {
    int sensorValue = analogRead(FORCE_SENSOR_PIN);
    float voltage = sensorValue * (3.3 / 1023.0);  // Assuming the ESP8266 ADC is 10-bit and 3.3V reference

    Serial.print("Analog Value: ");
    Serial.print(sensorValue);
    Serial.print(" | Voltage: ");
    Serial.print(voltage);
    Serial.println(" V");

    delay(500);
}
