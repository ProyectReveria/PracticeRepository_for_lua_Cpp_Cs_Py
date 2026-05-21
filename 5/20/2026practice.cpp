#include <iostream> 

/*
Hoy no tenia ganas de hacer mucho vengo de modelar en Blender.

    Pedirle al usuario la velocidad a la que va un coche (un número entero).

    Si la velocidad es mayor a 120, debe mostrar el mensaje: "¡Multa por exceso de velocidad!".

    Si la velocidad es menor o igual a 120, debe mostrar: "Velocidad correcta. Buen viaje.".
    */

int main(){
    std::int64_t speed; 
    std::cout << "a cuanta velocidad va el auto" <<std::endl; 
    std::cin >> speed; 

    if (speed >= 120) {
        std::cout<<"Esceso de velocidad"; 

    }else if (speed <= 120){
        std::cout<<"Velocidad correcta"; 
    }
    return 0;
}