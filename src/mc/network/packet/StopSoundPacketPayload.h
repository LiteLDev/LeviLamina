#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StopSoundPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<1, 1, bool>           mStopAll;
    ::ll::TypedStorage<1, 1, bool>           mStopMusicLegacy;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~StopSoundPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
