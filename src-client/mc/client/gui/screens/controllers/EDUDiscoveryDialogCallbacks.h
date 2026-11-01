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
    MCNAPI ~EduDiscoveryDialogCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
