#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EDUDiscoveryDialogCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mToIpEntry;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mToJoincodeEntry;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUDiscoveryDialogCallbacks& operator=(EDUDiscoveryDialogCallbacks const&);
    EDUDiscoveryDialogCallbacks(EDUDiscoveryDialogCallbacks const&);
    EDUDiscoveryDialogCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EDUDiscoveryDialogCallbacks(::EDUDiscoveryDialogCallbacks&&);

    MCAPI ~EDUDiscoveryDialogCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::EDUDiscoveryDialogCallbacks&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
