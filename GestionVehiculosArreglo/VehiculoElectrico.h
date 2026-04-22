//
// Created by danep on 22/04/2026.
//

#ifndef GESTIONVEHICULOSARREGLO_VEHICULOELECTRICO_H
#define GESTIONVEHICULOSARREGLO_VEHICULOELECTRICO_H

#include "Vehiculo.h"
class VehiculoElectrico:public Vehiculo {
public:
    VehiculoElectrico(std::string m,std::string x,int n);
    ~VehiculoElectrico();

    //Para probar una nueva funcion que aprendi:
    using Vehiculo::Vehiculo;  //Te construlle directamente todos los constructores de la clase padre. Solo usar si no se quiere añadir ningun dato mas

    //Sobrecarga calcularAutonomia:
    double calcularAutonomia() override;

    //Sobrecarga ++
    // Prefijo:
    VehiculoElectrico & operator++();

    //Postfijo
    VehiculoElectrico & operator++(int);

    //Sobrecarga <<:

    std::ostream print(std::ostream & os) override {
        os << "[Vehiculo Electrico: " <<" Marca: "<< getMarca() << " Modelo:  " << getModelo() << "] Energia actual: " << nivel<< "%"<<std::endl;

    }

};


#endif //GESTIONVEHICULOSARREGLO_VEHICULOELECTRICO_H