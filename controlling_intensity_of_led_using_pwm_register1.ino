// C++ code
//
int led=11;
int temp=0;
int time=100;
int increase=4;

void setup()
{
  DDRB |= (1<<DDB3);
}

void loop()
{  
  PORTB |=(1<<PB3);
  delay(temp);
  PORTB &=(~(1<<PB3));
  delay(time-temp);
  temp+=increase;
  if(temp==0||temp==time)
    increase=-increase;
}