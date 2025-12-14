#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/level/chunk/AtomicTimeAccumulator.h"

struct SubChunkRequestTrackingData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>       mRequestsMadeCount;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>       mRequestsTooFar;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>       mRequestsInFlightCount;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>       mRequestsReceivedByServerCount;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>       mRequestBatchesReceivedByServerCount;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>       mResponseReceivedByClientCount;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>       mResponseBatchesReceivedByClientCount;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>       mClientSubChunksBeingProcessed;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>       mClientSubChunksFinished;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>       mClientSubChunksDiscarded;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>       mClientSubChunkTimeOut;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>       mClientSubChunksReusedFromCache;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>       mClientSubChunksWaitingForCache;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>       mClientSubChunksCacheAbort;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>       mClientSubChunksNotProcessed;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>       mClientInsertManagerLevelChunkDoesntExist;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>       mSubChunkResponseSuccess;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>       mSubChunkResponseSuccessAllAir;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>       mSubChunkLevelChunkDoesntExist;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>       mSubChunkServerWrongDimension;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>       mSubChunkClientWrongDimension;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>       mSubChunkPlayerDoesnExist;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>       mSubChunkIndexOutOfBounds;
    ::ll::TypedStorage<8, 24, ::AtomicTimeAccumulator> mClientSubChunkProcessingTime;
    ::ll::TypedStorage<8, 24, ::AtomicTimeAccumulator> mClientSubChunkInsertTime;
    ::ll::TypedStorage<8, 24, ::AtomicTimeAccumulator> mClientSubChunkDeserializeBlocksTime;
    ::ll::TypedStorage<8, 24, ::AtomicTimeAccumulator> mClientSubChunkDeserializeBlockEntitiesTime;
    ::ll::TypedStorage<8, 24, ::AtomicTimeAccumulator> mClientSubChunkHeightmapFixupTime;
    ::ll::TypedStorage<8, 24, ::AtomicTimeAccumulator> mClientSubChunkLightingTime;
    ::ll::TypedStorage<8, 24, ::AtomicTimeAccumulator> mClientSubChunkFinalizeTime;
    ::ll::TypedStorage<8, 24, ::AtomicTimeAccumulator> mClientSubChunkCacheCheckTime;
    ::ll::TypedStorage<8, 24, ::AtomicTimeAccumulator> mClientSubChunkCacheMissWaitTime;
    ::ll::TypedStorage<8, 24, ::AtomicTimeAccumulator> mRequestToResponseTime;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>       mInFlightTasks;
    ::ll::TypedStorage<8, 8, uint64>                   mMaxTasksInFlightAllowed;
    ::ll::TypedStorage<8, 8, uint64>                   mTaskQueueSize;
    ::ll::TypedStorage<8, 8, uint64>                   mTaskGroupCount;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SubChunkRequestTrackingData() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C SubChunkRequestTrackingData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
