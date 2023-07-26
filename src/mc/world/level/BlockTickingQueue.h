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

    public:
        // prevent constructor by default
        BlockTick& operator=(BlockTick const&) = delete;
        BlockTick(BlockTick const&)            = delete;
        BlockTick()                            = delete;
    };

    class TickDataSet {

    public:
        // prevent constructor by default
        TickDataSet& operator=(TickDataSet const&) = delete;
        TickDataSet(TickDataSet const&)            = delete;
        TickDataSet()                              = delete;

    public:
        /**
         * @symbol ?_pruneQueueForMemory\@TickDataSet\@BlockTickingQueue\@\@QEAAXXZ
         */
        MCAPI void _pruneQueueForMemory(); // NOLINT
        /**
         * @symbol ??4TickDataSet\@BlockTickingQueue\@\@QEAAAEAV01\@$$QEAV01\@\@Z
         */
        MCAPI class BlockTickingQueue::TickDataSet& operator=(class BlockTickingQueue::TickDataSet&&); // NOLINT
        /**
         * @symbol ?remove\@TickDataSet\@BlockTickingQueue\@\@QEAA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
         */
        MCAPI bool remove(class BlockPos const&, class Block const&); // NOLINT
        /**
         * @symbol
         * ?remove\@TickDataSet\@BlockTickingQueue\@\@QEAA_NAEBV?$function\@$$A6A_NAEBVTickNextTickData\@\@\@Z\@std\@\@\@Z
         */
        MCAPI bool remove(class std::function<bool(class TickNextTickData const&)> const&); // NOLINT
        /**
         * @symbol ??1TickDataSet\@BlockTickingQueue\@\@QEAA\@XZ
         */
        MCAPI ~TickDataSet(); // NOLINT
    };

public:
    // prevent constructor by default
    BlockTickingQueue& operator=(BlockTickingQueue const&) = delete;
    BlockTickingQueue(BlockTickingQueue const&)            = delete;
    BlockTickingQueue()                                    = delete;

public:
    /**
     * @symbol ?acquireAllRandomTicks\@BlockTickingQueue\@\@QEAAXAEAVLevelChunk\@\@\@Z
     */
    MCAPI void acquireAllRandomTicks(class LevelChunk&); // NOLINT
    /**
     * @symbol ?acquireAllTicks\@BlockTickingQueue\@\@QEAAXAEAV1\@\@Z
     */
    MCAPI void acquireAllTicks(class BlockTickingQueue&); // NOLINT
    /**
     * @symbol ?acquireAllTicks\@BlockTickingQueue\@\@QEAAXAEAVLevelChunk\@\@\@Z
     */
    MCAPI void acquireAllTicks(class LevelChunk&); // NOLINT
    /**
     * @symbol ?add\@BlockTickingQueue\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@HH\@Z
     */
    MCAPI void add(class BlockSource&, class BlockPos const&, class Block const&, int, int); // NOLINT
    /**
     * @symbol ?addTickToLevelChunk\@BlockTickingQueue\@\@QEAAXAEAVLevelChunk\@\@AEBVBlockPos\@\@AEBVBlock\@\@HH\@Z
     */
    MCAPI void addTickToLevelChunk(class LevelChunk&, class BlockPos const&, class Block const&, int, int); // NOLINT
    /**
     * @symbol ?eliminateAllTicksZeroAndAbove\@BlockTickingQueue\@\@QEAAXXZ
     */
    MCAPI void eliminateAllTicksZeroAndAbove(); // NOLINT
    /**
     * @symbol ?eliminateDuplicatesOf\@BlockTickingQueue\@\@QEAAXAEBVBlockLegacy\@\@\@Z
     */
    MCAPI void eliminateDuplicatesOf(class BlockLegacy const&); // NOLINT
    /**
     * @symbol ?finishInstaticking\@BlockTickingQueue\@\@QEAAXXZ
     */
    MCAPI void finishInstaticking(); // NOLINT
    /**
     * @symbol ?getNextUpdateForPos\@BlockTickingQueue\@\@QEBA_NAEBVBlockPos\@\@AEAUTick\@\@\@Z
     */
    MCAPI bool getNextUpdateForPos(class BlockPos const&, struct Tick&) const; // NOLINT
    /**
     * @symbol
     * ?getTickDelayForNextTickUpdateAtPos\@BlockTickingQueue\@\@QEBA?AV?$optional\@UTick\@\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class std::optional<struct Tick> getTickDelayForNextTickUpdateAtPos(class BlockPos const&) const; // NOLINT
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
    getTickDelaysInArea(class BoundingBox const&) const; // NOLINT
    /**
     * @symbol ?hasTickInPendingTicks\@BlockTickingQueue\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool hasTickInPendingTicks(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?isEmpty\@BlockTickingQueue\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const; // NOLINT
    /**
     * @symbol ?load\@BlockTickingQueue\@\@QEAAXAEBVCompoundTag\@\@AEBVBlockPalette\@\@\@Z
     */
    MCAPI void load(class CompoundTag const&, class BlockPalette const&); // NOLINT
    /**
     * @symbol ?remove\@BlockTickingQueue\@\@QEAAXAEBV?$function\@$$A6A_NAEBVTickNextTickData\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void remove(class std::function<bool(class TickNextTickData const&)> const&); // NOLINT
    /**
     * @symbol ?save\@BlockTickingQueue\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void save(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?setOwningChunk\@BlockTickingQueue\@\@QEAAXPEAVLevelChunk\@\@\@Z
     */
    MCAPI void setOwningChunk(class LevelChunk*); // NOLINT
    /**
     * @symbol ?tickAllPendingTicks\@BlockTickingQueue\@\@QEAAXAEAVBlockSource\@\@_K\@Z
     */
    MCAPI void tickAllPendingTicks(class BlockSource&, unsigned __int64); // NOLINT
    /**
     * @symbol ?tickPendingTicks\@BlockTickingQueue\@\@QEAA_NAEAVBlockSource\@\@AEBUTick\@\@H_N\@Z
     */
    MCAPI bool tickPendingTicks(class BlockSource&, struct Tick const&, int, bool); // NOLINT
    /**
     * @symbol ?ticksFromNow\@BlockTickingQueue\@\@QEBAHH\@Z
     */
    MCAPI int ticksFromNow(int) const; // NOLINT
    /**
     * @symbol ??1BlockTickingQueue\@\@QEAA\@XZ
     */
    MCAPI ~BlockTickingQueue(); // NOLINT

    // protected:
    /**
     * @symbol ?_saveQueue\@BlockTickingQueue\@\@IEBAXAEAVListTag\@\@AEBVTickDataSet\@1\@\@Z
     */
    MCAPI void _saveQueue(class ListTag&, class BlockTickingQueue::TickDataSet const&) const; // NOLINT

    // private:
    /**
     * @symbol ?_acquireAllTicks\@BlockTickingQueue\@\@AEAAXAEAV1\@\@Z
     */
    MCAPI void _acquireAllTicks(class BlockTickingQueue&); // NOLINT
    /**
     * @symbol ?_addToNextTickQueue\@BlockTickingQueue\@\@AEAAXAEBVBlockPos\@\@AEBVBlock\@\@HH\@Z
     */
    MCAPI void _addToNextTickQueue(class BlockPos const&, class Block const&, int, int); // NOLINT
    /**
     * @symbol ?_eliminateTicksForZeroAndAbove\@BlockTickingQueue\@\@AEAAXAEAVTickDataSet\@1\@\@Z
     */
    MCAPI void _eliminateTicksForZeroAndAbove(class BlockTickingQueue::TickDataSet&); // NOLINT

protected:
private:
};
