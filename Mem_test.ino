#include <xmem.h> 

char data [] = {0,};

void setup() {
 

for ( int q = 0; q < 2; q++)

{
 data[q] = 'J';
}

}

void loop() 

{
  
  for ( int q = 0; q < 2; q++)

{
 Serial.println (data[q]);
  
}

}
