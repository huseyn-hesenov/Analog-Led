#define led 5
#define pot 8


void setup() 

//analog giris cixis
}

void loop() {
deyer=analogRead(pot);
//1024/4=255 for led
deyer=deyer/4;
analogWrite(led,deyer);

}
