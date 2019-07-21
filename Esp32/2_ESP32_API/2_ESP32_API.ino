#include <WiFi.h>
#include <HTTPClient.h>

const char* ssid = "¿?";
const char* password = "¿?";


void connectToNetwork() 
{
    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED)
    {
        delay(1000);
        Serial.println("Trying connect...");
    }
    Serial.println("Connection Complete! 😁");
}


void setup()
{
    Serial.begin(115200);
    delay(1000);
    //WiFi.begin(ssid,password) ;  Procedimiento de conexión
    connectToNetwork();  
}

void loop()
{
    if (WiFi.status() == WL_CONNECTED)
    {
        HTTPClient http;
        http.begin("here your db");
        http.addHeader("Content-Type", "text/plain");
        int httpCode = http.POST("{ \"name\" : \"Your Name\"}");
        //int httpCode = http.GET();

        if (httpCode >=200 && httpCode <206)
        {
            String payload = http.getString();
            Serial.println(httpCode);
            Serial.println(payload);
        }
        else
        {
            Serial.println(httpCode);
            Serial.println("Fail GET");
        }
        
        http.end();
    }
    delay(10000);
}

