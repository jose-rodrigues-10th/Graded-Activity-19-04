
void setup(){
  pinMode(A0, INPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);


}
void loop()
{
  int var = analogRead(A0);
  int y = map(var,0,1023,10000,1000);

  Serial.println(y);
  Serial.println(var);

  if(var> 1000){
    digitalWrite(8 ,HIGH);
    noTone(2);
  }else{
    digitalWrite(8, LOW); 
    tone(2,y);
  }

 

}
