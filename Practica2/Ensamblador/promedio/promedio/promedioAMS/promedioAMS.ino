void setup() {
  Serial.begin(9600);
}

void loop() {
  int n = (Serial.readString()).toInt();
  int avg = 0;
  uint8_t arr[5] = {2,5,7,3,4} ;
  /*
  for(int i = 0; i < n; i++){
    Serial.println("Escribe el numero "+i);
    arr[i] = (Serial.readString()).toInt();
  }
  */
  //int *pointer = &arr;

  
  asm volatile(
    "ldi r16 0x00 \n \t"
    "loop: \n \t"
    "lds r20 x+ \n \t"
    ""
    :"=r" (avg)
    :"d" (n), "x" (&arr)
    );

}
