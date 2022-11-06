#include "matriz.h"
#include <iostream>

void Matriz::printMatriz() {
    std::cout << "Largura da Matriz: "<< largura << std::endl;
    std::cout << "Altura da Matriz: "<< altura << std::endl;
    std::cout << "Número de Bombas da Matriz: "<< numBombas << std::endl;
}