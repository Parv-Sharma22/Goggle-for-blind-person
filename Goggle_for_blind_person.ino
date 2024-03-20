#define buzzer 6


void setup()

{

pinMode(12,OUTPUT);//Trigger

pinMode(13,INPUT);//EchoA

pinMode(6,OUTPUT);//Buzzer



}



void loop()



{



long duration, distance;



digitalWrite(12,LOW);

delayMicroseconds(2);

digitalWrite(12,HIGH);

delayMicroseconds(10);

digitalWrite(12,LOW);

duration=pulseIn(13,HIGH);

distance=(duration/2)/29.1;

if (distance < 70)     // This is where checking the distance you can change the value



{

 // When the the distance bellow 100 cm

digitalWrite(6,HIGH);



} else



{



// when greater than 100cm

digitalWrite(6,LOW);



} delay(500);



}
