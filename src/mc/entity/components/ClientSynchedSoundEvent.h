#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/LevelSoundEventPacketPayload.h"

struct ClientSynchedSoundEvent : public ::LevelSoundEventPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mTickDelay;
    // NOLINTEND
};
