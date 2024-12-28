#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

struct LibraryScreenCapabilities : public ::TypedScreenCapabilities<::LibraryScreenCapabilities> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk127e67;
    ::ll::UntypedStorage<1, 1>  mUnkddf326;
    ::ll::UntypedStorage<1, 1>  mUnk9285e2;
    ::ll::UntypedStorage<1, 1>  mUnk680c44;
    ::ll::UntypedStorage<1, 1>  mUnk7c9d7d;
    ::ll::UntypedStorage<8, 32> mUnk534eb4;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryScreenCapabilities& operator=(LibraryScreenCapabilities const&);
    LibraryScreenCapabilities(LibraryScreenCapabilities const&);
    LibraryScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LibraryScreenCapabilities() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
