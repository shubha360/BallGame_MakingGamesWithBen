#pragma once

#include <Bengine/SpriteBatch.h>
#include <Bengine/GLSLProgram.h>

#include "Ball.h"

// Ball renderer interface
class BallRenderer {
public:
    void renderBall(Bengine::SpriteBatch& spriteBatch, Ball& ball);
};

