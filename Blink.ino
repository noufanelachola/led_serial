void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  if(Serial.available() > 0){
    int input = Serial.read();

    if(input == '1'){
      digitalWrite(LED_BUILTIN, HIGH); 
    }else if(input == '0'){  
      digitalWrite(LED_BUILTIN, LOW);   
    }
  }

  
  
}
