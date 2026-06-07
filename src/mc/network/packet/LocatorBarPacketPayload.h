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
};
