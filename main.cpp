#include "raylib.h"
#include "board.h"
#include <iostream>

int main(){
    Board tablica = Board(100,100);
    std::cout << tablica.GetIndex(1,2) << std::endl;




}