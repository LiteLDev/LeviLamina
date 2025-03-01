#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class Level;
class LevelChunk;
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class ChunkRecyclerTelemetryData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ChunkRecyclerTelemetryData inner types declare
    // clang-format off
    struct BucketContext;
    struct ChunkData;
    class TaskInfo;
    class TimeAccumulator;
    // clang-format on

    // ChunkRecyclerTelemetryData inner types define
    class TimeAccumulator {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnka03430;
        // NOLINTEND

    public:
        // prevent constructor by default
        TimeAccumulator& operator=(TimeAccumulator const&);
        TimeAccumulator(TimeAccumulator const&);
        TimeAccumulator();
    };

    struct ChunkData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkb7a81c;
        ::ll::UntypedStorage<8, 8> mUnk837b09;
        // NOLINTEND

    public:
        // prevent constructor by default
        ChunkData& operator=(ChunkData const&);
        ChunkData(ChunkData const&);
        ChunkData();
    };

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

    struct BucketContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnka0675b;
        ::ll::UntypedStorage<8, 32> mUnk249e04;
        ::ll::UntypedStorage<8, 8>  mUnkb37204;
        ::ll::UntypedStorage<8, 64> mUnk705d42;
        // NOLINTEND

    public:
        // prevent constructor by default
        BucketContext(BucketContext const&);
        BucketContext();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::ChunkRecyclerTelemetryData::BucketContext&
        operator=(::ChunkRecyclerTelemetryData::BucketContext const&);

        MCAPI ~BucketContext();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    class TaskInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk70ffe4;
        // NOLINTEND

    public:
        // prevent constructor by default
        TaskInfo& operator=(TaskInfo const&);
        TaskInfo(TaskInfo const&);
        TaskInfo();
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
    // vIndex: 0
    virtual ~ChunkRecyclerTelemetryData() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChunkRecyclerTelemetryData();

    MCAPI void _reset();

    MCAPI void _setIsLocked();

    MCAPI void endLevel(::Level& level);

    MCAPI void recordCacheCheck(::LevelChunk const& lc);

    MCAPI void recordChunkDeleted(::LevelChunk const& lc);

    MCAPI void recordTaskCompleted(::LevelChunk const& lc, ::ChunkRecyclerTelemetryData::TaskInfo const& taskInfo);

    MCAPI void tickLevel(::Level const& level);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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
