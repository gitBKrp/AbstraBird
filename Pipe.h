//
// Created by bazyli on 1/9/18.
//

#ifndef ABSTRABIRD_PIPE_H
#define ABSTRABIRD_PIPE_H


#include "IDrawable.h"
#include "IUpdate.h"

class Pipe : IDrawable {

    const int Height;

    const int Width;

    int x;
    int y;

public:

    void Draw() override;

    const int getWidth() const;

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

    const int getHeight() const;

    void Move(int dx, int dy);
};


#endif //ABSTRABIRD_PIPE_H