#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

struct ActiveDirectoryScreenCapabilities : public ::TypedScreenCapabilities<::ActiveDirectoryScreenCapabilities> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3c0f13;
    ::ll::UntypedStorage<8, 32> mUnke090f0;
    // NOLINTEND

public:
    // prevent constructor by default
    ActiveDirectoryScreenCapabilities& operator=(ActiveDirectoryScreenCapabilities const&);
    ActiveDirectoryScreenCapabilities(ActiveDirectoryScreenCapabilities const&);
    ActiveDirectoryScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActiveDirectoryScreenCapabilities() /*override*/;
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
