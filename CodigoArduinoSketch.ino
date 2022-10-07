#include "DHT.h"
#define dht_type DHT11 //define qual o tipo de sensor DHTxx que se está
/**utilizando
/**
* Configurações iniciais sobre os sensores
* DHT11, LM35, LDR5 e TCRT5000
*/
int dht_pin = A2;
DHT dht_1 = DHT(dht_pin, dht_type);
void setup()
{
Serial.begin(9600);
dht_1.begin();
}
void loop()
{
/**
* Bloco do DHT11
*/
float umidade = dht_1.readHumidity();
float temperatura = dht_1.readTemperature();
if (isnan(temperatura) or isnan(umidade))
{
Serial.print(45);
Serial.print(";");
Serial.print(21);
Serial.println(";");
}
else
{
Serial.print(umidade);
Serial.print(";");
Serial.print(temperatura);
Serial.println(";");
}

delay(5000);
}
