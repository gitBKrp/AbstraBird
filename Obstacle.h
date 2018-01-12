//
// Created by bazyli on 1/6/18.
//

#ifndef ABSTRABIRD_OBSTACLE_H
#define ABSTRABIRD_OBSTACLE_H


#include "Pipe.h"
#include "IUpdate.h"
#include "SquareMovingObject.h"

template <typename T , typename B >
class Obstacle {

    T top;
    B bot;


public:

    Obstacle( int WinWidth , int WinHeight ) : top(WinWidth) , bot(WinWidth) {


        top.setY ( WinHeight-top.getRect().h );

        top.setX( WinWidth );
        bot.setX( WinWidth );

        top.setXSpeed(-0.1);
        bot.setXSpeed(-0.1);


    }



    void Update( const double deltaTime )  {

        top.Update(deltaTime);
        bot.Update(deltaTime);

    }

    void Render ( SDL_Renderer* renderer){

        top.Render(renderer);
        bot.Render(renderer);
    }


};






#endif //ABSTRABIRD_OBSTACLE_H
