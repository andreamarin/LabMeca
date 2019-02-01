int led = 13;

void setup(){
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  asm volatile("ldi r16, 0x42 \n\t"::);
  int a = 10;
  int b = 20;
  int c = 30;
  int det = b*b-4*a*c;
  //Si el determinante es positivo, prende el led, si no lo apaga.
  if(det>0){
    digitalWrite(led, HIGH);
  }  
}
