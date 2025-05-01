#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
struct ChunkPerformanceData;
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
    // member functions
    // NOLINTBEGIN
    MCNAPI void sendPerformanceTelemetry(::Bedrock::NonOwnerPointer<::ChunkPerformanceData> chunkPerformanceData);
    // NOLINTEND
};
