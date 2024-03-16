
#define ustSol 11
#define ustSol1 10
#define ustSag1 9
#define ustSag 8

#define altSol 2
#define altSol1 3
#define altSag1 4
#define altSag 5 

void setup() {
  // put your setup code here, to run once:

  pinMode(ustSol, OUTPUT);
  pinMode(ustSol1, OUTPUT);
  pinMode(ustSag1, OUTPUT);
  pinMode(ustSag, OUTPUT);


  pinMode(altSol, OUTPUT);
  pinMode(altSol1, OUTPUT);
  pinMode(altSag1, OUTPUT);
  pinMode(altSag, OUTPUT);

}

void loop() {
for(int i=0;i<10;i++){
  sayac(i);
  delay(1000);
  
}
}

void sayac(int sayac1){

  if(sayac1 == 0){
  digitalWrite(ustSol,LOW);   // ORTA
  digitalWrite(ustSol1,HIGH); // SOL UST
  digitalWrite(ustSag1,HIGH); //UST ORTA
  digitalWrite(ustSag,HIGH); // SAG UST

  digitalWrite(altSol,HIGH);  //SOL ALT
  digitalWrite(altSol1,HIGH);  // ALT ORTA
  digitalWrite(altSag1,HIGH); // sag alt
  digitalWrite(altSag,HIGH);  // nokta

  } else if(sayac1 == 1){
  digitalWrite(ustSol,LOW);   // ORTA
  digitalWrite(ustSol1,LOW); // SOL UST
  digitalWrite(ustSag1,LOW); //UST ORTA
  digitalWrite(ustSag,HIGH); // SAG UST

  digitalWrite(altSol,LOW);  //SOL ALT
  digitalWrite(altSol1,LOW);  // ALT ORTA
  digitalWrite(altSag1,HIGH); // sag alt
  digitalWrite(altSag,HIGH);  // nokta

  }else if(sayac1 == 2){
  digitalWrite(ustSol,HIGH);   // ORTA
  digitalWrite(ustSol1,LOW); // SOL UST
  digitalWrite(ustSag1,HIGH); //UST ORTA
  digitalWrite(ustSag,HIGH); // SAG UST

  digitalWrite(altSol,HIGH);  //SOL ALT
  digitalWrite(altSol1,HIGH);  // ALT ORTA
  digitalWrite(altSag1,LOW); // sag alt
  digitalWrite(altSag,HIGH);  // nokta

  }else if(sayac1 == 3){
  digitalWrite(ustSol,HIGH);   // ORTA
  digitalWrite(ustSol1,LOW); // SOL UST
  digitalWrite(ustSag1,HIGH); //UST ORTA
  digitalWrite(ustSag,HIGH); // SAG UST

  digitalWrite(altSol,LOW);  //SOL ALT
  digitalWrite(altSol1,HIGH);  // ALT ORTA
  digitalWrite(altSag1,HIGH); // sag alt
  digitalWrite(altSag,HIGH);  // nokta

  }else if(sayac1 == 4){
  digitalWrite(ustSol,HIGH);   // ORTA
  digitalWrite(ustSol1,HIGH); // SOL UST
  digitalWrite(ustSag1,LOW); //UST ORTA
  digitalWrite(ustSag,HIGH); // SAG UST

  digitalWrite(altSol,LOW);  //SOL ALT
  digitalWrite(altSol1,LOW);  // ALT ORTA
  digitalWrite(altSag1,HIGH); // sag alt
  digitalWrite(altSag,HIGH);  // nokta

  }else if(sayac1 == 5){
  digitalWrite(ustSol,HIGH);   // ORTA
  digitalWrite(ustSol1,HIGH); // SOL UST
  digitalWrite(ustSag1,HIGH); //UST ORTA
  digitalWrite(ustSag,LOW); // SAG UST

  digitalWrite(altSol,LOW);  //SOL ALT
  digitalWrite(altSol1,HIGH);  // ALT ORTA
  digitalWrite(altSag1,HIGH); // sag alt
  digitalWrite(altSag,HIGH);  // nokta

  }else if(sayac1 == 6){
  digitalWrite(ustSol,HIGH);   // ORTA
  digitalWrite(ustSol1,HIGH); // SOL UST
  digitalWrite(ustSag1,HIGH); //UST ORTA
  digitalWrite(ustSag,LOW); // SAG UST

  digitalWrite(altSol,HIGH);  //SOL ALT
  digitalWrite(altSol1,HIGH);  // ALT ORTA
  digitalWrite(altSag1,HIGH); // sag alt
  digitalWrite(altSag,HIGH);  // nokta

  }else if(sayac1 == 7){
  digitalWrite(ustSol,LOW);   // ORTA
  digitalWrite(ustSol1,LOW); // SOL UST
  digitalWrite(ustSag1,HIGH); //UST ORTA
  digitalWrite(ustSag,HIGH); // SAG UST

  digitalWrite(altSol,LOW);  //SOL ALT
  digitalWrite(altSol1,LOW);  // ALT ORTA
  digitalWrite(altSag1,HIGH); // sag alt
  digitalWrite(altSag,HIGH);  // nokta

  }else if(sayac1 == 8){
  digitalWrite(ustSol,HIGH);   // ORTA
  digitalWrite(ustSol1,HIGH); // SOL UST
  digitalWrite(ustSag1,HIGH); //UST ORTA
  digitalWrite(ustSag,HIGH); // SAG UST

  digitalWrite(altSol,HIGH);  //SOL ALT
  digitalWrite(altSol1,HIGH);  // ALT ORTA
  digitalWrite(altSag1,HIGH); // sag alt
  digitalWrite(altSag,HIGH);  // nokta

  }else if(sayac1 == 9){
  digitalWrite(ustSol,HIGH);   // ORTA
  digitalWrite(ustSol1,HIGH); // SOL UST
  digitalWrite(ustSag1,HIGH); //UST ORTA
  digitalWrite(ustSag,HIGH); // SAG UST

  digitalWrite(altSol,LOW);  //SOL ALT
  digitalWrite(altSol1,HIGH);  // ALT ORTA
  digitalWrite(altSag1,HIGH); // sag alt
  digitalWrite(altSag,HIGH);  // nokta
  }
}



