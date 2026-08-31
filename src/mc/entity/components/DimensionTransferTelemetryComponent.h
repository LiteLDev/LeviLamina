#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/DimensionType.h"

struct DimensionTransferTelemetryComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DimensionType>                         mFromId;
    ::ll::TypedStorage<4, 4, ::DimensionType>                         mToId;
    ::ll::TypedStorage<8, 32, ::std::string>                          mPackId;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mStartTime;
    // NOLINTEND
};
