#include <WiFi.h>

const char* ssid = "¿?";
const char* password = "¿?";

String EncryptionType(wifi_auth_mode_t encryptionType)
{
    switch (encryptionType)
    {
    case (WIFI_AUTH_OPEN):
        return "Open";
    case (WIFI_AUTH_WEP):
        return "WEP";
    case (WIFI_AUTH_WPA2_PSK):
        return "WPA2_PSK";
    default:
        return "Other";
    }
}

void ScanNetwork ()
{
    int numberNetworks = WiFi.scanNetworks();
    Serial.print("Number of Networks: ");
    Serial.println(numberNetworks);

    for (int i = 0; i < numberNetworks; i++)
    {
        Serial.print("Network Name: ");
        Serial.println(WiFi.SSID(i));
        Serial.print("Strength of the Network: ");
        Serial.println(WiFi.RSSI(i));
        Serial.print("MAC: ");
        Serial.println(WiFi.BSSIDstr(i));
        Serial.print("Encryption of the Network: "); 
        Serial.println(EncryptionType(WiFi.encryptionType(i)));
        Serial.println("========****=========");
    }
    
}

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

void setup ()
{
    Serial.begin(115200);
    ScanNetwork();
    connectToNetwork();
    Serial.println(WiFi.macAddress());
    Serial.println(WiFi.localIP());
    //WiFi.disconnect(true);
}
void loop(){}