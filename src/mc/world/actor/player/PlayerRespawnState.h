#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PlayerRespawnState : char {
    SearchingForSpawn  = 0x0,
    ReadyToSpawn       = 0x1,
    ClientReadyToSpawn = 0x2,
};
