#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockTickingQueue {
public:
    // BlockTickingQueue inner types declare
    // clang-format off
    class BlockTick;
    class TickDataSet;
    // clang-format on

    // BlockTickingQueue inner types define
    class BlockTick {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTICKINGQUEUE_BLOCKTICK
    public:
        BlockTick& operator=(BlockTick const&) = delete;
        BlockTick(BlockTick const&)            = delete;
        BlockTick()                            = delete;
#endif

    public:
    };

    class TickDataSet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTICKINGQUEUE_TICKDATASET
    public:
        TickDataSet& operator=(TickDataSet const&) = delete;
        TickDataSet(TickDataSet const&)            = delete;
        TickDataSet()                              = delete;
#endif

    public:
        /**
         * @symbol ?_pruneQueueForMemory\@TickDataSet\@BlockTickingQueue\@\@QEAAXXZ
         */
        MCAPI void _pruneQueueForMemory();
        /**
         * @symbol ??4TickDataSet\@BlockTickingQueue\@\@QEAAAEAV01\@$$QEAV01\@\@Z
         */
        MCAPI class BlockTickingQueue::TickDataSet& operator=(class BlockTickingQueue::TickDataSet&&);
        /**
         * @symbol ?remove\@TickDataSet\@BlockTickingQueue\@\@QEAA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
         */
        MCAPI bool remove(class BlockPos const&, class Block const&);
        /**
         * @symbol
         * ?remove\@TickDataSet\@BlockTickingQueue\@\@QEAA_NAEBV?$function\@$$A6A_NAEBVTickNextTickData\@\@\@Z\@std\@\@\@Z
         */
        MCAPI bool remove(class std::function<bool(class TickNextTickData const&)> const&);
        /**
         * @symbol ??1TickDataSet\@BlockTickingQueue\@\@QEAA\@XZ
         */
        MCAPI ~TickDataSet();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTICKINGQUEUE
public:
    BlockTickingQueue& operator=(BlockTickingQueue const&) = delete;
    BlockTickingQueue(BlockTickingQueue const&)            = delete;
    BlockTickingQueue()                                    = delete;
#endif

