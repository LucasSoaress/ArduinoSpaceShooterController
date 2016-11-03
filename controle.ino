const int botaoAtirar = 6;
const int botaoDireita = 7;
const int botaoEsquerda = 8;

void setup() 
{
  Serial.begin(9600);
  
  pinMode(botaoAtirar, INPUT);
  digitalWrite(botaoAtirar,LOW);

  pinMode(botaoDireita, INPUT);
  digitalWrite(botaoDireita,LOW);

  pinMode(botaoEsquerda, INPUT);
  digitalWrite(botaoEsquerda,LOW);
}

void loop() 
{
  if(digitalRead(botaoAtirar) == HIGH)
  {
    Serial.write(1);
    Serial.flush();
    delay(130);
  }

  if(digitalRead(botaoDireita) == HIGH)
  {
    Serial.write(2);
    Serial.flush();
    delay(20);
  }

  if(digitalRead(botaoEsquerda) == HIGH)
  {
    Serial.write(3);
    Serial.flush();
    delay(20);
  }
}

