#define PIN_LED 9

#define m1 6
#define m2 7





void setup()
{
  pinMode(PIN_LED, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  //analogWrite(PIN_LED, 0);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available()){
    char led_specifier = Serial.read();

    if(led_specifier=='0')
    {
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
      
      
    }

    else if (led_specifier== '1')
    {
      digitalWrite(11,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      
      }

      else if (led_specifier== '2')
    {
      digitalWrite(11,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      
      }
      else if (led_specifier== '3')
    {
      digitalWrite(11,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(8,LOW);
      digitalWrite(9,HIGH);
      
      }
      else if (led_specifier== '4')
    {
      digitalWrite(11,LOW);
      digitalWrite(10,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      
      }
   // int led_brightness = Serial.parseInt();
    //analogWrite(PIN_LED, led_brightness);
  }
}




