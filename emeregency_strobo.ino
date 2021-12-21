/*
 * Strobo emeregency attiny85 Digspark
 * https://www.youtube.com/c/Radal05
 * 21 Desember  2021
 */
void setup(){

  pinMode(2,OUTPUT); //Lampu 1
  pinMode(4,OUTPUT); //Lampu 2
  pinMode (3,OUTPUT); //Buzzer
  
  for (int i=0; i<3; i++)
  {
    digitalWrite(3, HIGH); 
    delay (80);
    digitalWrite(3, LOW);
    delay (80);
  }
  
}

void loop(){ 
  
  /*
   ********* Mode 1  ********* 
   */
  
  for (int i=0; i<5; i++)
  {
    digitalWrite(4, HIGH); 
    digitalWrite(2, LOW);
    delay (80);
    digitalWrite(4, LOW);
    digitalWrite(2, LOW);
    delay (80);
  }
  
  for (int i=0; i<5; i++)
  {
    digitalWrite(2, HIGH); 
    digitalWrite(4, LOW);
    delay (80);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    delay (80);
  }
  
  for (int i=0; i<5; i++)
  {
    digitalWrite(4, HIGH); 
    digitalWrite(2, LOW);
    delay (80);
    digitalWrite(4, LOW);
    digitalWrite(2, LOW);
    delay (80);
  }
  
  for (int i=0; i<5; i++)
  {
    digitalWrite(2, HIGH); 
    digitalWrite(4, LOW);
    delay (80);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    delay (80);
  }
  
  for (int i=0; i<5; i++)
  {
    digitalWrite(4, HIGH); 
    digitalWrite(2, LOW);
    delay (80);
    digitalWrite(4, LOW);
    digitalWrite(2, LOW);
    delay (80);
  }
  
  for (int i=0; i<5; i++)
  {
    digitalWrite(2, HIGH); 
    digitalWrite(4, LOW);
    delay (80);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    delay (80);
  }
  
  
  /*
   ********* Mode 2  ********* 
   */
  
   for (int i=0; i<8; i++)
  {
    digitalWrite(2, HIGH); 
    digitalWrite(4, HIGH);
    delay (80);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    delay (80);
  }
  
  for (int i=0; i<16; i++)
 {
    digitalWrite(2, HIGH); 
    digitalWrite(4, HIGH);
    delay (50);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    delay (50);
}
  
    for (int i=0; i<8; i++)
{
    digitalWrite(2, HIGH); 
    digitalWrite(4, HIGH);
    delay (80);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    delay (80);
  }
  
  for (int i=0; i<16; i++)
  {
    digitalWrite(2, HIGH); 
    digitalWrite(4, HIGH);
    delay (50);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    delay (50);
  }
  
    for (int i=0; i<8; i++)
  {
    digitalWrite(2, HIGH);   
    digitalWrite(4, HIGH);
    delay (80);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    delay (80);
}
 
   for (int i=0; i<16; i++)
{
    digitalWrite(2, HIGH); 
    digitalWrite(4, HIGH);
    delay (50);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    delay (50);
}
 
  for (int i=0; i<8; i++)
  {
    digitalWrite(2, HIGH);   
    digitalWrite(4, HIGH);
    delay (80);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    delay (80);
}
 
   for (int i=0; i<16; i++)
{
    digitalWrite(2, HIGH); 
    digitalWrite(4, HIGH);
    delay (50);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    delay (50);
}
  
  /*
   ********* Mode 3  ********* 
   */
  
  for (int i=0; i<3; i++)
  {
    digitalWrite(4, HIGH); 
    digitalWrite(2, LOW);
    delay (100);
    digitalWrite(4, LOW);
    digitalWrite(2, LOW);
    delay (100);
  }
  
  for (int i=0; i<3; i++)
  {
    digitalWrite(2, HIGH); 
    digitalWrite(4, LOW);
    delay (100);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    delay (100);
  }
  
  for (int i=0; i<2; i++)
  {
    digitalWrite(4, HIGH); 
    digitalWrite(2, LOW);
    delay (120);
    digitalWrite(4, LOW);
    digitalWrite(2, LOW);
    delay (120);
  }
  
  for (int i=0; i<2; i++)
  {
    digitalWrite(2, HIGH); 
    digitalWrite(4, LOW);
    delay (120);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    delay (120);
  }
  
  for (int i=0; i<3; i++)
  {
    digitalWrite(4, HIGH); 
    digitalWrite(2, LOW);
    delay (100);
    digitalWrite(4, LOW);
    digitalWrite(2, LOW);
    delay (100);
  }
  
  for (int i=0; i<3; i++)
  {
    digitalWrite(2, HIGH); 
    digitalWrite(4, LOW);
    delay (100);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    delay (100);
  }
    
  /*
   ********* Mode 4  ********* 
   */
  
  for (int i=0; i<5; i++)
  {
    digitalWrite(2, HIGH); 
    digitalWrite(4, LOW);
    delay (80);
    digitalWrite(2, LOW);
    digitalWrite(4, HIGH);
    delay (80);
  }
  
  for (int i=0; i<5; i++)
  {
    digitalWrite(2, HIGH); 
    digitalWrite(4, LOW);
    delay (80);
    digitalWrite(2, LOW);
    digitalWrite(4, HIGH);
    delay (80);
  }
  
   for (int i=0; i<5; i++)
  {
    digitalWrite(2, HIGH); 
    digitalWrite(4, LOW);
    delay (100);
    digitalWrite(2, LOW);
    digitalWrite(4, HIGH);
    delay (100);
  }
  
  for (int i=0; i<5; i++)
  {
    digitalWrite(2, HIGH); 
    digitalWrite(4, LOW);
    delay (80);
    digitalWrite(2, LOW);
    digitalWrite(4, HIGH);
    delay (80);
  }
  
  
   for (int i=0; i<5; i++)
  {
    digitalWrite(2, HIGH); 
    digitalWrite(4, LOW);
    delay (80);
    digitalWrite(2, LOW);
    digitalWrite(4, HIGH);
    delay (80);
  }
  
  for (int i=0; i<5; i++)
  {
    digitalWrite(2, HIGH); 
    digitalWrite(4, LOW);
    delay (100);
    digitalWrite(2, LOW);
    digitalWrite(4, HIGH);
    delay (100);
  }
  
  /*
   ********* Mode 5  ********* 
   */
  
 for (int i=0; i<15; i++)
{
   digitalWrite(2, HIGH); 
   digitalWrite(4, LOW);
   delay (250);
   digitalWrite(2, LOW);
   digitalWrite(4, HIGH);
   delay (250);
}

// recordatorio audible
    digitalWrite (0,HIGH);
    digitalWrite (2, HIGH);
    delay(100);  
    digitalWrite (0, LOW);
  
}
