/*
 * Created by Varun Pandithurai(E-Guy)
 * CEO at Hardware Hackerz
 * E-mail: varunpmas@gmail.com
 */
 const int trigPin =9;//define pin number
 const int echoPin =10;//define pin number
 int buzzer = 8;//define pin number
 int distance;//define variables
 long duration;//define variables
 void setup() {
 pinMode(trigPin,OUTPUT);
 pinMode(echoPin,INPUT);
 pinMode(buzzer,OUTPUT);
 Serial.begin(9600);

}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(8);
  
  digitalWrite(trigPin,LOW);
  
 duration = pulseIn(echoPin,HIGH);
 
 distance = duration*0.034/2;
 Serial.println(distance);
 if(distance >70 && distance <130)
 {
  Serial.println(distance);
  digitalWrite(buzzer,HIGH);//if the distance is greater than 2 feet and less than 4 feet
  delay(1000);
 }
 else if(distance >130 && distance <200)
 {
  Serial.println(distance);
  digitalWrite(buzzer,HIGH);//if the distance is greater than 4 feet and less than 6.5 feet
  delay(100);
   digitalWrite(buzzer,LOW);
  delay(100);
   digitalWrite(buzzer,HIGH);
  delay(100);
   digitalWrite(buzzer,LOW);
  delay(100);
  }
  else
  {
    digitalWrite(buzzer,LOW);
    delay(100);
  }
  }
