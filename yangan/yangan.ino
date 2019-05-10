int fengm = 8;
void setup()
{
    pinMode(fengm,OUTPUT);
    Serial.begin(9600);
}
 
void loop()
{
    int val;
    val=analogRead(0);
    Serial.println(val,DEC);
    if(val<=70){
        int i = 0;
       for(i=0;i<80;i++)//输出一个频率的声音
        {
          digitalWrite(fengm,HIGH);//发声音
          delay(1);//延时1ms
          digitalWrite(fengm,LOW);//不发声音
          delay(1);//延时ms
        }
    }else{
      digitalWrite(fengm,LOW);
    }
    delay(100);
}
