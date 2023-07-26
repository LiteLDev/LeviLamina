#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class TickingAreaView {

public:
    // prevent constructor by default
    TickingAreaView& operator=(TickingAreaView const&) = delete;
    TickingAreaView(TickingAreaView const&)            = delete;
    TickingAreaView()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?init\@TickingAreaView\@\@UEAAXAEBUBounds\@\@_N\@Z
     */
    virtual void init(struct Bounds const&, bool); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?tick\@TickingAreaView\@\@UEAAXAEBUTick\@\@AEAVBlockSource\@\@_N2\@Z
     */
    virtual void tick(struct Tick const&, class BlockSource&, bool, bool); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?tickSeasons\@TickingAreaView\@\@UEAAXAEAVBlockSource\@\@AEAVRandom\@\@\@Z
     */
    virtual void tickSeasons(class BlockSource&, class Random&); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getDimensionId\@TickingAreaView\@\@UEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    virtual class AutomaticID<class Dimension, int> getDimensionId() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getBounds\@TickingAreaView\@\@UEBAAEBUBounds\@\@XZ
     */
    virtual struct Bounds const& getBounds() const; // NOLINT
    /**
     * @vftbl 6
     * @symbol ?isCircle\@TickingAreaView\@\@UEBA_NXZ
     */
    virtual bool isCircle() const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?isDoneLoading\@TickingAreaView\@\@UEBA_NXZ
     */
    virtual bool isDoneLoading() const; // NOLINT
    /**
     * @vftbl 8
     * @symbol ?checkInitialLoadDone\@TickingAreaView\@\@UEAA_NUTick\@\@\@Z
     */
    virtual bool checkInitialLoadDone(struct Tick); // NOLINT
    /**
     * @vftbl 9
     * @symbol ?checkLoadedChunkNeighborsDone\@TickingAreaView\@\@UEBA_NAEBVBlockSource\@\@_N\@Z
     */
    virtual bool checkLoadedChunkNeighborsDone(class BlockSource const&, bool) const; // NOLINT
    /**
     * @vftbl 10
     * @symbol ?move\@TickingAreaView\@\@UEAAXAEBUBounds\@\@\@Z
     */
    virtual void move(struct Bounds const&); // NOLINT
    /**
     * @vftbl 11
     * @symbol
     * ?createChildSource\@TickingAreaView\@\@UEAA?AV?$unique_ptr\@VChunkViewSource\@\@U?$default_delete\@VChunkViewSource\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class ChunkViewSource> createChildSource(); // NOLINT
    /**
     * @vftbl 12
     * @symbol ?getAvailableChunk\@TickingAreaView\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@\@Z
     */
    virtual class std::shared_ptr<class LevelChunk> getAvailableChunk(class ChunkPos const&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TICKINGAREAVIEW
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TickingAreaView(); // NOLINT
#endif
    /**
     * @symbol ??0TickingAreaView\@\@QEAA\@AEAVChunkSource\@\@\@Z
     */
    MCAPI TickingAreaView(class ChunkSource&); // NOLINT
    /**
     * @symbol ?unregisterChunkBuildOrderPolicy\@TickingAreaView\@\@QEAAXAEAVChunkBuildOrderPolicyBase\@\@\@Z
     */
    MCAPI void unregisterChunkBuildOrderPolicy(class ChunkBuildOrderPolicyBase&); // NOLINT

    // private:
    /**
     * @symbol ?_tickChunk\@TickingAreaView\@\@AEAA_NAEBUTick\@\@AEAVBlockSource\@\@AEAVLevel\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI bool _tickChunk(struct Tick const&, class BlockSource&, class Level&, class ChunkPos const&); // NOLINT

private:
};
