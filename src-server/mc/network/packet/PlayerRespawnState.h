#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PlayerRespawnState : uchar {
    SearchingForSpawn = 0,
    ReadyToSpawn = 1,
    ClientReadyToSpawn = 2,
};
