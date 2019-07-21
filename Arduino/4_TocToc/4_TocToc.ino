int LED = 10;
int Button = 6;
bool state = false;

void setup()
{
    pinMode(LED, OUTPUT);
    pinMode(Button, INPUT);
    Serial.begin(9600) ;
}
void loop()
{
    state = digitalRead(Button);
    Serial.print(state);
    if (state == true)
    {
        digitalWrite(LED, HIGH);
    }
    else
    {
        digitalWrite(LED, LOW);
    }  
}