#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

struct EDUServersScreenCapabilities : public ::TypedScreenCapabilities<::EDUServersScreenCapabilities> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk3d38b2;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUServersScreenCapabilities& operator=(EDUServersScreenCapabilities const&);
    EDUServersScreenCapabilities(EDUServersScreenCapabilities const&);
    EDUServersScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EDUServersScreenCapabilities() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
