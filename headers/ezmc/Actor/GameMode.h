#pragma once

#include "../dll.h"
#include "Player.h"

class GameMode {
public:
    Player* player;

    MCAPI virtual ~GameMode();
};