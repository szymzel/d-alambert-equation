#include "raylib.h"
#include "board.h"
#include <vector>

Board::Board(int grid_width, int grid_height) : 
grid_width(grid_width), grid_height(grid_height), 
grid(this->grid_height * this->grid_width, 0.0f) {}

int Board::GetWidth() const{
    return this->grid_width;
}

int Board::GetHeight() const{
    return this->grid_height;
}

int Board::GetIndex(int x, int y) const{
    if (x < 0 || x > this->grid_width || y < 0 || y > this->grid_height){
        return 0;
    } else {
        return (y * this->grid_width) + x;
    }
}
