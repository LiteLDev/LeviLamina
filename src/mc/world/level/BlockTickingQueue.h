#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/threading/MovePriorityQueue.h"
#include "mc/world/level/TickNextTickData.h"

class BlockTickingQueue {
public:
    // BlockTickingQueue inner types declare
    // clang-format off
    class TickDataSet;
    // clang-format on

    class BlockTick {
    public:
        bool             mIsRemoved{};
        TickNextTickData mData;

    public:
        bool operator>(BlockTick const& other) const { return mData > other.mData; }
    };

    // BlockTickingQueue inner types define
    class TickDataSet : public MovePriorityQueue<BlockTick, std::greater<>> {
    public:
        // NOLINTBEGIN
        MCAPI void _pruneQueueForMemory();

        MCAPI class BlockTickingQueue::TickDataSet& operator=(class BlockTickingQueue::TickDataSet&&);

        MCAPI bool remove(std::function<bool(class TickNextTickData const&)> const& removeCondition);

        MCAPI bool remove(class BlockPos const& pos, class Block const& block);

        MCAPI ~TickDataSet();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BlockTickingQueue& operator=(BlockTickingQueue const&);
    BlockTickingQueue(BlockTickingQueue const&);
    BlockTickingQueue();

public:
    // NOLINTBEGIN
    MCAPI void acquireAllRandomTicks(class LevelChunk& lc);

    MCAPI void acquireAllTicks(class BlockTickingQueue& otherQueue);

    MCAPI void acquireAllTicks(class LevelChunk& lc);

    MCAPI void
    add(class BlockSource&    region,
        class BlockPos const& pos,
        class Block const&    block,
        int                   tickDelay,
        int                   priorityOffset);

    MCAPI void addTickToLevelChunk(
        class LevelChunk&     lc,
        class BlockPos const& pos,
        class Block const&    block,
        int                   tickDelay,
        int                   priorityOffset
    );

    MCAPI void eliminateAllTicksZeroAndAbove();

    MCAPI void eliminateDuplicatesOf(class BlockLegacy const& block);

    MCAPI void finishInstaticking();

    MCAPI bool getNextUpdateForPos(class BlockPos const& pos, struct Tick& tick) const;

    MCAPI std::optional<struct Tick> getTickDelayForNextTickUpdateAtPos(class BlockPos const& pos) const;

    MCAPI std::unordered_multimap<class BlockPos, struct TickDelayBlock>
          getTickDelaysInArea(class BoundingBox const& boundingBox) const;

    MCAPI bool hasTickInPendingTicks(class BlockPos const& pos) const;

    MCAPI bool isEmpty() const;

    MCAPI void load(class CompoundTag const& tag, class BlockPalette const& palette);

    MCAPI void remove(std::function<bool(class TickNextTickData const&)> const& removeCondition);

    MCAPI void save(class CompoundTag& tag) const;

    MCAPI void setOwningChunk(class LevelChunk* owningChunk);

    MCAPI void tickAllPendingTicks(class BlockSource& region, uint64 maximumTicksAllowed);

    MCAPI bool tickPendingTicks(class BlockSource& region, struct Tick const& until, int max, bool instaTick_);

    MCAPI int ticksFromNow(int offset) const;

    MCAPI ~BlockTickingQueue();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _saveQueue(class ListTag& list, class BlockTickingQueue::TickDataSet const& queue) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _acquireAllTicks(class BlockTickingQueue& otherChunkQueue);

    MCAPI void
    _addToNextTickQueue(class BlockPos const& pos, class Block const& block, int tickDelay, int priorityOffset);

    MCAPI void _eliminateTicksForZeroAndAbove(class BlockTickingQueue::TickDataSet& queue);

    // NOLINTEND
};
