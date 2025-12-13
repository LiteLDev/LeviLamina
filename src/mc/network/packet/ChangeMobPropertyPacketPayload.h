#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChangeMobPropertyPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2adc0c;
    ::ll::UntypedStorage<1, 1>  mUnkef2316;
    ::ll::UntypedStorage<4, 4>  mUnk2d2e1e;
    ::ll::UntypedStorage<4, 4>  mUnka31ae5;
    ::ll::UntypedStorage<8, 32> mUnk4406ae;
    ::ll::UntypedStorage<8, 8>  mUnk92518a;
    // NOLINTEND

public:
    // prevent constructor by default
    ChangeMobPropertyPacketPayload& operator=(ChangeMobPropertyPacketPayload const&);
    ChangeMobPropertyPacketPayload(ChangeMobPropertyPacketPayload const&);
    ChangeMobPropertyPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ChangeMobPropertyPacketPayload& operator=(::ChangeMobPropertyPacketPayload&&);

    MCNAPI ~ChangeMobPropertyPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
