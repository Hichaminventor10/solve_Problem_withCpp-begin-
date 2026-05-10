#include <iostream>
using namespace std ;

// definir la classe Rectangle 
class Rectangle  {

public :
float Longueur ;
float Largeur ;
//definir les constructeurs 
Rectangle(float L, float l ){
    Longueur=L ;
    Largeur=l ;
}
// definir methode 
float surface(){
    return Largeur*Longueur ;
}


};
int main(){
    Rectangle r(5,6);
    cout << "la surface de la Rectangle est :" ;
cout<< r.surface();
return 0 ;
}