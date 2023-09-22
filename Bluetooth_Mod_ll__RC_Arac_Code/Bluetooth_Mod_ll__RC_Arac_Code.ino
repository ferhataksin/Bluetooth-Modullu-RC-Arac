  const int motorA1  = 5;
  const int motorA2  = 7;
  const int motorB1  = 6;
  const int motorB2  = 4;
  int i=0; 
  int j=0;
  int state;
  int vSpeed=255;
void setup() {
    
    pinMode(motorA1, OUTPUT);
    pinMode(motorA2, OUTPUT);
    pinMode(motorB1, OUTPUT);
    pinMode(motorB2, OUTPUT);    
   
    Serial.begin(9600);
}
 
void loop() {

    if(Serial.available() > 0){     
      state = Serial.read();   
    }
  
  
    if (state == '0'){
      vSpeed=0;}
    else if (state == '1'){
      vSpeed=100;}
    else if (state == '2'){
      vSpeed=180;}
    else if (state == '3'){
      vSpeed=200;}
    else if (state == '4'){
      vSpeed=255;}
     
 
  //Gelen veri 'F' ise 
  //araba ileri gider.
    if (state == 'F') {
      analogWrite(motorA1, vSpeed);
      analogWrite(motorA2, 0);
      analogWrite(motorB1, vSpeed);  
      analogWrite(motorB2, 0);
    }
 
  //Gelen veri 'A' ise 
  //araba ileri sol(çapraz) gider.
    else if (state == 'A') {
      analogWrite(motorA1,vSpeed );
      analogWrite(motorA2, 0);  
      analogWrite(motorB1, 100);
      analogWrite(motorB2, 0); 
    }
  
  //Gelen veri 'B' ise 
  //araba ileri sağ(çapraz) gider.
    else if (state == 'B') {
        analogWrite(motorA1, 100);
        analogWrite(motorA2, 0); 
        analogWrite(motorB1, vSpeed);
        analogWrite(motorB2, 0); 
    }
  
  //Gelen veri 'C' ise 
  //araba geri gider.
    else if (state == 'C') {
      analogWrite(motorA1, 0);
      analogWrite(motorA2, vSpeed); 
      analogWrite(motorB1, 0);
      analogWrite(motorB2, vSpeed); 
    }
  
  //Gelen veri 'D' ise 
  //araba geri sol(çapraz) gider
    else if (state == 'D') {
      analogWrite(motorA1, 0);
      analogWrite(motorA2, 100); 
      analogWrite(motorB1, 0);
      analogWrite(motorB2, vSpeed); 
    }
  
  //Gelen veri 'E' ise 
  //araba geri sağ(çapraz) gider
    else if (state == 'E') {
      analogWrite(motorA1, 0);
      analogWrite(motorA2, vSpeed); 
       analogWrite(motorB1, 0);
       analogWrite(motorB2, 100); 
    }
  
  //Gelen veri 'F' ise 
  //araba sola gider.
    else if (state == 'F') {
      analogWrite(motorA1, vSpeed);
      analogWrite(motorA2, 150); 
      analogWrite(motorB1, 0);
      analogWrite(motorB2, 0); 
    }

  //Gelen veri 'G' ise 
  //araba sağa gider
    else if (state == 'G') {
      analogWrite(motorA1, 0);
      analogWrite(motorA2, 0); 
      analogWrite(motorB1, vSpeed);
      analogWrite(motorB2, 150);     
    }
  
  
  //Gelen veri 'H' ise 
  //arabayı durdur.
    else if (state == 'H'){
        analogWrite(motorA1, 0);
        analogWrite(motorA2, 0); 
        analogWrite(motorB1, 0);
        analogWrite(motorB2, 0);
    }  
}
