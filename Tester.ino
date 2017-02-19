void setup() {
  int a=30;
  while(a<=45){
  pinMode(a,OUTPUT);
  a++;
}  a=30;

  while(a<=37){
  digitalWrite(a,LOW);
  a++;
}  a=38;
  
  while(a<=45){
  digitalWrite(a,HIGH);
  a++;
}
}

void loop() {
  const int time = 1000;
  int a=30, b=38;
  while(a<=35){
   digitalWrite(a,HIGH);
   while(b<=45){
     digitalWrite(b,LOW);
     delay(time);
     digitalWrite(b,HIGH);
     b++;
   }
   digitalWrite(a,LOW);
   a++;
   b=38;
  }
  digitalWrite(36,HIGH);
  while(b<=44){
     digitalWrite(b,LOW);
     delay(time);
     digitalWrite(b,HIGH);
     b++;
   }
  digitalWrite(36,LOW);
   b=38;
   digitalWrite(37,HIGH);
  while(b<=42){
     digitalWrite(b,LOW);
     delay(time);
     digitalWrite(b,HIGH);
     b++;
   }
  digitalWrite(37,LOW);
   b=38;
}
