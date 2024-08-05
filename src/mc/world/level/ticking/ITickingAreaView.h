#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class ITickingAreaView {
public:
    // prevent constructor by default
    ITickingAreaView& operator=(ITickingAreaView const&);
    ITickingAreaView(ITickingAreaView const&);
    ITickingAreaView();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ITickingAreaView();

    // vIndex: 1
    virtual void init(struct Bounds const& bounds, bool isCircle) = 0;

    // vIndex: 2
    virtual void tick(struct Tick const& currentTick, class BlockSource& region, bool, bool randomize) = 0;

    // vIndex: 3
    virtual void tickSeasons(class BlockSource& region, class Random& random) = 0;

    // vIndex: 4
    virtual DimensionType getDimensionId() const = 0;

    // vIndex: 5
    virtual struct Bounds const& getBounds() const = 0;

    // vIndex: 6
    virtual bool isCircle() const = 0;

    // vIndex: 7
    virtual bool isDoneLoading() const = 0;

    // vIndex: 8
    virtual bool checkInitialLoadDone(struct Tick currentLevelTick) = 0;

    // vIndex: 9
    virtual bool checkLoadedChunkNeighborsDone(class BlockSource const& region, bool) const = 0;

    // vIndex: 10
    virtual void move(struct Bounds const& bounds) = 0;

    // vIndex: 11
    virtual std::unique_ptr<class ChunkViewSource> createChildSource() = 0;

    // vIndex: 12
    virtual std::shared_ptr<class LevelChunk> getAvailableChunk(class ChunkPos const& cp) = 0;

    // NOLINTEND
};
