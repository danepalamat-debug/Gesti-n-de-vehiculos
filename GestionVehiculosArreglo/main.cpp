#include <iostream>
#include "Vehiculo.h"
#include "VehiculoElectrico.h"
#include "VehiculoFamiliar.h"
#include"Aparcamiento.h"
#include<memory>
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
        std::shared_ptr<Vehiculo> vehiculo1 = std::make_shared<VehiculoElectrico>("Volvo", "EX 60",30);
        std::shared_ptr<Vehiculo>vehiculo2 = std::make_shared<VehiculoFamiliar>("Volskwaguen", "Passant Variant",50);

        //Mostrar el contenido
        std::cout << *vehiculo1;
        std::cout << *vehiculo2;


        VehiculoElectrico m1("Toyota","M-90",30);
        //Sobrecarga ++
        std::cout<<"---------------------------------------------------"<<std::endl;
        std::cout<<"Antes de la sobrecarga de ++: "<<std::endl;
        std::cout<<"---------------------------------------------------"<<std::endl;
        std::cout << m1;
        std::cout<<"---------------------------------------------------"<<std::endl;
        std::cout<<"Despues de la sobrecarga de ++: "<<std::endl;
        std::cout<<"---------------------------------------------------"<<std::endl;
        std::cout << ++m1;

        //Lanzamiento de excepcion
        try {
            std::cout << "Intentando viaje largo...\n";
            vehiculo1->ConsumirEnergia(100); // Esto lanzará una excepción
        } catch (const std::exception& e) {
            std::cout << "ALERTA: " << e.what() << " El vehiculo no puede realizar el viaje." << std::endl;
            std::cout <<"Sigue en linea"<<std::endl;
        }

        //Aparcamiento:
        Aparcamiento<std::shared_ptr<Vehiculo>>A1(vehiculo1,vehiculo2);


        return 0;

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}