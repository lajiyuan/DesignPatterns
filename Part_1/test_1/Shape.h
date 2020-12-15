//
// Created by biubiubiu on 2020/12/16.
//

#ifndef DESIGBPATTERNS_SHAPE_H
#define DESIGBPATTERNS_SHAPE_H

class Point {
public:
    int x;
    int y;
};

class Line {
public:
    Point start;
    Point end;
};

class Rec {
public:
    Point leftUp;
    int width;
    int heigth;

    Rec(const Point &leftUp, int width, int height) {
        this->leftUp = leftUp;
        this->width = width;
        this->heigth = height;
    }
};

#endif //DESIGBPATTERNS_SHAPE_H
