/*  The objective of this program is to implement the Air Flow Sensor using filament of a bulb.
    The potential difference of the filament (due to temperature difference) is being read by the
    analog pin of the Arduino. Based on the potential difference, the airflow is detected as
    WEAK or STRONG. The threshold voltage is 1.55V. So if the voltage read is more than 1.55, then
    there is a STRONG air flow else there is WEAK air flow*/

void setup()
{
   // initialize serial communication at 9600 bits per second:
   Serial.begin(9600);
}  
void loop()
 {
  int sensorValue = analogRead(A0);                  
  float voltage = sensorValue * (5.0 / 1024.0); 
  Serial.print("Voltage: "); 
  Serial.print(voltage); 
  Serial.println(" V");
  if (voltage >= 1.55)
  {
    Serial.println("There is STRONG air flow");
  }
 else
  {
  Serial.println("There is WEAK air flow");
  }
  delay(1000);
}
