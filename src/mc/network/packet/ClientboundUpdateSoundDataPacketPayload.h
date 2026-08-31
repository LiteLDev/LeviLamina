#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/audio/ServerSoundHandle.h"
#include "mc/network/packet/SoundDataEvent.h"

struct ClientboundUpdateSoundDataPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ServerSoundHandle> mServerSoundHandle;
    ::ll::TypedStorage<4, 4, ::SoundDataEvent>    mSoundEvent;
    // NOLINTEND
};
