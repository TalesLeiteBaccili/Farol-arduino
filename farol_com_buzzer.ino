int Buzzer = 10;
int LEDred= 11;
int LEDyellow = 12;
int LEDgreen = 13;

void setup() {
pinMode(LEDred, OUTPUT);
pinMode(LEDyellow, OUTPUT);
pinMode(LEDgreen, OUTPUT);
pinMode(Buzzer, OUTPUT);
  

}
void loop(){
   
digitalWrite(LEDgreen, HIGH);
  
digitalWrite(Buzzer, HIGH); 
  delay(500);
digitalWrite(Buzzer, LOW);
  
  delay(2500);  
digitalWrite(LEDgreen, LOW);
  
digitalWrite(LEDyellow, HIGH);
  delay(1000);
digitalWrite(LEDyellow, LOW);
 
digitalWrite(LEDred, HIGH);
 delay(2500);
digitalWrite(LEDred, LOW);
  
}