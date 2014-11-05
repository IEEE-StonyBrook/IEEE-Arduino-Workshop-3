int sensePin = 0;
int ledPin  = 9;
//int motionPin = 1; //Part 4

//int lastDist = 0; //Part 4
//int currentDist = 0; //Part 4
//int thresh = 200; //Part 4


//Part 1 and 2 setup
void setup(){
  analogReference(DEFAULT); //Going from 0 to 5V 
  Serial.begin(9600); 
}

void loop(){
  Serial.println(analogRead(sensePin)); 
  delay(500); 
}

/*
//Part 3 and 4
void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop(){
  int val = analogRead(sensePin); //Part 2, 3 and 4
  //currentDist = analogRead(motionPin); //Part 4
  
  val = constrain(val,750,900); //Part 3
  int ledLevel = map(val,750,900,255,0); //Part 3
  
  /* 
  //Part 4
  if ((currentDist > lastDist + thresh || currentDist < lastDist - thresh) && val < 800)
  {
    digitalWrite(ledPin, HIGH);
    delay(1000);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }
  lastDist = currentDist;
  */
  

  
  //analogWrite(ledPin,ledLevel); //Part 3 
  //if(val<800) digitalWrite(ledPin,HIGH); //Part 2
  //else digitalWrite(ledPin,LOW); //Part 2
  
//}


