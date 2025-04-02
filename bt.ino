int led=13;
#define led1 3;
#define led2 11;
String data;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.println("Now your data communication is ready...\t");
  digitalWrite(13,LOW);
  digitalWrite(3,LOW);
  digitalWrite(11,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available() > 0)
  {
    data = Serial.readString();
  
    Serial.println(data);
    if (data=="2"){

      
      digitalWrite(13,HIGH);
    } else if(data=="1"){
      digitalWrite(13,LOW);
    }
    delay(100);
  }

}
