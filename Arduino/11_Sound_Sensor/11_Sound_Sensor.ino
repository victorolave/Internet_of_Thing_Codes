#define UMBRAL  80
const int sound = A0;
const int led = 10;
int sensorValue = 0;

void setup()
{
    pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    sensorValue = map(analogRead(sound),0,1023,0,5);
    //sensorValue = analogRead(sound);
    Serial.println("Umbral de ruido:");
    Serial.println(sensorValue);
    delay(100);
    if (sensorValue > UMBRAL )
    {
        digitalWrite (led, HIGH);
    }
    else
    {
        digitalWrite (led, LOW);
    }
    
    
}