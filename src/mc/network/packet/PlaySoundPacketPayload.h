#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/audio/ServerSoundHandle.h"
#include "mc/world/level/BlockPos.h"

struct PlaySoundPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                        mName;
    ::ll::TypedStorage<4, 12, ::BlockPos>                           mPos;
    ::ll::TypedStorage<4, 4, float>                                 mVolume;
    ::ll::TypedStorage<4, 4, float>                                 mPitch;
    ::ll::TypedStorage<4, 4, int>                                   mLoopCount;
    ::ll::TypedStorage<8, 16, ::std::optional<::ServerSoundHandle>> mServerSoundHandle;
    // NOLINTEND
};
