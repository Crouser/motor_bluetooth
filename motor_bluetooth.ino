#define MOTORHV 4
#define MOTORLV 8
char input,answer;

void setup() {

  Serial.begin(9600);

  pinMode(MOTORHV,OUTPUT);
  pinMode(MOTORLV,OUTPUT);
}

  
  



void loop() {

  if(Serial.available())
  {
    Serial.println("Do you want to start the motor");
    answer=Serial.read();
  // if(answer=='Y')
   {
    Serial.println("Right or left");
    input=Serial.read();
    if(input=='R'|| input=='r')
    {
  digitalWrite(MOTORHV,HIGH);
  digitalWrite(MOTORLV,LOW);
    }

    else if(input=='L'||input=='l')
    {
 
  digitalWrite(MOTORHV,LOW);
  digitalWrite(MOTORLV,HIGH);
  
    }
   }

   else if(answer=='N')
   {
    digitalWrite(MOTORHV,LOW);
  digitalWrite(MOTORLV,LOW);
   }
   
   }
   delay(100);
}

    


  
  
  
