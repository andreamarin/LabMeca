void setup() {
  //Serial.begin(9600);
}

void loop() {
  int8_t n = 5;//(Serial.readString()).toInt();
  int8_t arr[5] = {2,5,7,3,4} ;
  int8_t *ptr = arr;
  int8_t sum;

  /*
  for(int i = 0; i < n; i++){
    Serial.println("Escribe el numero "+i);
    arr[i] = (Serial.readString()).toInt();
  }
  */
  

  asm volatile(
    "ldi r16, 0x00 \n\t"
    "ldi r17, %1 \n\t"
    "loop: \n\t"
    "ld r18, %a2+ \n\t"
    "add %0, r18 \n\t"
    "inc r16 \n\t"
    "cpse r17, r16 \n\t"
    "jmp loop \n\t"
    :"=&r" (sum)
    :"M" (n-1), "e" (ptr)
    );

  double avg = sum/n;

}
