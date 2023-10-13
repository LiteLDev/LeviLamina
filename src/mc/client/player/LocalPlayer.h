#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/actor/player/Player.h"

class LocalPlayer : public ::Player {
public:
    // prevent constructor by default
    LocalPlayer& operator=(LocalPlayer const&);
    LocalPlayer(LocalPlayer const&);
    LocalPlayer();
};