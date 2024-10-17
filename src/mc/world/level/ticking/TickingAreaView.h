#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/ticking/ITickingAreaView.h"

class TickingAreaView : public ::ITickingAreaView {
public:
    // prevent constructor by default
    TickingAreaView& operator=(TickingAreaView const&);
    TickingAreaView(TickingAreaView const&);
    TickingAreaView();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TickingAreaView();

    // vIndex: 1
    virtual void init(struct Bounds const& bounds, bool isCircle);

    // vIndex: 2
    virtual void tick(struct Tick const& currentTick, class BlockSource& region, bool preload, bool randomize);

    // vIndex: 3
    virtual void tickSeasons(class BlockSource& region, class Random& random);

    // vIndex: 4
    virtual DimensionType getDimensionId() const;

    // vIndex: 5
    virtual struct Bounds const& getBounds() const;

    // vIndex: 6
    virtual bool isCircle() const;

    // vIndex: 7
    virtual bool isDoneLoading() const;

    // vIndex: 8
    virtual bool checkInitialLoadDone(struct Tick currentLevelTick);

    // vIndex: 9
    virtual bool checkLoadedChunkNeighborsDone(class BlockSource const& region, bool useDoneLoading) const;

    // vIndex: 10
    virtual void move(struct Bounds const& bounds);

    // vIndex: 11
    virtual std::unique_ptr<class ChunkViewSource> createChildSource();

    // vIndex: 12
    virtual std::shared_ptr<class LevelChunk> getAvailableChunk(class ChunkPos const& cp);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool
    _tickChunk(struct Tick const& currentTick, class BlockSource& region, class Level& level, class ChunkPos const& cp);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI bool checkInitialLoadDone$(struct Tick currentLevelTick);

    MCAPI bool checkLoadedChunkNeighborsDone$(class BlockSource const& region, bool useDoneLoading) const;

    MCAPI std::unique_ptr<class ChunkViewSource> createChildSource$();

    MCAPI std::shared_ptr<class LevelChunk> getAvailableChunk$(class ChunkPos const& cp);

    MCAPI struct Bounds const& getBounds$() const;

    MCAPI DimensionType getDimensionId$() const;

    MCAPI void init$(struct Bounds const& bounds, bool isCircle);

    MCAPI bool isCircle$() const;

    MCAPI bool isDoneLoading$() const;

    MCAPI void move$(struct Bounds const& bounds);

    MCAPI void tick$(struct Tick const& currentTick, class BlockSource& region, bool preload, bool randomize);

    MCAPI void tickSeasons$(class BlockSource& region, class Random& random);

    // NOLINTEND
};
