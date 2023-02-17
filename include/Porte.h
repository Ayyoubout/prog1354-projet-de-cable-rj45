//https://github.com/Ayyoubout/prog1354-projet-de-cable-rj45.git

#include <Arduino.h>

class Porte
{
    //les attribue
public:
    int vertBlan;
    int verte;
    int orangeBlan;
    int bleu;
    int bleuBlan;
    int orange;
    int maronBlan;
    int maron;

    //constructeur
    Porte(int VB, int V, int OB, int B, int BB, int O, int MB, int M){
    vertBlan = VB;
    verte    = V;
    orangeBlan  = OB;
    bleu     = B;
    bleuBlan = BB;
    orange   = O;
    maronBlan = MB;
    maron    = M;
    }
        
    //j'ai declarais cette fonction pour envoyer un signale avec les brouche de outPut 
    void allume(){  
        digitalWrite(vertBlan, HIGH);
        digitalWrite(verte, HIGH);
        digitalWrite(orangeBlan, HIGH);
        digitalWrite(bleu, HIGH);
        digitalWrite(bleuBlan, HIGH);
        digitalWrite(orange, HIGH);
        digitalWrite(maronBlan, HIGH);
        digitalWrite(maron, HIGH);
    }
    //cette fonction pour essayer est ce que le caple ca marche ou ca marche pas 
    // pour esssayer j'ai fais un tableau de 8 casier et j'ai rediger le contenu de chaque casier 
    bool teste(){
        int TabGauche[8] = {};
        int somme = 0; 
        TabGauche[0] = digitalRead(vertBlan);
        TabGauche[1] = digitalRead(verte);
        TabGauche[2] = digitalRead(orangeBlan);
        TabGauche[3] = digitalRead(bleu);
        TabGauche[4] = digitalRead(bleuBlan);
        TabGauche[5] = digitalRead(orange);
        TabGauche[6] = digitalRead(maronBlan);
        TabGauche[7] = digitalRead(maron);
        
    }
}