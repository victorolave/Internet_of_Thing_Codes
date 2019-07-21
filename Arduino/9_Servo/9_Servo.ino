#include <Servo.h>
Servo servo;
int angle = 0;

void setup()
{
    servo.attach(10);
}
void loop()
{
    angle = map( analogRead(A5), 0, 1024, 0, 180);
    servo.write(angle);
    delay(50);.
}