int led = 13;
int pr = A0;
int btn = 30;
int val;
int btnVal;
boolean flag = true;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(pr, INPUT);
  pinMode(btn, INPUT);
  Serial.begin(9600);
}

void loop(){
  val = analogRead(pr);
  btnVal = digitalRead(btn);
  
  
  if (flag){
    if (val < 80){
      digitalWrite(led, HIGH);
    }else{
      digitalWrite(led, LOW);
    }
  }else{
    if (val > 80){
      digitalWrite(led, HIGH);
    }else{
      digitalWrite(led, LOW);
    }
    
  }
  
  if (btnVal == HIGH){
    Serial.print("Apretado");
    flag = !flag;
  }
  
  delay(150);
}
