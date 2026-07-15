#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
// clang-format on

class LevelChunkPerformanceTelemetry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>    mEventing;
    ::ll::TypedStorage<4, 4, uint const>               mServerTickRange;
    ::ll::TypedStorage<1, 1, bool const>               mIsClientSide;
    ::ll::TypedStorage<8, 8, uint64>                   mPerformanceTelemetryTimer;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mTelemetryPeriodicCallback;
    ::ll::TypedStorage<1, 1, bool>                     mPerformanceTelemetryFired;
    ::ll::TypedStorage<1, 1, bool>                     mShouldTick;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkPerformanceTelemetry& operator=(LevelChunkPerformanceTelemetry const&);
    LevelChunkPerformanceTelemetry(LevelChunkPerformanceTelemetry const&);
    LevelChunkPerformanceTelemetry();
};
