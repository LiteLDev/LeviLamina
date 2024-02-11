#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

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
        // symbol: ??4BucketContext@ChunkRecyclerTelemetryData@@QEAAAEAU01@AEBU01@@Z
        MCAPI struct ChunkRecyclerTelemetryData::BucketContext&
        operator=(struct ChunkRecyclerTelemetryData::BucketContext const&);

        // symbol: ??1BucketContext@ChunkRecyclerTelemetryData@@QEAA@XZ
        MCAPI ~BucketContext();

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
    // vIndex: 0, symbol: __gen_??1ChunkRecyclerTelemetryData@@UEAA@XZ
    virtual ~ChunkRecyclerTelemetryData() = default;

    // symbol: ??0ChunkRecyclerTelemetryData@@QEAA@XZ
    MCAPI ChunkRecyclerTelemetryData();

    // symbol: ?endLevel@ChunkRecyclerTelemetryData@@QEAAXAEAVLevel@@@Z
    MCAPI void endLevel(class Level& level);

    // symbol: ?recordCacheCheck@ChunkRecyclerTelemetryData@@QEAAXAEBVLevelChunk@@@Z
    MCAPI void recordCacheCheck(class LevelChunk const& lc);

    // symbol: ?recordChunkDeleted@ChunkRecyclerTelemetryData@@QEAAXAEBVLevelChunk@@@Z
    MCAPI void recordChunkDeleted(class LevelChunk const& lc);

    // symbol: ?recordTaskCompleted@ChunkRecyclerTelemetryData@@QEAAXAEBVLevelChunk@@AEBVTaskInfo@1@@Z
    MCAPI void recordTaskCompleted(class LevelChunk const& lc, class ChunkRecyclerTelemetryData::TaskInfo const&);

    // symbol: ?startLevel@ChunkRecyclerTelemetryData@@QEAAXAEBVLevel@@@Z
    MCAPI void startLevel(class Level const& level);

    // symbol: ?tickLevel@ChunkRecyclerTelemetryData@@QEAAXAEBVLevel@@@Z
    MCAPI void tickLevel(class Level const& level);

    // symbol: ?taskStarted@ChunkRecyclerTelemetryData@@SA?AVTaskInfo@1@XZ
    MCAPI static class ChunkRecyclerTelemetryData::TaskInfo taskStarted();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_reset@ChunkRecyclerTelemetryData@@AEAAXXZ
    MCAPI void _reset();

    // symbol: ?_setIsLocked@ChunkRecyclerTelemetryData@@AEAAXXZ
    MCAPI void _setIsLocked();

    // NOLINTEND
};