public:
    /**
     * @symbol ?acquireAllRandomTicks\@BlockTickingQueue\@\@QEAAXAEAVLevelChunk\@\@\@Z
     */
    MCAPI void acquireAllRandomTicks(class LevelChunk&);
    /**
     * @symbol ?acquireAllTicks\@BlockTickingQueue\@\@QEAAXAEAV1\@\@Z
     */
    MCAPI void acquireAllTicks(class BlockTickingQueue&);
    /**
     * @symbol ?acquireAllTicks\@BlockTickingQueue\@\@QEAAXAEAVLevelChunk\@\@\@Z
     */
    MCAPI void acquireAllTicks(class LevelChunk&);
    /**
     * @symbol ?add\@BlockTickingQueue\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@HH\@Z
     */
    MCAPI void add(class BlockSource&, class BlockPos const&, class Block const&, int, int);
    /**
     * @symbol ?addTickToLevelChunk\@BlockTickingQueue\@\@QEAAXAEAVLevelChunk\@\@AEBVBlockPos\@\@AEBVBlock\@\@HH\@Z
     */
    MCAPI void addTickToLevelChunk(class LevelChunk&, class BlockPos const&, class Block const&, int, int);
    /**
     * @symbol ?eliminateAllTicksZeroAndAbove\@BlockTickingQueue\@\@QEAAXXZ
     */
    MCAPI void eliminateAllTicksZeroAndAbove();
    /**
     * @symbol ?eliminateDuplicatesOf\@BlockTickingQueue\@\@QEAAXAEBVBlockLegacy\@\@\@Z
     */
    MCAPI void eliminateDuplicatesOf(class BlockLegacy const&);
    /**
     * @symbol ?finishInstaticking\@BlockTickingQueue\@\@QEAAXXZ
     */
    MCAPI void finishInstaticking();
    /**
     * @symbol ?getNextUpdateForPos\@BlockTickingQueue\@\@QEBA_NAEBVBlockPos\@\@AEAUTick\@\@\@Z
     */
    MCAPI bool getNextUpdateForPos(class BlockPos const&, struct Tick&) const;
    /**
     * @symbol
     * ?getTickDelayForNextTickUpdateAtPos\@BlockTickingQueue\@\@QEBA?AV?$optional\@UTick\@\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class std::optional<struct Tick> getTickDelayForNextTickUpdateAtPos(class BlockPos const&) const;
    /**
     * @symbol
     * ?getTickDelaysInArea\@BlockTickingQueue\@\@QEBA?AV?$unordered_multimap\@VBlockPos\@\@UTickDelayBlock\@\@U?$hash\@VBlockPos\@\@\@std\@\@U?$equal_to\@VBlockPos\@\@\@4\@V?$allocator\@U?$pair\@$$CBVBlockPos\@\@UTickDelayBlock\@\@\@std\@\@\@4\@\@std\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI class std::unordered_multimap<
        class BlockPos,
        struct TickDelayBlock,
        struct std::hash<class BlockPos>,
        struct std::equal_to<class BlockPos>,
        class std::allocator<struct std::pair<class BlockPos const, struct TickDelayBlock>>>
    getTickDelaysInArea(class BoundingBox const&) const;
    /**
     * @symbol ?hasTickInPendingTicks\@BlockTickingQueue\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool hasTickInPendingTicks(class BlockPos const&) const;
    /**
     * @symbol ?isEmpty\@BlockTickingQueue\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol ?load\@BlockTickingQueue\@\@QEAAXAEBVCompoundTag\@\@AEBVBlockPalette\@\@\@Z
     */
    MCAPI void load(class CompoundTag const&, class BlockPalette const&);
    /**
     * @symbol ?remove\@BlockTickingQueue\@\@QEAAXAEBV?$function\@$$A6A_NAEBVTickNextTickData\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void remove(class std::function<bool(class TickNextTickData const&)> const&);
    /**
     * @symbol ?save\@BlockTickingQueue\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void save(class CompoundTag&) const;
    /**
     * @symbol ?setOwningChunk\@BlockTickingQueue\@\@QEAAXPEAVLevelChunk\@\@\@Z
     */
    MCAPI void setOwningChunk(class LevelChunk*);
    /**
     * @symbol ?tickAllPendingTicks\@BlockTickingQueue\@\@QEAAXAEAVBlockSource\@\@_K\@Z
     */
    MCAPI void tickAllPendingTicks(class BlockSource&, unsigned __int64);
    /**
     * @symbol ?tickPendingTicks\@BlockTickingQueue\@\@QEAA_NAEAVBlockSource\@\@AEBUTick\@\@H_N\@Z
     */
    MCAPI bool tickPendingTicks(class BlockSource&, struct Tick const&, int, bool);
    /**
     * @symbol ?ticksFromNow\@BlockTickingQueue\@\@QEBAHH\@Z
     */
    MCAPI int ticksFromNow(int) const;
    /**
     * @symbol ??1BlockTickingQueue\@\@QEAA\@XZ
     */
    MCAPI ~BlockTickingQueue();

    // protected:
    /**
     * @symbol ?_saveQueue\@BlockTickingQueue\@\@IEBAXAEAVListTag\@\@AEBVTickDataSet\@1\@\@Z
     */
    MCAPI void _saveQueue(class ListTag&, class BlockTickingQueue::TickDataSet const&) const;

    // private:
    /**
     * @symbol ?_acquireAllTicks\@BlockTickingQueue\@\@AEAAXAEAV1\@\@Z
     */
    MCAPI void _acquireAllTicks(class BlockTickingQueue&);
    /**
     * @symbol ?_addToNextTickQueue\@BlockTickingQueue\@\@AEAAXAEBVBlockPos\@\@AEBVBlock\@\@HH\@Z
     */
    MCAPI void _addToNextTickQueue(class BlockPos const&, class Block const&, int, int);
    /**
     * @symbol ?_eliminateTicksForZeroAndAbove\@BlockTickingQueue\@\@AEAAXAEAVTickDataSet\@1\@\@Z
     */
    MCAPI void _eliminateTicksForZeroAndAbove(class BlockTickingQueue::TickDataSet&);

protected:
private:
};
