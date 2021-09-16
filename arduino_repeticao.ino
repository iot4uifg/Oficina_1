/**********
  Projeto IOT4U
  IFG Campus Goiânia
  Autor:    Matheus Yosimura
  Objetivo: Programa sobre comando de repetição
*********/

int x=0; 

void setup()
{
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop()
{
//Comando de repetição While
  while(x<5){
    x=x+1;
  	digitalWrite(12,HIGH);
  	delay(500);
    digitalWrite(12,LOW);
    delay(500);
  }
  while(x>0){
    x=x-1;
  	digitalWrite(11,HIGH);
  	delay(500);
    digitalWrite(11,LOW);
    delay(500);
  }
}
