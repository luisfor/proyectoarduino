int Columnas[] = {0,1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12,13};
int contador=0, contar=0;
int incomingByte;  //trae el valor del processing en java    
int r = 0;
void setup() {
  // comunicacion seria
  Serial.begin(9600);
  // inicializando como salida
   int contador;
    for (int contador = 0; contador < 10; contador++){
      pinMode(Columnas[contador], OUTPUT); }
}
 
void loop() {
  // comparando el valor de incominByte y verificando el puerto serial
  if (Serial.available() > 0) {
    incomingByte = Serial.read();
 /**************************************************************/
     // sistema aleatorio
    if (incomingByte == 'A') {
      Dado();
    } 
      else if (incomingByte == 'B'){
      Final();
    }
    else if (incomingByte == 'D'){
      ApagarLeds();
    }
  }
}
void Dado(){
    for (int contado = 0; contado < 14; contado++)
  {
    digitalWrite(Columnas[contado], LOW);

  }
 
  r = random(1,7);
  if(r==1)
  {
      digitalWrite(8, HIGH);
      delay(80);
      
  }
  else if(r==2){
      digitalWrite(7, HIGH);
      digitalWrite(2, HIGH);
      delay(80);
  }
  else if(r==3){
      digitalWrite(7, HIGH);
      digitalWrite(2, HIGH);
      digitalWrite(8, HIGH);
      delay(80);
  }
  else if(r==4){
      digitalWrite(7, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(2, HIGH);
      delay(80);
  }
  else if(r==5){
      digitalWrite(7, HIGH);
      digitalWrite(2, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(4, HIGH);
      delay(80);
  }
  else if(r==6){
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      delay(80);
      
  }
    for (int contado = 0; contado < 14; contado++)
  {
    digitalWrite(Columnas[contado], LOW);

  }
  
}

void Final(){
  if(r==1)
  {
      digitalWrite(8, HIGH);
      delay(80);
      
  }
  else if(r==2){
      digitalWrite(7, HIGH);
      digitalWrite(2, HIGH);
      delay(80);
  }
  else if(r==3){
      digitalWrite(7, HIGH);
      digitalWrite(2, HIGH);
      digitalWrite(8, HIGH);
      delay(80);
  }
  else if(r==4){
      digitalWrite(7, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(2, HIGH);
      delay(80);
  }
  else if(r==5){
      digitalWrite(7, HIGH);
      digitalWrite(2, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(4, HIGH);
      delay(80);
  }
  else if(r==6){
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      delay(80);
      
  }
}

void ApagarLeds(){
   for (int contado = 0; contado < 14; contado++)
  {
    digitalWrite(Columnas[contado], LOW);

  }
  r=0;
}
