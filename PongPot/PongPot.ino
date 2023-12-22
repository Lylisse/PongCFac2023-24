int PrevPotPos1;
int PrevPotPos2;

struct tuple{
  int a;
  int b;
};

void printPotPos(tuple PotPos){
  Serial.print(PotPos.a);
  Serial.print("\t");
  Serial.print(PotPos.b);
  Serial.print("\n");
}

bool isPotChange(tuple PotPos){
  if( abs(PrevPotPos1 - PotPos.a) > 5 || abs(PrevPotPos2 - PotPos.b) > 5){
    PrevPotPos1 = PotPos.a;
    return true;
  }
  else{
    return false;
  }
}

void sendSerialPotPos(tuple PotPos){
  byte SerSendArr[2] = {PotPos.a, PotPos.b}; /*TODO transform ints to byte to send with serial*/
  Serial.write(SerSendArr, sizeof(SerSendArr));
}

tuple getPotPos(){
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
tuple PotPos = getPotPos();
if(isPotChange(PotPos)){
  sendSerialPotPos(PotPos);
}
/*if(isPotChange(PotPos)){Serial.print("CHANGEMENT"); Serial.print("\n");}
printPotPos(PotPos);*/
}
