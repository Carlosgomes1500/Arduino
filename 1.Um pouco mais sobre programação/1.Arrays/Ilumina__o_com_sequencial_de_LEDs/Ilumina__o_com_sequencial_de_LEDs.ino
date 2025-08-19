// --- Mapeamento do Hardware ---
// Tempo de duração do pulso
#define duraPulso 100 

// Numero de pinos utilizados (ou seja, tamanho do array)
#define numPins 6 

// --- Variaveis utilizadas ---
//Array de números de pinos aos quais os LEDs estão conectados 
int ledPins[] = {  2, 3, 4, 5, 6, 7};

 //Variavel auxiliar para controle da posição do array     
int i;                                 

// --- Configurações iniciais---
void setup() 
{
  //loop para inicializar cada pino como uma saída
  for (i = 0; i < numPins; i++)  
  {
    pinMode(ledPins[i], OUTPUT);
  }
}

// --- Loop de progama---
void loop() 
{
  // loop da sequencial dos LEDs do pino mais baixo para o mais alto: 
  for (i = 0; i < numPins; i++)  
  {
    digitalWrite(ledPins[i], HIGH);
    delay(duraPulso);
    digitalWrite(ledPins[i], LOW);
  }

   // loop da sequencial dos LEDs do pino mais alto para o mais baixo:
 for (i = (numPins - 1); i >= 0; i--)  
 {
    digitalWrite(ledPins[i], HIGH);
    delay(duraPulso );
    digitalWrite(ledPins[i], LOW);
  }
}
