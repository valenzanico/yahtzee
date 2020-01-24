int rn = 0;
int punt = 0;
char comb = "";
int a1 = 0;
int a2 = 0;
int a3 = 0;
int a4 = 0;
int a5 = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {
for(int num = 0, num <= 5, num+=1){randomSeed(analogRead()); rn = random(1,6);//per 5 volte genero i nimeri da 1 a sei

char com = rn; //trasformo rn in testo
comb = comb + com + ", "; // creo unalista di tutti i numeri usciti
if (com == "1"){a1 = a1 + 1;}
if (com == "2"){a2 = a2 + 1;}// controllo che numeri sono usciti
if (com == "3"){a1 = a3 + 1;}
if (com == "4"){a1 = a4 + 1;}
if (com == "5"){a1 = a5 + 1;}
}

Serial.println(comb)






}
