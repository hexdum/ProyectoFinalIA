

#include <Servo.h>
Servo servomotor;

int ledbano = 9;
int ledcuarto = 10;
int ledsala = 11;
int ledcocina = 12;
char action;


void setup() {
  servomotor.attach(A0);
   pinMode(ledcuarto, OUTPUT);
   pinMode(ledbano, OUTPUT);
   pinMode(ledsala, OUTPUT);
   pinMode(ledcocina, OUTPUT);
   Serial.begin(9600);
 
}

void loop() {

     if (action == '1')
  {
    digitalWrite(ledbano, HIGH);
  }

  if (Serial.available())
    action = Serial.read();

  if (action == 'A')
  {
    digitalWrite(ledbano, HIGH);
  }
  
  if (action == 'B')
  {
    digitalWrite(ledcuarto, HIGH);
  }

    if (action == '2')
  {
    digitalWrite(ledcuarto, HIGH);
  }
  
  if (action == 'C')
  {
    digitalWrite(ledsala, HIGH);
  }

  if (action == '3')
  {
    digitalWrite(ledsala, HIGH);
  }

  
  if (action == 'D')
  {
    digitalWrite(ledcocina, HIGH);
  }

  if (action == '5')
  {
    digitalWrite(ledcocina, HIGH);
  }

    if (action == 'E')
  {
    servomotor.write(180);
  }

    if (action == '4')
  {
    servomotor.write(180);
  }


    if (action == 'F')
  {
    servomotor.write(90);
  }

    if (action == 'G')
  {
    digitalWrite(ledcuarto, LOW);
    digitalWrite(ledbano, LOW);
    digitalWrite(ledsala, LOW);
    digitalWrite(ledcocina, LOW);
  }




}
