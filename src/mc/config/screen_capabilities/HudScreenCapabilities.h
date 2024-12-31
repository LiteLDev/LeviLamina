#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

struct HudScreenCapabilities : public ::TypedScreenCapabilities<::HudScreenCapabilities> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkd6a05d;
    // NOLINTEND

public:
    // prevent constructor by default
    HudScreenCapabilities& operator=(HudScreenCapabilities const&);
    HudScreenCapabilities(HudScreenCapabilities const&);
    HudScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HudScreenCapabilities() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
