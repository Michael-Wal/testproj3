
/* This code generates a 40 Hz signal for LEDs and 10kHz audio tone that's
 *  synchronized to play whenever LED's go high (every 25 ms)
 *  Michael Walelign,  Revision 1 , 06/12/2019
 */

int dTime = 12500;
int beep = 1;
int flickerPin = 12;
int audioPin = 8;
int freq =10000;
/ this is aaa ausya

void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT);
  pinMode(8,OUTPUT);
 
}

void loop() {   
    tone(audioPin,freq,beep);                                                                              
    digitalWrite(flickerPin, HIGH); 
    delayMicroseconds(dTime) ;                     
    digitalWrite(flickerPin, LOW);    
    delayMicroseconds(dTime); 
 
}
  
