//
// Created by danep on 22/04/2026.
//

#ifndef GESTIONVEHICULOSARREGLO_VEHICULOFAMILIAR_H
#define GESTIONVEHICULOSARREGLO_VEHICULOFAMILIAR_H

#include "Vehiculo.h"
class VehiculoFamiliar: public Vehiculo {
    public:
    VehiculoFamiliar(std::string m,std::string x,int n);
    using Vehiculo::Vehiculo;

    //Override CalcularAutonomia
    double calcularAutonomia() override;

    //sobrecarga de <<
    std::ostream print(std::ostream & os)override;

};


#endif //GESTIONVEHICULOSARREGLO_VEHICULOFAMILIAR_H