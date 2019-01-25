int a = 43;
int b = 45;
int c = 53;
int d = 49;
int e = 47;
int f = 41;
int g = 39;
int num;
String strNum;

void setup(){
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  strNum = Serial.readString();

  if (strNum != NULL){
      if(strNum == "1" || strNum == "4"){
        digitalWrite(a, HIGH);
      }else{
        digitalWrite(a, LOW);
      }
    
      if(strNum == "5" || strNum == "6" || strNum == "C" || strNum == "E" || strNum == "F" ){
        digitalWrite(b, HIGH);
      }else{
        digitalWrite(b, LOW);
      }
    
      if(strNum == "2" || strNum == "C" || strNum == "E" || strNum == "F"){
        digitalWrite(c, HIGH);    
      }else{
        digitalWrite(c, LOW);
      }
    
      if(strNum == "1" || strNum == "4" || strNum == "7" || strNum == "A" || strNum == "F"){
        digitalWrite(d, HIGH);    
      }else{
        digitalWrite(d, LOW);
      }
    
      if(strNum == "1" || strNum == "3" || strNum == "4" || strNum == "5" || strNum == "7" ||strNum == "9"){
        digitalWrite(e, HIGH);     
      }else{
        digitalWrite(e, LOW);
      }
    
      if(strNum == "1" || strNum == "2" || strNum == "3" || strNum == "7"){
        digitalWrite(f, HIGH);
      }else{
        digitalWrite(f, LOW);
      }
    
      if(strNum == "1" || strNum == "7" || strNum == "C" || strNum == "D" ){
        digitalWrite(g, HIGH);
      }else{
        digitalWrite(g, LOW);
      }
  }

  
  
}

