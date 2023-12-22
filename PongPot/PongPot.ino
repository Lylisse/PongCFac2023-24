int PrevPotPos1;
int PrevPotPos2;

struct Tuple{
  int a;
  int b;
};

void printPotPos(Tuple PotPos){
  Serial.print(PotPos.a);
  Serial.print("\t");
  Serial.print(PotPos.b);
  Serial.print("\n");
}

bool isPotChange(Tuple PotPos){
  if( abs(PrevPotPos1 - PotPos.a) > 5 || abs(PrevPotPos2 - PotPos.b) > 5){
    PrevPotPos1 = PotPos.a;
    return true;
  }
  else{
    return false;
  }
}

Tuple getPotPos(){
  int Pot1Position = analogRead(A0);
  int Pot2Position = analogRead(A1);
  return {Pot1Position, Pot2Position};
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(250000);
}

void loop() {
  // put your main code here, to run repeatedly:
Tuple PotPos = getPotPos();
if(isPotChange(PotPos)){Serial.print("CHANGEMENT"); Serial.print("\n");}
int Pot1Pos = PotPos.a;
int Pot2Pos = PotPos.b;
/*printPotPos(PotPos);*/
}
