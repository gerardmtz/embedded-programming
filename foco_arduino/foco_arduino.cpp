int pin=30;
int incomingByte = 0;
void setup() {
  // put your setup code here, to run once:
  bool band=false;
  pinMode(pin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  
  // send data only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();
    if(incomingByte==101 || incomingByte==69)
        {
          
          digitalWrite(pin,LOW); 
     }else if(incomingByte==97 || incomingByte==65) 
     {
      digitalWrite(pin,HIGH);
      }
    // say what you got:
   /* Serial.print("I received: ");
    Serial.println(incomingByte, DEC);
  */
  }
  
}