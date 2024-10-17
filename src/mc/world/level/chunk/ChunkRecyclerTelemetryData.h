#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class ChunkRecyclerTelemetryData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ChunkRecyclerTelemetryData inner types declare
    // clang-format off
    struct BucketContext;
    class TaskInfo;
    // clang-format on

    // ChunkRecyclerTelemetryData inner types define
    struct BucketContext {
    public:
        // prevent constructor by default
        BucketContext(BucketContext const&);
        BucketContext();

    public:
        // NOLINTBEGIN
        MCAPI struct ChunkRecyclerTelemetryData::BucketContext&
        operator=(struct ChunkRecyclerTelemetryData::BucketContext const&);

        MCAPI ~BucketContext();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

    class TaskInfo {
    public:
        // prevent constructor by default
        TaskInfo& operator=(TaskInfo const&);
        TaskInfo(TaskInfo const&);
        TaskInfo();
    };

public:
    // prevent constructor by default
    ChunkRecyclerTelemetryData& operator=(ChunkRecyclerTelemetryData const&);
    ChunkRecyclerTelemetryData(ChunkRecyclerTelemetryData const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChunkRecyclerTelemetryData() = default;

    MCAPI ChunkRecyclerTelemetryData();

    MCAPI void endLevel(class Level& level);

    MCAPI void recordCacheCheck(class LevelChunk const& lc);

    MCAPI void recordChunkDeleted(class LevelChunk const& lc);

    MCAPI void
    recordTaskCompleted(class LevelChunk const& lc, class ChunkRecyclerTelemetryData::TaskInfo const& taskInfo);

    MCAPI void startLevel(class Level const& level);

    MCAPI void tickLevel(class Level const& level);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _reset();

    MCAPI void _setIsLocked();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    // NOLINTEND
};
