//
// Created by bazyli on 1/12/18.
//

#ifndef ABSTRABIRD_IINTERSECTS_H
#define ABSTRABIRD_IINTERSECTS_H


#include "Obstacle.h"
#include "Floor.h"

class IIntersects {

public:
    virtual bool intersects ( const Obstacle& obstacle   ) = 0;

    virtual bool intersects ( const Floor& floor ) = 0;


};


#endif //ABSTRABIRD_IINTERSECTS_H
