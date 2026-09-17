#pragma once
#include "raylib.h"
#include <vector>

class Board{
    public:
        Board(int grid_width, int grid_height);
        int GetWidth() const;
        int GetHeight()  const;
        int GetIndex(int x, int y) const;
    private:
        int grid_width;
        int grid_height;
        std::vector<float> grid;
};