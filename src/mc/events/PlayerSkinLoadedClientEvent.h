#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerSkinLoadedClientEvent {
public:
    // prevent constructor by default
    PlayerSkinLoadedClientEvent& operator=(PlayerSkinLoadedClientEvent const&);
    PlayerSkinLoadedClientEvent(PlayerSkinLoadedClientEvent const&);
    PlayerSkinLoadedClientEvent();
};
