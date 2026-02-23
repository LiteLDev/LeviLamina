#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/level/chunk/AverageTracker.h"
#include "mc/world/level/chunk/RollingAverageTracker.h"

struct ServerPerformanceData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::AverageTracker>                     mServerMainLoopTime;
    ::ll::TypedStorage<8, 48, ::AverageTracker>                     mServerUpdateTime;
    ::ll::TypedStorage<8, 48, ::AverageTracker>                     mServerGameTickTime;
    ::ll::TypedStorage<8, 48, ::AverageTracker>                     mServerRealtimeTickTime;
    ::ll::TypedStorage<8, 48, ::AverageTracker>                     mServerNetworkHandlingTime;
    ::ll::TypedStorage<8, 48, ::AverageTracker>                     mSubChunkRequestNetworkHandlingTime;
    ::ll::TypedStorage<8, 48, ::AverageTracker>                     mBlobCacheNetworkHandlingTime;
    ::ll::TypedStorage<8, 16, ::std::map<uint64, ::AverageTracker>> mNetworkChunkPublisherTime;
    ::ll::TypedStorage<8, 48, ::AverageTracker>                     mCoroutineTime;
    ::ll::TypedStorage<8, 184, ::RollingAverageTracker>             mServerLevelTickTime;
    ::ll::TypedStorage<8, 184, ::RollingAverageTracker>             mServerScriptTickTime;
    ::ll::TypedStorage<8, 184, ::RollingAverageTracker>             mServerScriptJobTime;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerPerformanceData() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerPerformanceData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
