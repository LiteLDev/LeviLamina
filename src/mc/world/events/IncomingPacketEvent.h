#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IncomingPacketEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk64e26d;
    ::ll::UntypedStorage<4, 4>  mUnk9833b3;
    ::ll::UntypedStorage<8, 8>  mUnk4b88af;
    // NOLINTEND

public:
    // prevent constructor by default
    IncomingPacketEvent& operator=(IncomingPacketEvent const&);
    IncomingPacketEvent(IncomingPacketEvent const&);
    IncomingPacketEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~IncomingPacketEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
