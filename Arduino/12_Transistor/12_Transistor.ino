const int transitor = 9;
char state = '0';

void setup()

{
    pinMode(transitor, OUTPUT);
    Serial.begin(9600);
}
void loop()
{
    state =  Serial.read();
    if (state == '1')
    {
        digitalWrite(transitor, HIGH);
    }
    else
    {
        digitalWrite(transitor, LOW);
    }
    Serial.print(state);  
    delay(250);  
}