unsigned long Time;
int n = 0;
int analog = 0;
void setup()
{
    Serial.begin(9600);
}
void loop()
{
    int n = 0;
    Time = millis();
    while (millis() <= Time + 1000)
    {
        analog = analogRead(A5);
        n++;
    }
    Serial.print(n);
    Serial.print(":");
    Serial.println(analog);
}