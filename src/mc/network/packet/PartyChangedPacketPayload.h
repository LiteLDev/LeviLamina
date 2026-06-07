#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/PlayerPartyInfo.h"

struct PartyChangedPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::std::optional<::PlayerPartyInfo>> mPartyInfo;
    // NOLINTEND
};
