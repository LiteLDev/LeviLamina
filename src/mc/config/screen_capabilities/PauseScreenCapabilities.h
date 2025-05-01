#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

struct PauseScreenCapabilities : public ::TypedScreenCapabilities<::PauseScreenCapabilities> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk28e16e;
    ::ll::UntypedStorage<1, 1>  mUnkace38a;
    ::ll::UntypedStorage<1, 1>  mUnk12ffaf;
    ::ll::UntypedStorage<1, 1>  mUnk8cf950;
    ::ll::UntypedStorage<1, 1>  mUnk972427;
    ::ll::UntypedStorage<8, 32> mUnk36e250;
    ::ll::UntypedStorage<1, 1>  mUnkc36dc1;
    // NOLINTEND

public:
    // prevent constructor by default
    PauseScreenCapabilities& operator=(PauseScreenCapabilities const&);
    PauseScreenCapabilities(PauseScreenCapabilities const&);
    PauseScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PauseScreenCapabilities() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
