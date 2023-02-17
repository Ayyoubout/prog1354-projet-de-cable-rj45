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
}