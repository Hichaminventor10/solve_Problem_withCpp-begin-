#include <iostream>
using namespace std ;

class Personnage{
  private : 
  int vie ; 
  int force ;
  string nom ;
  bool estvie ;
  
  public :
Personnage(); //Constructeur par defaut 
void afficher();
};

Personnage::Personnage(){
    
    vie=100;
    force=50;
    nom="Hicham";
    estvie=true ;
    cout << "un nouveau Personnage est né!" << endl ;
}

void Personnage::afficher(){
    cout << nom << "-vie :\n"<< vie << "\nforce:\n"<<force<< endl ;
}
int main(){
Personnage joueur1;
Personnage joueur2;

joueur1.afficher();
joueur2.afficher();


    return 0;
}