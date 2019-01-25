int a = 43;
int b = 45;
int c = 53;
int d = 49;
int e = 47;
int f = 41;
int g = 39;

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
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  
}
