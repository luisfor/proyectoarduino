 
 import processing.serial.*;
 Serial port;
 
 void setup()  {
 
   /* Esta parte debes de alterarla , en donde estan los corchetes deberas de escribir el puerto con el que se esta comunicando el Arduino en mi caso es el 0 , basa con ir tecleando 0,1,2,3... hasta que funcione y listo. */
    port = new Serial(this, Serial.list()[0], 9600);  
}
 void draw() {
 
  String onoroff[] = loadStrings("http://localhost/proyectoarduino/LEDstate.txt"); // AQUI se inserta la direcion de tu archivo .txt en mi caso es asi http://localhost/LEDstate.txt
  print(onoroff[0]);  // Imprime lo que esta en el archivo (1,2,3 o 0)
 
  if (onoroff[0].equals("1") == true) {
    println(" - Encendido Aleatorio");
    port.write('A'); 
 
  }  else if (onoroff[0].equals("2") == true) {
    println(" - Seleccion Final del Random");
    port.write('B'); 
 
  } else if (onoroff[0].equals("0") == true) {
    println(" - Apagado de Todos los Leds");
    port.write('D'); 
 
  } 
 
  delay(300);
 }
