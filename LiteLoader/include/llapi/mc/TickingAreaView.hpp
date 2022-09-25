/**
 * @file  TickingAreaView.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TickingAreaView.
 *
 */
class TickingAreaView {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKINGAREAVIEW
public:
    class TickingAreaView& operator=(class TickingAreaView const &) = delete;
    TickingAreaView(class TickingAreaView const &) = delete;
    TickingAreaView() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TickingAreaView();
    /**
     * @hash   -1699767789
     * @vftbl  1
     * @symbol ?init@TickingAreaView@@UEAAXAEBUBounds@@_N@Z
     */
    virtual void init(struct Bounds const &, bool);
    /**
     * @hash   564026168
     * @vftbl  2
     * @symbol ?tick@TickingAreaView@@UEAAXAEBUTick@@AEAVBlockSource@@_N2@Z
     */
    virtual void tick(struct Tick const &, class BlockSource &, bool, bool);
    /**
     * @hash   -1425147552
     * @vftbl  3
     * @symbol ?tickSeasons@TickingAreaView@@UEAAXAEAVBlockSource@@AEAVRandom@@@Z
     */
    virtual void tickSeasons(class BlockSource &, class Random &);
    /**
     * @hash   -1610955536
     * @vftbl  4
     * @symbol ?getDimensionId@TickingAreaView@@UEBA?AV?$AutomaticID@VDimension@@H@@XZ
     */
    virtual class AutomaticID<class Dimension, int> getDimensionId() const;
    /**
     * @hash   -604325911
     * @vftbl  5
     * @symbol ?getBounds@TickingAreaView@@UEBAAEBUBounds@@XZ
     */
    virtual struct Bounds const & getBounds() const;
    /**
     * @hash   893479947
     * @vftbl  6
     * @symbol ?isCircle@TickingAreaView@@UEBA_NXZ
     */
    virtual bool isCircle() const;
    /**
     * @hash   -323061055
     * @vftbl  7
     * @symbol ?isDoneLoading@TickingAreaView@@UEBA_NXZ
     */
    virtual bool isDoneLoading() const;
    /**
     * @hash   443411197
     * @vftbl  8
     * @symbol ?checkInitialLoadDone@TickingAreaView@@UEAA_NUTick@@@Z
     */
    virtual bool checkInitialLoadDone(struct Tick);
    /**
     * @hash   772616079
     * @vftbl  9
     * @symbol ?checkLoadedChunkNeighborsDone@TickingAreaView@@UEBA_NAEBVBlockSource@@_N@Z
     */
    virtual bool checkLoadedChunkNeighborsDone(class BlockSource const &, bool) const;
    /**
     * @hash   342509048
     * @vftbl  10
     * @symbol ?move@TickingAreaView@@UEAAXAEBUBounds@@@Z
     */
    virtual void move(struct Bounds const &);
    /**
     * @hash   910849554
     * @vftbl  11
     * @symbol ?createChildSource@TickingAreaView@@UEAA?AV?$unique_ptr@VChunkViewSource@@U?$default_delete@VChunkViewSource@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class ChunkViewSource> createChildSource();
    /**
     * @hash   1842600943
     * @vftbl  12
     * @symbol ?getAvailableChunk@TickingAreaView@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@@Z
     */
    virtual class std::shared_ptr<class LevelChunk> getAvailableChunk(class ChunkPos const &);
    /**
     * @hash   -2085162970
     * @symbol ??0TickingAreaView@@QEAA@AEAVChunkSource@@@Z
     */
    MCAPI TickingAreaView(class ChunkSource &);
    /**
     * @hash   1151443774
     * @symbol ?unregisterChunkBuildOrderPolicy@TickingAreaView@@QEAAXAEAVChunkBuildOrderPolicyBase@@@Z
     */
    MCAPI void unregisterChunkBuildOrderPolicy(class ChunkBuildOrderPolicyBase &);

//private:
    /**
     * @hash   -120641051
     * @symbol ?_tickChunk@TickingAreaView@@AEAA_NAEBUTick@@AEAVBlockSource@@AEAVLevel@@AEBVChunkPos@@@Z
     */
    MCAPI bool _tickChunk(struct Tick const &, class BlockSource &, class Level &, class ChunkPos const &);

private:

};