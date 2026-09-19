#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/audio/ServerSoundHandle.h"
#include "mc/world/level/BlockPos.h"

struct RecordStartedPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>         mBlockPos;
    ::ll::TypedStorage<8, 8, ::ServerSoundHandle> mServerSoundHandle;
    // NOLINTEND
};
