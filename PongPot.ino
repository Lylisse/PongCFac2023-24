int pot1Position;
int pot2Position;

struct Tuple{
  int a;
  int b;
};

void printPotPos(Tuple PotPos){
  Serial.begin(250000);
  Serial.print(PotPos.a);
  Serial.print("\t");
  Serial.print(PotPos.b);
  Serial.print("\n");
}

Tuple getPotPos(){
  pot1Position = analogRead(A0);
  pot2Position = analogRead(A1);
  return {pot1Position, pot2Position};
}

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
Tuple PotPos = getPotPos();
int Pot1Pos = PotPos.a;
int Pot2Pos = PotPos.b;
/*printPotPos(PotPos);*/
}
