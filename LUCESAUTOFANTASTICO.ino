#define PINA 2
#define PINB 3
#define PINC 4
#define PIND 5
#define PINE 6
#define PINF 7
int estado;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PINA,OUTPUT);
  pinMode(PINB,1);
  pinMode(PINC,1);
  pinMode(PIND,1);
  pinMode(PINE,1);
  pinMode(PINF,1);
  

}

void loop() {
  // put your main code here, to run repeatedly:
if (estado ==0){
    for(int x=0; x<5; x++){
      Serial.println(x);
      delay(200);
      digitalWrite(PINA,1);
       delay(200);
      digitalWrite(PINB,1);
      delay(200);
      digitalWrite(PINC,1);
      delay(200);
      digitalWrite(PIND,1);
      delay(200);
      digitalWrite(PINE,1);
      delay(200);
      digitalWrite(PINF,1);
      delay(200);
      digitalWrite(PINF,0);
      delay(200);
      digitalWrite(PINE,0);
      delay(200);
      digitalWrite(PIND,0);
      delay(200);
      digitalWrite(PINC,0);
      delay(200);
      digitalWrite(PINB,0);
      delay(200);
      digitalWrite(PINA,0);
       delay(200);
    }
  estado =1;
  }
}
