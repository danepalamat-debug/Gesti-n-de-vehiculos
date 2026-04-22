//
// Created by danep on 22/04/2026.
//

#ifndef GESTIONVEHICULOSARREGLO_VEHICULO_H
#define GESTIONVEHICULOSARREGLO_VEHICULO_H
#include<string>
#include<iostream>

class Vehiculo {
private:
    std::string modelo;
    std::string marca;
protected:
    int nivel;
public:
    Vehiculo(std::string m,std::string x,int n);
    //Clase virtual pura:
    virtual double calcularAutonomia() = 0;
    //Destructor:
    ~Vehiculo();

    //Gets y sets:
    std::string getModelo();
    std::string getMarca();
    void setModelo(std::string m);
    void setMarca(std::string m);



    //Sobrecarga: <<
    virtual  std::ostream  print (std::ostream & os);

    friend std::ostream& operator<<(std::ostream &os,const Vehiculo&v )
    {
        return v.print(os);
    }



    //Lanzamiento de excepcion:
    void ConsumirEnergia(int cantidad);






};


#endif //GESTIONVEHICULOSARREGLO_VEHICULO_H