/**
 * @file  MC/BlockTickingQueue.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockTickingQueue.
 *
 */
class BlockTickingQueue {

#define AFTER_EXTRA
// Add Member There
public:
class TickDataSet {
public:
    TickDataSet() = delete;
    TickDataSet(TickDataSet const&) = delete;
    TickDataSet(TickDataSet const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTICKINGQUEUE
public:
    class BlockTickingQueue& operator=(class BlockTickingQueue const &) = delete;
    BlockTickingQueue(class BlockTickingQueue const &) = delete;
    BlockTickingQueue() = delete;
#endif

public:
    /**
     * @hash   -1421062916
     * @symbol ?acquireAllRandomTicks@BlockTickingQueue@@QEAAXAEAVLevelChunk@@@Z
     */
    MCAPI void acquireAllRandomTicks(class LevelChunk &);
    /**
     * @hash   1179688518
     * @symbol ?acquireAllTicks@BlockTickingQueue@@QEAAXAEAV1@@Z
     */
    MCAPI void acquireAllTicks(class BlockTickingQueue &);
    /**
     * @hash   -1676037284
     * @symbol ?acquireAllTicks@BlockTickingQueue@@QEAAXAEAVLevelChunk@@@Z
     */
    MCAPI void acquireAllTicks(class LevelChunk &);
    /**
     * @hash   -2041624542
     * @symbol ?add@BlockTickingQueue@@QEAAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@HH@Z
     */
    MCAPI void add(class BlockSource &, class BlockPos const &, class Block const &, int, int);
    /**
     * @hash   -1564816620
     * @symbol ?addTickToLevelChunk@BlockTickingQueue@@QEAAXAEAVLevelChunk@@AEBVBlockPos@@AEBVBlock@@HH@Z
     */
    MCAPI void addTickToLevelChunk(class LevelChunk &, class BlockPos const &, class Block const &, int, int);
    /**
     * @hash   119008543
     * @symbol ?eliminateAllTicksZeroAndAbove@BlockTickingQueue@@QEAAXXZ
     */
    MCAPI void eliminateAllTicksZeroAndAbove();
    /**
     * @hash   472422002
     * @symbol ?eliminateDuplicatesOf@BlockTickingQueue@@QEAAXAEBVBlockLegacy@@@Z
     */
    MCAPI void eliminateDuplicatesOf(class BlockLegacy const &);
    /**
     * @hash   -900345606
     * @symbol ?getNextUpdateForPos@BlockTickingQueue@@QEBA_NAEBVBlockPos@@AEAUTick@@@Z
     */
    MCAPI bool getNextUpdateForPos(class BlockPos const &, struct Tick &) const;
    /**
     * @hash   -1500170910
     * @symbol ?getTickDelaysInArea@BlockTickingQueue@@QEBA?AV?$unordered_multimap@VBlockPos@@UTickDelayBlock@@U?$hash@VBlockPos@@@std@@U?$equal_to@VBlockPos@@@4@V?$allocator@U?$pair@$$CBVBlockPos@@UTickDelayBlock@@@std@@@4@@std@@AEBVBoundingBox@@@Z
     */
    MCAPI class std::unordered_multimap<class BlockPos, struct TickDelayBlock, struct std::hash<class BlockPos>, struct std::equal_to<class BlockPos>, class std::allocator<struct std::pair<class BlockPos const, struct TickDelayBlock>>> getTickDelaysInArea(class BoundingBox const &) const;
    /**
     * @hash   -2079687361
     * @symbol ?hasTickInCurrentTick@BlockTickingQueue@@QEBA_NAEBVBlockPos@@@Z
     */
    MCAPI bool hasTickInCurrentTick(class BlockPos const &) const;
    /**
     * @hash   2134059067
     * @symbol ?hasTickInPendingTicks@BlockTickingQueue@@QEBA_NAEBVBlockPos@@@Z
     */
    MCAPI bool hasTickInPendingTicks(class BlockPos const &) const;
    /**
     * @hash   378074678
     * @symbol ?isBlockInPendingTick@BlockTickingQueue@@QEBA_NAEBVBlockPos@@AEBVBlock@@@Z
     */
    MCAPI bool isBlockInPendingTick(class BlockPos const &, class Block const &) const;
    /**
     * @hash   -401537308
     * @symbol ?isBlockInPendingTick@BlockTickingQueue@@QEBA_NAEBVBlockPos@@AEBVBlockLegacy@@@Z
     */
    MCAPI bool isBlockInPendingTick(class BlockPos const &, class BlockLegacy const &) const;
    /**
     * @hash   -208621588
     * @symbol ?isEmpty@BlockTickingQueue@@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @hash   -501014850
     * @symbol ?isInstaticking@BlockTickingQueue@@QEBA_NXZ
     */
    MCAPI bool isInstaticking() const;
    /**
     * @hash   -544805497
     * @symbol ?load@BlockTickingQueue@@QEAAXAEBVCompoundTag@@AEBVBlockPalette@@@Z
     */
    MCAPI void load(class CompoundTag const &, class BlockPalette const &);
    /**
     * @hash   -2043401858
     * @symbol ?remove@BlockTickingQueue@@QEAAX$$QEAV?$function@$$A6A_NAEBVTickNextTickData@@@Z@std@@@Z
     */
    MCAPI void remove(class std::function<bool (class TickNextTickData const &)> &&);
    /**
     * @hash   1777300951
     * @symbol ?remove@BlockTickingQueue@@QEAAXAEBVBlockPos@@AEBVBlock@@@Z
     */
    MCAPI void remove(class BlockPos const &, class Block const &);
    /**
     * @hash   -869415346
     * @symbol ?save@BlockTickingQueue@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void save(class CompoundTag &) const;
    /**
     * @hash   -2068322091
     * @symbol ?setOwningChunk@BlockTickingQueue@@QEAAXPEAVLevelChunk@@@Z
     */
    MCAPI void setOwningChunk(class LevelChunk *);
    /**
     * @hash   1715236798
     * @symbol ?tickAllPendingTicks@BlockTickingQueue@@QEAAXAEAVBlockSource@@_K@Z
     */
    MCAPI void tickAllPendingTicks(class BlockSource &, unsigned __int64);
    /**
     * @hash   1783713820
     * @symbol ?tickPendingTicks@BlockTickingQueue@@QEAA_NAEAVBlockSource@@AEBUTick@@H_N@Z
     */
    MCAPI bool tickPendingTicks(class BlockSource &, struct Tick const &, int, bool);
    /**
     * @hash   -211183017
     * @symbol ?ticksFromNow@BlockTickingQueue@@QEBAHH@Z
     */
    MCAPI int ticksFromNow(int) const;
    /**
     * @hash   -1679748347
     * @symbol ??1BlockTickingQueue@@QEAA@XZ
     */
    MCAPI ~BlockTickingQueue();

//protected:
    /**
     * @hash   -886432091
     * @symbol ?_saveQueue@BlockTickingQueue@@IEBAXAEAVListTag@@AEBVTickDataSet@1@@Z
     */
    MCAPI void _saveQueue(class ListTag &, class BlockTickingQueue::TickDataSet const &) const;

//private:
    /**
     * @hash   134290820
     * @symbol ?_acquireAllTicks@BlockTickingQueue@@AEAAXAEAV1@@Z
     */
    MCAPI void _acquireAllTicks(class BlockTickingQueue &);
    /**
     * @hash   604008321
     * @symbol ?_addToNextTickQueue@BlockTickingQueue@@AEAAXAEBVBlockPos@@AEBVBlock@@HH@Z
     */
    MCAPI void _addToNextTickQueue(class BlockPos const &, class Block const &, int, int);

protected:

private:

};