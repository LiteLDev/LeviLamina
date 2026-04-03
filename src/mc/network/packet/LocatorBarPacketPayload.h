#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct LocatorBarWaypointPayload;
// clang-format on

struct LocatorBarPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::LocatorBarWaypointPayload>> mWaypoints;
    // NOLINTEND

public:
    // prevent constructor by default
    LocatorBarPacketPayload& operator=(LocatorBarPacketPayload const&);
    LocatorBarPacketPayload(LocatorBarPacketPayload const&);
    LocatorBarPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::LocatorBarPacketPayload& operator=(::LocatorBarPacketPayload&&);

    MCAPI ~LocatorBarPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
