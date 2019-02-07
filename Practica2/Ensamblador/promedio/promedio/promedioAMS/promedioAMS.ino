void setup() {
  Serial.begin(9600);
}

void loop() {
  uint8_t n = (Serial.readString()).toInt();
  uint8_t arr[5] = {2,5,7,3,4} ;
  uint8_t *ptr = arr;
  /*
  for(int i = 0; i < n; i++){
    Serial.println("Escribe el numero "+i);
    arr[i] = (Serial.readString()).toInt();
  }
  */

  asm volatile(
    "ldi r16, 0x00 \n \t"
    "ldi r17 %1"
    "loop: \n \t"
    "ldr r18, [%a2+] \n \t"
    "add %0, r18 \n \t"
    "inc r16"
    "cpse r17, r16"
    "jmp loop"
    "break"
    :"=&r" (sum)
    :"d" (n-1), "e" (ptr)
    );

  double avg = sum/n;

}
