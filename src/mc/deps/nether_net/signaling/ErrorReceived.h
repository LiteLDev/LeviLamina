#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::SignalingEvents {

struct ErrorReceived {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke2adac;
    ::ll::UntypedStorage<4, 4>  mUnkfca5f7;
    ::ll::UntypedStorage<8, 32> mUnk262c40;
    // NOLINTEND

public:
    // prevent constructor by default
    ErrorReceived& operator=(ErrorReceived const&);
    ErrorReceived(ErrorReceived const&);
    ErrorReceived();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ErrorReceived();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace NetherNet::SignalingEvents
