#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class Level;
class LevelChunk;
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
        MCAPI void $dtor();
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
    ::ll::UntypedStorage<8, 24> mUnkabdde0;
    ::ll::UntypedStorage<8, 16> mUnkab762c;
    ::ll::UntypedStorage<8, 8>  mUnka27232;
    ::ll::UntypedStorage<8, 8>  mUnk6f3d66;
    ::ll::UntypedStorage<8, 8>  mUnk197f33;
    ::ll::UntypedStorage<1, 1>  mUnk29689d;
    ::ll::UntypedStorage<1, 1>  mUnk24c890;
    ::ll::UntypedStorage<8, 8>  mUnk54538a;
    ::ll::UntypedStorage<8, 8>  mUnk37df14;
    ::ll::UntypedStorage<8, 80> mUnk61763f;
    ::ll::UntypedStorage<4, 4>  mUnk5640e9;
    ::ll::UntypedStorage<8, 8>  mUnkdc3e70;
    ::ll::UntypedStorage<8, 8>  mUnkc87e17;
    ::ll::UntypedStorage<8, 8>  mUnk4b6b98;
    ::ll::UntypedStorage<8, 8>  mUnk59e21c;
    ::ll::UntypedStorage<8, 8>  mUnk2551a0;
    ::ll::UntypedStorage<8, 8>  mUnk206346;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkRecyclerTelemetryData& operator=(ChunkRecyclerTelemetryData const&);
    ChunkRecyclerTelemetryData(ChunkRecyclerTelemetryData const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChunkRecyclerTelemetryData() /*override*/;
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

    MCAPI void startLevel(::Level const& level);

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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
