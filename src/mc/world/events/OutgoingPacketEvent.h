#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OutgoingPacketEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk2fb2ea;
    ::ll::UntypedStorage<4, 4>  mUnkf2d506;
    // NOLINTEND

public:
    // prevent constructor by default
    OutgoingPacketEvent& operator=(OutgoingPacketEvent const&);
    OutgoingPacketEvent(OutgoingPacketEvent const&);
    OutgoingPacketEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~OutgoingPacketEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
