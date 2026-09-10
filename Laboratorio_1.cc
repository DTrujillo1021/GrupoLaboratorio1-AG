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
