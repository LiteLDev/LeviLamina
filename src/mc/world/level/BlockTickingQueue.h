#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/data/MovePriorityQueue.h"
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
        // symbol: ?_pruneQueueForMemory@TickDataSet@BlockTickingQueue@@QEAAXXZ
        MCAPI void _pruneQueueForMemory();

        // symbol: ??4TickDataSet@BlockTickingQueue@@QEAAAEAV01@$$QEAV01@@Z
        MCAPI class BlockTickingQueue::TickDataSet& operator=(class BlockTickingQueue::TickDataSet&&);

        // symbol: ?remove@TickDataSet@BlockTickingQueue@@QEAA_NAEBV?$function@$$A6A_NAEBVTickNextTickData@@@Z@std@@@Z
        MCAPI bool remove(std::function<bool(class TickNextTickData const&)> const& removeCondition);

        // symbol: ?remove@TickDataSet@BlockTickingQueue@@QEAA_NAEBVBlockPos@@AEBVBlock@@@Z
        MCAPI bool remove(class BlockPos const& pos, class Block const& block);

        // symbol: ??1TickDataSet@BlockTickingQueue@@QEAA@XZ
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
    // symbol: ?acquireAllRandomTicks@BlockTickingQueue@@QEAAXAEAVLevelChunk@@@Z
    MCAPI void acquireAllRandomTicks(class LevelChunk& lc);

    // symbol: ?acquireAllTicks@BlockTickingQueue@@QEAAXAEAV1@@Z
    MCAPI void acquireAllTicks(class BlockTickingQueue&);

    // symbol: ?acquireAllTicks@BlockTickingQueue@@QEAAXAEAVLevelChunk@@@Z
    MCAPI void acquireAllTicks(class LevelChunk& lc);

    // symbol: ?add@BlockTickingQueue@@QEAAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@HH@Z
    MCAPI void
    add(class BlockSource&    region,
        class BlockPos const& pos,
        class Block const&    block,
        int                   tickDelay,
        int                   priorityOffset);

    // symbol: ?addTickToLevelChunk@BlockTickingQueue@@QEAAXAEAVLevelChunk@@AEBVBlockPos@@AEBVBlock@@HH@Z
    MCAPI void addTickToLevelChunk(
        class LevelChunk&     lc,
        class BlockPos const& pos,
        class Block const&    block,
        int                   tickDelay,
        int                   priorityOffset
    );

    // symbol: ?eliminateAllTicksZeroAndAbove@BlockTickingQueue@@QEAAXXZ
    MCAPI void eliminateAllTicksZeroAndAbove();

    // symbol: ?eliminateDuplicatesOf@BlockTickingQueue@@QEAAXAEBVBlockLegacy@@@Z
    MCAPI void eliminateDuplicatesOf(class BlockLegacy const& block);

    // symbol: ?finishInstaticking@BlockTickingQueue@@QEAAXXZ
    MCAPI void finishInstaticking();

    // symbol: ?getNextUpdateForPos@BlockTickingQueue@@QEBA_NAEBVBlockPos@@AEAUTick@@@Z
    MCAPI bool getNextUpdateForPos(class BlockPos const& pos, struct Tick& tick) const;

    // symbol: ?getTickDelayForNextTickUpdateAtPos@BlockTickingQueue@@QEBA?AV?$optional@UTick@@@std@@AEBVBlockPos@@@Z
    MCAPI std::optional<struct Tick> getTickDelayForNextTickUpdateAtPos(class BlockPos const& pos) const;

    // symbol:
    // ?getTickDelaysInArea@BlockTickingQueue@@QEBA?AV?$unordered_multimap@VBlockPos@@UTickDelayBlock@@U?$hash@VBlockPos@@@std@@U?$equal_to@VBlockPos@@@4@V?$allocator@U?$pair@$$CBVBlockPos@@UTickDelayBlock@@@std@@@4@@std@@AEBVBoundingBox@@@Z
    MCAPI std::unordered_multimap<class BlockPos, struct TickDelayBlock>
          getTickDelaysInArea(class BoundingBox const& boundingBox) const;

    // symbol: ?hasTickInPendingTicks@BlockTickingQueue@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool hasTickInPendingTicks(class BlockPos const& pos) const;

    // symbol: ?isEmpty@BlockTickingQueue@@QEBA_NXZ
    MCAPI bool isEmpty() const;

    // symbol: ?load@BlockTickingQueue@@QEAAXAEBVCompoundTag@@AEBVBlockPalette@@@Z
    MCAPI void load(class CompoundTag const& tag, class BlockPalette const& palette);

    // symbol: ?remove@BlockTickingQueue@@QEAAXAEBV?$function@$$A6A_NAEBVTickNextTickData@@@Z@std@@@Z
    MCAPI void remove(std::function<bool(class TickNextTickData const&)> const& removeCondition);

    // symbol: ?save@BlockTickingQueue@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void save(class CompoundTag& tag) const;

    // symbol: ?setOwningChunk@BlockTickingQueue@@QEAAXPEAVLevelChunk@@@Z
    MCAPI void setOwningChunk(class LevelChunk* owningChunk);

    // symbol: ?tickAllPendingTicks@BlockTickingQueue@@QEAAXAEAVBlockSource@@_K@Z
    MCAPI void tickAllPendingTicks(class BlockSource& region, uint64);

    // symbol: ?tickPendingTicks@BlockTickingQueue@@QEAA_NAEAVBlockSource@@AEBUTick@@H_N@Z
    MCAPI bool tickPendingTicks(class BlockSource& region, struct Tick const& until, int max, bool instaTick_);

    // symbol: ?ticksFromNow@BlockTickingQueue@@QEBAHH@Z
    MCAPI int ticksFromNow(int offset) const;

    // symbol: ??1BlockTickingQueue@@QEAA@XZ
    MCAPI ~BlockTickingQueue();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_saveQueue@BlockTickingQueue@@IEBAXAEAVListTag@@AEBVTickDataSet@1@@Z
    MCAPI void _saveQueue(class ListTag& list, class BlockTickingQueue::TickDataSet const& queue) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_acquireAllTicks@BlockTickingQueue@@AEAAXAEAV1@@Z
    MCAPI void _acquireAllTicks(class BlockTickingQueue&);

    // symbol: ?_addToNextTickQueue@BlockTickingQueue@@AEAAXAEBVBlockPos@@AEBVBlock@@HH@Z
    MCAPI void
    _addToNextTickQueue(class BlockPos const& pos, class Block const& block, int tickDelay, int priorityOffset);

    // symbol: ?_eliminateTicksForZeroAndAbove@BlockTickingQueue@@AEAAXAEAVTickDataSet@1@@Z
    MCAPI void _eliminateTicksForZeroAndAbove(class BlockTickingQueue::TickDataSet& queue);

    // NOLINTEND
};
