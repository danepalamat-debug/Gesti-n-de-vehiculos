cmake_minimum_required(VERSION 4.1)
project(GestionVehiculosArreglo)

set(CMAKE_CXX_STANDARD 20)

add_executable(GestionVehiculosArreglo main.cpp
        Vehiculo.cpp
        Vehiculo.h
        VehiculoElectrico.cpp
        VehiculoElectrico.h
        VehiculoFamiliar.cpp
        VehiculoFamiliar.h
        Aparcamiento.cpp
        Aparcamiento.h)
