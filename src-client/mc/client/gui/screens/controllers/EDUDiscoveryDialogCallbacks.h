#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EduDiscoveryDialogCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mToIpEntry;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mToJoincodeEntry;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~EduDiscoveryDialogCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
