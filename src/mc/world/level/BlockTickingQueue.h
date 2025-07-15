#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/TickNextTickData.h"

// auto generated inclusion list
#include "mc/deps/core/container/MovePriorityQueue.h"
#include "mc/world/level/Tick.h"
#include "mc/world/level/TickNextTickData.h"
#include "mc/world/level/TickingQueueType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockLegacy;
class BlockPalette;
class BlockPos;
class BlockSource;
class BoundingBox;
class CompoundTag;
class LevelChunk;
class ListTag;
struct TickDelayBlock;
// clang-format on

class BlockTickingQueue {
public:
    // BlockTickingQueue inner types declare
    // clang-format off
    class BlockTick;
    struct HashBlockTick;
    class TickDataSet;
    // clang-format on

    // BlockTickingQueue inner types define
    class BlockTick {
    public:
        [[nodiscard]] bool operator>(BlockTick const& other) const { return mData > other.mData; }

    public:
        // member variables
        // NOLINTBEGIN
        bool               mIsRemoved;
        ::TickNextTickData mData;
        // NOLINTEND
    };

    struct HashBlockTick {};

    class TickDataSet
    : public ::MovePriorityQueue<::BlockTickingQueue::BlockTick, ::std::greater<::BlockTickingQueue::BlockTick>> {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void _pruneQueueForMemory();

        MCAPI bool remove(::BlockPos const& pos, ::Block const& block);

        MCAPI ~TickDataSet();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LevelChunk*>                     mOwningChunk;
    ::ll::TypedStorage<8, 8, ::Tick>                            mCurrentTick;
    ::ll::TypedStorage<8, 24, ::BlockTickingQueue::TickDataSet> mNextTickQueue;
    ::ll::TypedStorage<8, 24, ::BlockTickingQueue::TickDataSet> mActiveTickQueue;
    ::ll::TypedStorage<8, 24, ::BlockTickingQueue::TickDataSet> mDeferredTicks;
    ::ll::TypedStorage<1, 1, ::TickingQueueType>                mQueueType;
    ::ll::TypedStorage<1, 1, bool>                              mInstaTick;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockTickingQueue();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BlockTickingQueue(::TickingQueueType queueType);

    MCAPI void _acquireAllTicks(::BlockTickingQueue& otherChunkQueue);

    MCAPI void _addToNextTickQueue(::BlockPos const& pos, ::Block const& block, int tickDelay, int priorityOffset);

    MCAPI void _eliminateTicksForZeroAndAbove(::BlockTickingQueue::TickDataSet& queue);

    MCAPI void _saveQueue(::ListTag& list, ::BlockTickingQueue::TickDataSet const& queue) const;

    MCAPI void
    add(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, int tickDelay, int priorityOffset);

    MCAPI void addTickToLevelChunk(
        ::LevelChunk&     lc,
        ::BlockPos const& pos,
        ::Block const&    block,
        int               tickDelay,
        int               priorityOffset
    );

    MCAPI void eliminateDuplicatesOf(::BlockLegacy const& block);

    MCAPI void finishInstaticking();

    MCAPI bool getNextUpdateForPos(::BlockPos const& pos, ::Tick& tick) const;

    MCAPI ::std::unordered_multimap<::BlockPos, ::TickDelayBlock>
    getTickDelaysInArea(::BoundingBox const& boundingBox) const;

    MCAPI void load(::CompoundTag const& tag, ::BlockPalette const& palette);

    MCAPI void remove(::std::function<bool(::TickNextTickData const&)> const& removeCondition);

    MCAPI void save(::CompoundTag& tag) const;

    MCAPI bool tickPendingTicks(::BlockSource& region, ::Tick const& until, int max, bool instaTick_);

    MCAPI ~BlockTickingQueue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TickingQueueType queueType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
