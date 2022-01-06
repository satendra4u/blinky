#define TouchPin D4
#define Buzzer D7
#define DEBOUNCE_SECONDS 3
#include "application.h"


SYSTEM_MODE(SEMI_AUTOMATIC);

int lastStateSwitchTime = 0;
int button = D4;


void setup() {

pinMode(TouchPin, INPUT);
pinMode(Buzzer,OUTPUT);
attachInterrupt(button, sendSignal, RISING);

}
void loop()
{
    
    
}
void sendSignal() {
    
                        digitalWrite(Buzzer,HIGH);

                        Spark.connect();
                      
                        delay(10000);
                        
                        Spark.publish("light", "on", 60, PRIVATE);
                      
                        digitalWrite(Buzzer,LOW);

                        
                        WiFi.disconnect();
                        

}
