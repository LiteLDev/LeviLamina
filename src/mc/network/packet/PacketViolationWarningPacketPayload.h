#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PacketViolationWarningPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk46bd65;
    ::ll::UntypedStorage<4, 4>  mUnkb40a21;
    ::ll::UntypedStorage<4, 4>  mUnk79d3b4;
    ::ll::UntypedStorage<8, 32> mUnk31c58f;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketViolationWarningPacketPayload& operator=(PacketViolationWarningPacketPayload const&);
    PacketViolationWarningPacketPayload(PacketViolationWarningPacketPayload const&);
    PacketViolationWarningPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::PacketViolationWarningPacketPayload& operator=(::PacketViolationWarningPacketPayload&&);

    MCNAPI ~PacketViolationWarningPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
