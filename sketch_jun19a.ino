const int but1 = 8;
const int but2 = 11;
int val1=0,val2=0;
void setup() {
  pinMode(but1,INPUT);
  pinMode(but2,INPUT);
  Serial.begin(9600);
}

void loop() {
  val1 = digitalRead(but1);
  val2 = digitalRead(but2);
  Serial.println(val1);
}
