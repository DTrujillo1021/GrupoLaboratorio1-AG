#include <iostream>

void agregarCalorias(int &calorias, int calo);

int main(){
    int calorias = 2000;
    int calo;
std :: cout << "ingrese las calorias cosumidas: " << std :: endl;
std :: cin >> calo;
    agregarCalorias(calorias, calo);
    std::cout << "despues de consumir esas calorias " << calorias << std::endl;

    return 0;
}

void agregarCalorias(int &calorias, int calo){
    if (calo < 0){
        std :: cout << "error: las calorias consumidas no pueden ser negativas" << std :: endl;
        std :: cout << "tus calorias siguen siendo: " << calorias << std :: endl;
        return;
    }
    calorias += calo;
}
struct Calorias
{
    int calorias;
};

void QuemarCalorias(int *calorias, int cant);

int main(){
    Calorias calorias;

    calorias.calorias=2000;


 QuemarCalorias(&calorias.calorias, 1000);


 std::cout<<"Despues de consumir 1000 calorias las calorias son:"<<std::endl;
 

}


void QuemarCalorias(int *calorias, int cal)
{
   //no se puede restar calorias negativas:
    if (*calorias <= 0)
    {
        std::cout<<"NO se puede quemar calorias negativas :)"<<std::endl;
    }

    //no puede las calorias menor a 0
     else if (*calorias==0)
     {
        std::cout<<"No se puede quemar calorias ya se consumieron todas :("<<std::endl;

     }
    else {*calorias -= cal;}

    
}
