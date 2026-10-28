#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/ChunkBlockPos.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/levelgen/structure/StructureBlockPalette.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CompoundTag;
class DataLoadHelper;
class NeighborChangedQueue;
// clang-format on

class StructureNeighborChangedQueueRestorer {
public:
    // StructureNeighborChangedQueueRestorer inner types declare
    // clang-format off
    struct PendingRecord;
    struct QueueData;
    // clang-format on

    // StructureNeighborChangedQueueRestorer inner types define
    struct PendingRecord {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::NeighborChangedQueue*> mQueue;
        ::ll::TypedStorage<8, 8, ::CompoundTag const*>    mPayload;
        ::ll::TypedStorage<2, 4, ::ChunkBlockPos>         mNotifiedPos;
        ::ll::TypedStorage<8, 8, int64>                   mSequence;
        // NOLINTEND
    };

    struct QueueData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::NeighborChangedQueue*> mQueue;
        ::ll::TypedStorage<2, 2, short>                   mChunkMinHeight;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::StructureNeighborChangedQueueRestorer::QueueData>>
                                                                                                     mQueues;
    ::ll::TypedStorage<8, 24, ::std::vector<::StructureNeighborChangedQueueRestorer::PendingRecord>> mPendingRecords;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void enqueueStagedRecords(::DataLoadHelper& dataLoadHelper, ::Rotation rotation, ::Mirror mirror);

    MCAPI void stageCapturedRecords(
        ::BlockPos const&                                 notifiedPos,
        ::StructureBlockPalette::BlockPositionData const& blockPositionData
    );

    MCAPI ~StructureNeighborChangedQueueRestorer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
