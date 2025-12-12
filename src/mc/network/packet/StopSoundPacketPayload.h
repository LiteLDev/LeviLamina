#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StopSoundPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke75bb6;
    ::ll::UntypedStorage<1, 1>  mUnk958cc6;
    ::ll::UntypedStorage<1, 1>  mUnkda5e68;
    // NOLINTEND

public:
    // prevent constructor by default
    StopSoundPacketPayload& operator=(StopSoundPacketPayload const&);
    StopSoundPacketPayload(StopSoundPacketPayload const&);
    StopSoundPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::StopSoundPacketPayload& operator=(::StopSoundPacketPayload&&);

    MCNAPI ~StopSoundPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
