#include <iostream>

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