//
// Created by danep on 22/04/2026.
//

#include "Vehiculo.h"

Vehiculo::Vehiculo(std::string m, std::string x, int n):modelo(m),marca(x),nivel(n) {
    this->modelo = m;
    this->marca = x;
    this->nivel = n;
}

Vehiculo::~Vehiculo() {
    std::cout<<"Objeto destruido, liberando memoria"<<std::endl;
}

std::string Vehiculo::getModelo() {
    return this->modelo;
}
std::string Vehiculo::getMarca() {
    return this->marca;
}

void Vehiculo::setModelo(std::string m) {
    this->modelo = m;
}
void Vehiculo::setMarca(std::string m) {
    this->marca = m;
}
 std::ostream Vehiculo::print(std::ostream & os) {
    os << "[clase Vehiculo " <<" Marca: "<< getMarca() << " Modelo:  " << getModelo() << "] Energia actual: "  << nivel<<"%"<<std::endl;

}

void Vehiculo::ConsumirEnergia(int cantidad) {
if (cantidad>nivel) {
    throw std::out_of_range("\n\tNiveles de energia insuficiente, ERROR");
}
    std::cout<<"\n\tCantidad de energia: "<<cantidad<<std::endl;
}
