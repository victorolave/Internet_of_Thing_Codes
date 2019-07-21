int valueX = 0;
int valueY = 0;
void setup()
{
    Serial.begin(9600);
}
void loop()
{
    valueX = random(0,100);
    valueY = random(0,100);
    Serial.print(valueX);
    Serial.print(",");
    Serial.println(valueY);
    delay(250);
}