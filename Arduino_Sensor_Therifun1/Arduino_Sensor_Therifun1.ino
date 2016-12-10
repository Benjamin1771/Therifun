#define trigPin 7
#define echoPin 6
#define led 9
#define led3 11
#define led5 13
#define buzzer 3 
//#define buzzer2 4

int sound = 261;
int sound2 = 501;
int sound3 = 900;
int sound4 = 10;


void setup() {
Serial.begin (9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(led, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(buzzer, OUTPUT);

}


void loop() {
long duration, distance;
digitalWrite(trigPin, LOW);
delayMicroseconds(2); 
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);

duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;
Serial.print(distance);
Serial.println(" cm");

if (distance < 45) {
  digitalWrite(led,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led5,LOW);
  delay(50);
  tone(buzzer,sound);
  
} 
if (distance < 32) {
  digitalWrite(led,LOW);
  digitalWrite(led3,HIGH);
  digitalWrite(led5,LOW);
  delay(50);
  tone(buzzer,sound2);
}
 if (distance < 15) {
  digitalWrite(led,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led5,HIGH);
  delay(50);
  tone(buzzer,sound3);
}
//  if (distance < 5) {
//    digitalWrite(led,HIGH);
//    digitalWrite(led3,HIGH);
//    digitalWrite(led5,HIGH);
//    tone(buzzer,sound4);
//  }
//  } else {
//    digitalWrite(led3,HIGH);
//    digitalWrite(led,LOW);
//    tone(buzzer,sound5);
//  }
//}
}
