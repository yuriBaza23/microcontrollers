// C++ code

void setup() {
	DDRB |= (1<<DDB0) | (1<<DDB1) | (1<<DDB2) | 
      (1<<DDB3) | (1<<DDB4) | (1<<DDB5);  
	DDRD |= (1<<DDD7) | (1<<DDD6);
}

void loop()
{
  PORTB ^= (1<<DDB5);
  delay(300);
  PORTB ^= (1<<DDB4);
  delay(300);
  PORTB ^= (1<<DDB3);
  delay(300);
  PORTB ^= (1<<DDB2);
  delay(300);
  PORTB ^= (1<<DDB1);
  delay(300);
  PORTB ^= (1<<DDB0);
  delay(300);
  PORTD ^= (1<<DDD7);
  delay(300);
  PORTD ^= (1<<DDB6);
  delay(300);
  PORTB = 0;
  PORTD = 0;
  delay(300);
}