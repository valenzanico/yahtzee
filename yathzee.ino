int rn = 0;
int punt = 0;
char comb = "";
int somdad = 0;
int a1 = 0;
int a2 = 0;
int a3 = 0;
int a4 = 0;
int a5 = 0;
int a6 = 0;
char par = "";
int cont = 0;
char part = "";
char fine = "";
int b1= 0;
int b2= 0;
int b3= 0;
int b4= 0;
int b5= 0;
int b6= 0;
int b7= 0;
int b8= 0;
int b9= 0;
int b10= 0;
int b11= 0;
int b12 = 0;
int comb1 = 0;
int comb2 =0;
int comb3 =0;
int comb4 =0;
int comb5 =0;
int comb6 =0;
void setup() {
  Serial.begin(9600);Serial.println("per iniziare a giocare scrivi via");
}
void loop() { 

int rn = 0;
int punt = 0;
char comb = "";
int somdad = 0;
int a1 = 0;
int a2 = 0;
int a3 = 0;
int a4 = 0;
int a5 = 0;
int a6 = 0;
char par = "";
int cont = 0;
char part = "";
char fine = "";
int b1= 0;
int b2= 0;
int b3= 0;
int b4= 0;
int b5= 0;
int b6= 0;
int b7= 0;
int b8= 0;
int b9= 0;
int b10= 0;
int b11= 0;
int b12 = 0;
int comb1 = 0;
int comb2 =0;
int comb3 =0;
int comb4 =0;
int comb5 =0;
int comb6 =0;

part = Serial.read();

for(int num = 0; num < 5;num++){randomSeed(analogRead(0)); rn = random(1,6);//per 5 volte genero i numeri da 1 a sei
Serial.println(rn);
somdad = somdad + rn;
char com = char(rn); //trasformo rn in testo
comb = comb + char(rn) + ", "; // creo unalista di tutti i numeri usciti
if (rn == 1){a1 = a1 + 1;}
if (rn == 2){a2 = a2 + 1;} // controllo che numeri sono usciti
if (rn == 3){a3 = a3 + 1;} 
if (rn == 4){a4 = a4 + 1;}
if (rn == 5){a5 = a5 + 1;}
if (rn == 6){a6 = a6 + 1;}                                
                                }Serial.println(comb); comb1 = a1; comb2 = a2 * 2; comb3 = a3 * 3; comb4 = a4 * 4;comb5 = a5 * 5; comb6 = a6 * 6; 
if (a1 >= 1){Serial.print("dadi uguali con 1 ");Serial.print(a1);Serial.print(" questa combinazione fa " );Serial.print(comb1);Serial.println(" combinazione num 1");}// prime combinazioni
if (a2 >= 1){Serial.print("dadi uguali con 2 ");Serial.print(a2);Serial.print(" questa combinazione fa " );Serial.print(comb2);Serial.println(" combinazione num 2");}
if (a3 >= 1){Serial.print("dadi uguali con 3 ");Serial.print(a3);Serial.print(" questa combinazione fa " );Serial.print(comb3);Serial.println(" combinazione num 3");}
if (a4 >= 1){Serial.print("dadi uguali con 4 ");Serial.print(a4);Serial.print(" questa combinazione fa " );Serial.print(comb4);Serial.println(" combinazione num 4");}
if (a5 >= 1){Serial.print("dadi uguali con 5 ");Serial.print(a5);Serial.print(" questa combinazione fa " );Serial.print(comb5);Serial.println(" combinazione num 5");}
if (a6 >= 1){Serial.print("dadi uguali con 6 ");Serial.print(a6);Serial.print(" questa combinazione fa " );Serial.print(comb6);Serial.println(" combinazione num 6");}       

if (a1 == 1 and a2 == 1 and a3 == 1 and a4 == 1 ) {Serial.println(" hai fatto una piccola scala comb num 7, 30 punti");}
if(a2 == 1 and a3 == 1 and a4 == 1 and a5 == 1 ) {Serial.println(" hai fatto una piccola scala comb num 7, 30 punti");}
if(a3 == 1 and a4 == 1 and a5 == 1 and a6 == 1 ) {Serial.println(" hai fatto una piccola scala comb num 7, 30 punti");}//piccola scala + 30 punti                 

if (a1 == 1 and a2 == 1 and a3 == 1 and a4 == 1 and a5 == 1) {Serial.println(" hai fatto una grande scala comb num 8, 40 punti");}
if (a2 == 1 and a3 == 1 and a4 == 1 and a5 == 1 and a6 == 1){Serial.println(" hai fatto una grande scala comb num 8, 40 punti");}// grande scala + 40 punti

if (a1 == 3 or a2 == 3 or a3 == 3 or a4 == 3 or a5 == 3 or a6 == 3){Serial.print(" hai fatto un tris comb num 9; il punteggio è: ");Serial.println(somdad);}//tris

//if (a1 == 3 or a2 == 3 or a3 == 3 or a4 == 3 or a5 == 3 or a6 == 3 and a1 == 2 or a2 == 2 or a3 == 2 or a4 == 2 or a5 == 2 or a6 == 2){Serial.println("hai fatto poker, 40 punti combinazione n 12");}                          

if (a1 == 4 or a2 == 4 or a3 == 4 or a4 == 4 or a5 == 4 or a6 == 4){Serial.print(" hai fatto una serie di 4 comb num 10; il punteggio è: ");Serial.println(somdad);}

if (a1 == 5 or a2 == 5 or a3 == 5 or a4 == 5 or a5 == 5 or a6 == 5){Serial.println(" hai fatto uno yahtzee comb num 11; il punteggio è: 50");}

//Serial.println(comb);
//Serial.println("per ritirare scrivi tira, se voui invece sceglire una combinazione scrivi il numero") ;delay(20000);fine=Serial.read(); 
//if (fine == "tira" ){Serial.println("ritiro");
//} 
//if (fine == "1"){b1 ++; Serial.println(" hai fatto") ;Serial.print(comb1);} 
//if (fine == "2") {b2 ++; Serial.println(" hai fatto") ;Serial.print(comb2);} 
//if (fine == "3") {b3 ++; Serial.println(" hai fatto") ;Serial.print(comb3);} 
//if (fine == "4") {b4 ++; Serial.println(" hai fatto") ;Serial.print(comb4);} 
//if (fine == "5") {b5 ++; Serial.println(" hai fatto") ;Serial.print(comb5);} 
//if (fine == "6") {b6 ++; Serial.println(" hai fatto") ;Serial.print(comb6);} 
//if (fine == "7") {b7++;Serial.println("30");} 
//if (fine == "8"){b8++;Serial.println("40");} 
//if (fine == "9"){b9++;Serial.println(somdad);} 
//if (fine == "10") {b10++;Serial.println(somdad);} 
//if (fine == "11"){b11++;Serial.println("50");}
//if (fine == "12"){b12++;Serial.println("40");}                                                                              




delay(20000);

}

