#include <Servo.h>
Servo s1;
Servo s2;
Servo s3;
Servo s4;

void setup()
{
  s1.attach(9);
  s2.attach(10);
  s3.attach(11);
  s4.attach(12);
}

void loop()
{
  int i,j,k,l;
  for(i=0, j=180; i<=180, j>=0; i++, j--){
  s1.write(i);
  s2.write(j);
  delay(30);
  }
  delay(3000);
   for(k=0, l=180; k<=180, l>=0; k++, l--){
  s3.write(k);
  s4.write(l);
  delay(30);
  }
  delay(3000);
  for(i=180, j=0; i>=0, j<=180; i--, j++){
  s1.write(i);
  s2.write(j);
  delay(30);
  }
  delay(1000);
  for(k=180, l=0; k>=0, l<=180; k--, l++){
  s3.write(k);
  s4.write(l);
  delay(30);
  }
  delay(3000);
}