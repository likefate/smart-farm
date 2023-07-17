const int led = 26;
void setup() {
  Serial.begin(115200); 
  pinMode(led,OUTPUT);
}

void loop(){
  digitalWrite(led,HIGH);
  Serial.println("Current Flowing");
  delay(5000);
  digitalWrite(led,LOW);
  Serial.println("Current not Flowing");
  delay(5000);        
}
