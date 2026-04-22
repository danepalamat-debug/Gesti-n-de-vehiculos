//
// Created by danep on 22/04/2026.
//

#include "VehiculoElectrico.h"

VehiculoElectrico::VehiculoElectrico(std::string m, std::string x, int n):Vehiculo(m,x,n) {


}

VehiculoElectrico::~VehiculoElectrico() {
    std::cout<<"Vehiculo electrico destruido, liberando memoria"<<std::endl;
}

double VehiculoElectrico::calcularAutonomia() {
    return nivel*9;
}

VehiculoElectrico & VehiculoElectrico::operator++() {
    this->nivel = 100;
    return *this;
}

VehiculoElectrico & VehiculoElectrico::operator++(int) {
    this->nivel++;
    return *this;
}


