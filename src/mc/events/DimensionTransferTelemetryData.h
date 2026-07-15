#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DimensionTransferTelemetryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>            mFromId;
    ::ll::TypedStorage<4, 4, int>            mToId;
    ::ll::TypedStorage<8, 32, ::std::string> mPackId;
    ::ll::TypedStorage<8, 8, int64>          mLoadTimeMs;
    // NOLINTEND
};
