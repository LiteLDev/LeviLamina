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
    // prevent constructor by default
    StopSoundPacketPayload(StopSoundPacketPayload const&);
    StopSoundPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::StopSoundPacketPayload& operator=(::StopSoundPacketPayload&&);

    MCFOLD ::StopSoundPacketPayload& operator=(::StopSoundPacketPayload const&);

    MCAPI ~StopSoundPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
