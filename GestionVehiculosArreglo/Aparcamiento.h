//
// Created by danep on 22/04/2026.
//
#ifndef EJERCICIOGESTIONVEHICULOS_APARCAMIENTO_H
#define EJERCICIOGESTIONVEHICULOS_APARCAMIENTO_H
#include<vector>
#include<ostream>
template<class T>
class Aparcamiento {
private:
    T plaza1;
    T plaza2;

public:
    Aparcamiento(T plaza1,T plaza2):plaza1(plaza1),plaza2(plaza2) {
    }




    auto getPlaza1() {
        return plaza1;
    }
    auto getPlaza2() {
        return plaza2;
    }
    void setPlaza1(T plaza1) {
        plaza1 = plaza1;
    }

    void setPlaza2(T plaza2) {
        plaza2 = plaza2;
    }


};


#endif //EJERCICIOGESTIONVEHICULOS_APARCAMIENTO_H