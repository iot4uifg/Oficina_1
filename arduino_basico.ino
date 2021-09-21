/**********
  Projeto IOT4U
  IFG Campus Goiânia
  Autor:    Matheus Yosimura
  Objetivo: Programa básico de apresentação da IDE Arduino
*********/
//
// Rotina de configuração dos pinos
void setup()
{
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
}

// Rotina de repetição de comandos
void loop()
{
  digitalWrite(12,HIGH);
  delay(500); 
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  delay(500);
  digitalWrite(11,LOW);
}
