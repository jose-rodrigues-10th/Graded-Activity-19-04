
void setup(){
  pinMode(2, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);


}
void loop()
{
  int var = analogRead(A0);
  int y = map(var,0,1013,10078,1090);

  Serial.println(y);
  Serial.println(var);

  if(var> 1070){
    digitalWrite(12 ,HIGH);
    noTone(2);
  }else{
    digitalWrite(12, LOW); 
    tone(2,y);
  }

 

}
