void setup()
{
  pinMode(6, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600);
  Serial.println("I'm OK");
}
byte i=0;
void loop()
{

 while(Serial.available()>0)
    {
      i=Serial.read();
      Serial.println(i);
   i=i-'0';
      switch(i)
      {
        case 1:
        {digitalWrite(7,LOW);
         digitalWrite(8,HIGH);
         digitalWrite(9,HIGH);
         digitalWrite(10,LOW);
         digitalWrite(11,LOW);
         digitalWrite(12,LOW);
         digitalWrite(6,LOW);
        }break;
        case 0:
        {digitalWrite(7,HIGH);
         digitalWrite(8,HIGH);
         digitalWrite(9,HIGH);
         digitalWrite(10,HIGH);
         digitalWrite(11,HIGH);
         digitalWrite(12,HIGH);
         digitalWrite(6,LOW);
       } break;
        
        case 2:
        {digitalWrite(7,HIGH);
         digitalWrite(8,HIGH);
         digitalWrite(9,LOW);
         digitalWrite(10,HIGH);
         digitalWrite(11,HIGH);
         digitalWrite(12,LOW);
         digitalWrite(6,HIGH);
       } break;
        
        case 3:
        {digitalWrite(7,HIGH);
         digitalWrite(8,HIGH);
         digitalWrite(9,HIGH);
         digitalWrite(10,HIGH);
         digitalWrite(11,LOW);
         digitalWrite(12,LOW);
         digitalWrite(6,HIGH);
        }break;
        
        case 4:
        {digitalWrite(7,LOW);
         digitalWrite(8,HIGH);
         digitalWrite(9,HIGH);
         digitalWrite(10,LOW);
         digitalWrite(11,LOW);
         digitalWrite(12,HIGH);
         digitalWrite(6,HIGH);
        }break;
        
        case 5:
        {digitalWrite(7,HIGH);
         digitalWrite(8,LOW);
         digitalWrite(9,HIGH);
         digitalWrite(10,HIGH);
         digitalWrite(11,LOW);
         digitalWrite(12,HIGH);
         digitalWrite(6,HIGH);
       } break;
        
        case 6:
        {digitalWrite(7,HIGH);
         digitalWrite(8,LOW);
         digitalWrite(9,HIGH);
         digitalWrite(10,HIGH);
         digitalWrite(11,HIGH);
         digitalWrite(12,HIGH);
         digitalWrite(6,HIGH);
        }break;

        case 7:
        {digitalWrite(7,HIGH);
         digitalWrite(8,HIGH);
         digitalWrite(9,HIGH);
         digitalWrite(10,LOW);
         digitalWrite(11,LOW);
         digitalWrite(12,LOW);
         digitalWrite(6,LOW);
        }break;
        
        case 8:
        {digitalWrite(7,HIGH);
         digitalWrite(8,HIGH);
         digitalWrite(9,HIGH);
         digitalWrite(10,HIGH);
         digitalWrite(11,HIGH);
         digitalWrite(12,HIGH);
         digitalWrite(6,HIGH);
        }break;
      }
 }
}
