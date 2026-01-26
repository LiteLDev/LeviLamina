#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class Level;
class LevelChunk;
// clang-format on

class ChunkRecyclerTelemetryData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ChunkRecyclerTelemetryData inner types declare
    // clang-format off
    class TaskInfo;
    class TimeAccumulator;
    struct BucketContext;
    struct ChunkData;
    // clang-format on

    // ChunkRecyclerTelemetryData inner types define
    enum class Bucket : int {
        GenTimeSavedByCacheSize100   = 0,
        GenTimeSavedByCacheSize250   = 1,
        GenTimeSavedByCacheSize500   = 2,
        GenTimeSavedByCacheSize1000  = 3,
        GenTimeSavedByCacheSize2000  = 4,
        GenTimeSavedByCacheSize5000  = 5,
        GenTimeSavedByCacheSize10000 = 6,
        GenTimeSavedByCacheSize20000 = 7,
        GenTimeSavedByCacheSize50000 = 8,
        GenTimeSavedByCacheSizeINF   = 9,
        Count                        = 10,
    };

    class TaskInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mTimeStart;
        // NOLINTEND
    };

    class TimeAccumulator {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64> mNanoseconds;
        // NOLINTEND
    };

    struct BucketContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::ChunkRecyclerTelemetryData::Bucket>          mBucket;
        ::ll::TypedStorage<8, 32, ::std::string>                                mName;
        ::ll::TypedStorage<8, 8, ::ChunkRecyclerTelemetryData::TimeAccumulator> mTimeAccumulator;
        ::ll::TypedStorage<8, 64, ::std::function<bool(int64)>>                 isInRangeInclusive;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD_S void $dtor();
        // NOLINTEND
    };

    struct ChunkData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ChunkRecyclerTelemetryData::TimeAccumulator> mTimeAccumulator;
        ::ll::TypedStorage<8, 8, int64>                                         mSequence;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ChunkRecyclerTelemetryData::BucketContext>>      mTimeBuckets;
    ::ll::TypedStorage<8, 16, ::std::map<::ChunkPos, ::ChunkRecyclerTelemetryData::ChunkData>> mChunkCache;
    ::ll::TypedStorage<8, 8, ::ChunkRecyclerTelemetryData::TimeAccumulator>                    mTotalTime;
    ::ll::TypedStorage<8, 8, uint64>                                                           mDeletedChunks;
    ::ll::TypedStorage<8, 8, uint64>                                                           mGeneratedChunks;
    ::ll::TypedStorage<1, 1, bool>                                                             mIsLocked;
    ::ll::TypedStorage<1, 1, bool>                                                             mIsLevelStarted;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                          mLevelStartTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                                       mDuration;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                                     mMutex;
    ::ll::TypedStorage<4, 4, int>                                                              mCurrentTick;
    ::ll::TypedStorage<8, 8, uint64>                                                           mOuterUpdateCount;
    ::ll::TypedStorage<8, 8, uint64>                                                           mInnerUpdateCount;
    ::ll::TypedStorage<8, 8, uint64>                                                           mChunkRadiusSum;
    ::ll::TypedStorage<8, 8, uint64>                                                           mOverworldPlayerSum;
    ::ll::TypedStorage<8, 8, uint64>                                                           mMaximumOverworldPlayers;
    ::ll::TypedStorage<8, 8, uint64> mActiveOverworldChunksSum;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ChunkRecyclerTelemetryData() /*override*/;
#else // LL_PLAT_C
    virtual ~ChunkRecyclerTelemetryData() /*override*/ = default;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _reset();

    MCAPI void _setIsLocked();

    MCAPI void endLevel(::Level& level);

    MCAPI void recordCacheCheck(::LevelChunk const& lc);

    MCAPI void recordTaskCompleted(::LevelChunk const& lc, ::ChunkRecyclerTelemetryData::TaskInfo const& taskInfo);

    MCAPI void tickLevel(::Level const& level);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_S void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
