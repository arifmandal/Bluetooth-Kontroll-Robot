int motorA1=6;//IN3
int motorA2=7;//IN1

int motorB1=4;//IN2
int motorB2=5;//IN4

int veri;
int motorHiz=255;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(motorA1,OUTPUT);
  pinMode(motorA2,OUTPUT);
  pinMode(motorB1,OUTPUT);
  pinMode(motorB2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    veri=Serial.read();
    }
  switch(veri){

    case 'F':// ileriye
    analogWrite(motorA1,motorHiz);
    analogWrite(motorA2,0);
    analogWrite(motorB1,motorHiz);
    analogWrite(motorB2,0);
    break;

    case 'G'://ileriye sol
    analogWrite(motorA1,motorHiz);
    analogWrite(motorA2,0);
    analogWrite(motorB1,motorHiz);
    analogWrite(motorB2,0);
    break;

    case 'I'://ileriye sag
    analogWrite(motorA1,motorHiz);
    analogWrite(motorA2,0);
    analogWrite(motorB1,motorHiz);
    analogWrite(motorB2,0);
    break;

    case 'B':// geri
    analogWrite(motorA1,0);
    analogWrite(motorA2,motorHiz);
    analogWrite(motorB1,0);
    analogWrite(motorB2,motorHiz);
    break;

    case 'H'://sol geri
    analogWrite(motorA1,0);
    analogWrite(motorA2,motorHiz);
    analogWrite(motorB1,0);
    analogWrite(motorB2,motorHiz);
    break;

    case 'J'://sag geri
    analogWrite(motorA1,0);
    analogWrite(motorA2,motorHiz);
    analogWrite(motorB1,0);
    analogWrite(motorB2,motorHiz);
    break;

    case 'L'://sola doner
    analogWrite(motorA1,motorHiz);
    analogWrite(motorA2,motorHiz);
    analogWrite(motorB1,0);
    analogWrite(motorB2,0);
    break;

    case 'R'://saga doner
    analogWrite(motorA1,0);
    analogWrite(motorA2,0);
    analogWrite(motorB1,motorHiz);
    analogWrite(motorB2,motorHiz);
    break;

    case 'S'://durur
    analogWrite(motorA1,0);
    analogWrite(motorA2,0);
    analogWrite(motorB1,0);
    analogWrite(motorB2,0);
    break;
    }
}
