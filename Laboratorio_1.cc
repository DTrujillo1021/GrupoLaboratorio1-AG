#include <iostream>

float ConsultarCalorias(float calorias);

int main(){
    std::cout << "carga inicial" << std:: endl;
    ConsultarCalorias(0);
    


}

float ConsultarCalorias(float calorias)
{
    std::cout << "Calorias actuales: "<< calorias << "Cal."<< std:: endl;
}
