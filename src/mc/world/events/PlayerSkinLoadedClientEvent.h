#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerSkinLoadedClientEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk93c55e;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerSkinLoadedClientEvent& operator=(PlayerSkinLoadedClientEvent const&);
    PlayerSkinLoadedClientEvent(PlayerSkinLoadedClientEvent const&);
    PlayerSkinLoadedClientEvent();
};
