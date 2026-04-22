//
// Created by danep on 22/04/2026.
//

#include "VehiculoFamiliar.h"
VehiculoFamiliar::VehiculoFamiliar(std::string m,std::string x,int n):Vehiculo(m,x,n) {

}
double VehiculoFamiliar::calcularAutonomia() {
    return nivel*2;
}

std::ostream VehiculoFamiliar::print(std::ostream & os) {
    os << "[Coche familiar: " <<" Marca: "<< getMarca() << " Modelo:  " << getModelo() << "] Combustible actual: " << nivel<<"%"<<std::endl;

}
