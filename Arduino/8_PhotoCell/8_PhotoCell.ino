unsigned long Time;
int analog = 0;
int led_inten = 0;
void setup()
{
    Serial.begin(9600);
}
void loop()
{
    Time = millis();
    while (millis() <= Time + 1000)
    {
        analog = analogRead(A5);
        analog = analog - 245;
        led_inten = 255 - analog;
        analogWrite(10, abs(led_inten));
        
    }
    Serial.println(analog);

}