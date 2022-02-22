#include<SoftwareSerial.h>
SoftwareSerial bluetooth(10, 11);

const int parl = 8;
int entrada = 0;
int led = 12;

void setup() {
  // put your setup code here, to run once:
  bluetooth.begin(9600);
  pinMode(parl, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (bluetooth.available() == 0) {

  }

  entrada = bluetooth.read();
  if (entrada == '1')
  {
    tone(parl, 261.63 , 100);
    delay(1000);
  } else if (entrada == '2')
  {
    tone(parl, 293.66 , 100);
    delay(1000);
  } else if (entrada == '3')
  {
    tone(parl, 329.63 , 100);
    delay(1000);
  } else if (entrada == '4')
  {
    tone(parl, 349.23 , 100);
    delay(1000);
  } else if (entrada == '5')
  {
    tone(parl, 392.00 , 100);
    delay(1000);
  } else if (entrada == '6')
  {
    tone(parl, 440.00 , 100);
    delay(1000);
  } else if (entrada == '7')
  {
    tone(parl, 493.88 , 100);
    delay(1000);
  } else if (entrada == '8')
  {
    tone(parl, 523.25 , 100);
    delay(1000);
  }
   else if (entrada == 'r')
  {
    tone(parl, 277.18 , 100);
    delay(1000);
  }
  else if (entrada == 's')
  {
    tone(parl, 311.13 , 100);
    delay(1000);
  }
  else if (entrada == 't')
  {
    tone(parl, 369.99 , 100);
    delay(1000);
  }
  else if (entrada == 'u')
  {
    tone(parl, 415.30 , 100);
    delay(1000);
  }
  else if (entrada == 'v')
  {
    tone(parl, 466.16 , 100);
    delay(1000);
  }
  else if (entrada == 'w')
  {
    tone(parl, 554.37 , 100);
    delay(1000);
  }
  else if (entrada == 'e')
  {
     digitalWrite(LED, HIGH);
     delay(500);
  }
  else if (entrada == 'a')
  {
     digitalWrite(LED, LOW);
     delay(500);
  }

}
