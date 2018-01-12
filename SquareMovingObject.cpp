//
// Created by bazyli on 1/12/18.
//





#include "SquareMovingObject.h"

SquareMovingObject::SquareMovingObject(int x, int y, int h, int w, double xSpd, double ySpd) :
        xSpeed(xSpd),ySpeed(ySpd)
{

    this->x = static_cast<double > (x);

    this->y = static_cast<double > (y);

    rect.x = x;
    rect.y = y;
    rect.h = h;
    rect.w = w;

}


void SquareMovingObject::Update( const double deltaTime ) {

    double c = Game::speedConst;

    y += ySpeed * deltaTime * c;
    x += xSpeed * deltaTime * c;

    //  if ( x + rect.w < Window::Width && x >=0  )
    // {

    rect.x = x;

    // }


    //  if ( y + rect.h <= Window::Height && y >=0 )
    // {

    rect.y = y;
    // }

}

bool SquareMovingObject::Intersects(const SquareMovingObject& o2) const {
    return SDL_HasIntersection( &this->rect, &o2.rect );
}



double SquareMovingObject::getX() const {
    return x;
}

void SquareMovingObject::setX(double x) {
    SquareMovingObject::x = x;
}

double SquareMovingObject::getY() const {
    return y;
}

void SquareMovingObject::setY(double y) {
    SquareMovingObject::y = y;
}

const SDL_Rect &SquareMovingObject::getRect() const {
    return rect;
}


double SquareMovingObject::getXSpeed() const {
    return xSpeed;
}

void SquareMovingObject::setXSpeed(double xSpeed) {
    SquareMovingObject::xSpeed = xSpeed;
}

double SquareMovingObject::getYSpeed() const {
    return ySpeed;
}

void SquareMovingObject::setYSpeed(double ySpd) {


    SquareMovingObject::ySpeed = ySpd;

}

void SquareMovingObject::SetRectX(int x ) {

    this->rect.x = x;
}

void SquareMovingObject::SetRectY(int y) {
    this->rect.y=y;
}

void SquareMovingObject::SetRectH(int h) {

        this->rect.h = h;
}

void SquareMovingObject::SetRectW(int w) {
    this->rect.w = w;
}

