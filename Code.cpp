// Arduino Light Dependant Alarm

int buzzer = 7;
int LDR = 1;
int AlarmLED = 2;
int LDRLevel;

void setup() {
  Serial.begin(9600);
  pinMode(LDR,INPUT);
  pinMode(AlarmLED,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  LDRLevel = analogRead(LDR);
  Serial.println(LDRLevel);
  if(LDRLevel > 500){
    digitalWrite(AlarmLED,HIGH);
    alarm();
  }
  else(digitalWrite(AlarmLED,LOW));
}

void alarm() {
tone(buzzer,2500);
delay(2000);
tone(buzzer,0);
delay(2000);
}
