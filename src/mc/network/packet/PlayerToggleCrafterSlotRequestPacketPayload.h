#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerToggleCrafterSlotRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk237615;
    ::ll::UntypedStorage<4, 4>  mUnk2dde60;
    ::ll::UntypedStorage<1, 1>  mUnk652897;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerToggleCrafterSlotRequestPacketPayload& operator=(PlayerToggleCrafterSlotRequestPacketPayload const&);
    PlayerToggleCrafterSlotRequestPacketPayload(PlayerToggleCrafterSlotRequestPacketPayload const&);
    PlayerToggleCrafterSlotRequestPacketPayload();
};
