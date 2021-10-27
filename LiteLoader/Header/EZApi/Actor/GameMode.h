#pragma once

#include "../dll.h"
#include "Player.h"

class GameMode {
public:
    Player* player;

    virtual ~GameMode() = delete;
};