int red = 13;
int yellow = 12;
int green = 11;

void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(green,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
changeLights();
delay(15000);
}

void changeLights(){
  //green off, yellow for 3 seconds
  digitalWrite(green, LOW);
  digitalWrite(yellow,HIGH);
  delay(3000);

  //turn yellow off, then turn red on for 5 seconds
  digitalWrite(yellow,LOW);
  digitalWrite(red,HIGH);
  delay(10000);

  //red and yellow on for 2 seconds (red is already on)
  digitalWrite(yellow,HIGH);
  delay(2000);

  //turn off red and yellow and turn green on
  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(green,HIGH);
}



