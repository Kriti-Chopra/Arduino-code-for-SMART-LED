char data;
#define led 5
#define fan 10

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(fan,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    data=Serial.read();
    if(data=='1') digitalWrite(led,HIGH);
    else if(data=='0') digitalWrite(led,LOW);
    else if(data=='2') digitalWrite(fan,HIGH);
    else if(data=='3') digitalWrite(fan,LOW);
  }

}
