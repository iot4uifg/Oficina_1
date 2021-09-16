/**********
  Projeto IOT4U
  IFG Campus Goiânia
  Autor:    Matheus Yosimura
  Objetivo: Programa de criação de uma rotina
*********/

int x=0; 

void setup()
{
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
}

//Rotina para somar + 1
int atecinco(int a){
	while(a < 5){
      a=a+1;
      digitalWrite(12,HIGH);
      delay(500);
      digitalWrite(12,LOW);
      delay(500);
    }
//Retorna 5 para x
  return a;
}

//Função para diminuir -1
int atezero(int b){
  while(b>0){
      b=b-1;
      digitalWrite(11,HIGH);
      delay(500);
      digitalWrite(11,LOW);
      delay(500);
    }
//Retorna 0 para x
  return b;
}


void loop(){
//Chamada da função atecinco
  x=atecinco(x);
//Chamada da função atezero
  x=atezero(x);
}
