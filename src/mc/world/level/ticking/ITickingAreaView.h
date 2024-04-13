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
    // vIndex: 0, symbol: ??1ITickingAreaView@@UEAA@XZ
    virtual ~ITickingAreaView();

    // vIndex: 1, symbol: ?init@TickingAreaView@@UEAAXAEBUBounds@@_N@Z
    virtual void init(struct Bounds const& bounds, bool isCircle) = 0;

    // vIndex: 2, symbol: ?tick@TickingAreaView@@UEAAXAEBUTick@@AEAVBlockSource@@_N2@Z
    virtual void tick(struct Tick const& currentTick, class BlockSource& region, bool, bool randomize) = 0;

    // vIndex: 3, symbol: ?tickSeasons@TickingAreaView@@UEAAXAEAVBlockSource@@AEAVRandom@@@Z
    virtual void tickSeasons(class BlockSource& region, class Random& random) = 0;

    // vIndex: 4, symbol: ?getDimensionId@TickingAreaView@@UEBA?AV?$AutomaticID@VDimension@@H@@XZ
    virtual DimensionType getDimensionId() const = 0;

    // vIndex: 5, symbol: ?getBounds@TickingAreaView@@UEBAAEBUBounds@@XZ
    virtual struct Bounds const& getBounds() const = 0;

    // vIndex: 6, symbol: ?isCircle@TickingAreaView@@UEBA_NXZ
    virtual bool isCircle() const = 0;

    // vIndex: 7, symbol: ?isDoneLoading@TickingAreaView@@UEBA_NXZ
    virtual bool isDoneLoading() const = 0;

    // vIndex: 8, symbol: ?checkInitialLoadDone@TickingAreaView@@UEAA_NUTick@@@Z
    virtual bool checkInitialLoadDone(struct Tick currentLevelTick) = 0;

    // vIndex: 9, symbol: ?checkLoadedChunkNeighborsDone@TickingAreaView@@UEBA_NAEBVBlockSource@@_N@Z
    virtual bool checkLoadedChunkNeighborsDone(class BlockSource const& region, bool) const = 0;

    // vIndex: 10, symbol: ?move@TickingAreaView@@UEAAXAEBUBounds@@@Z
    virtual void move(struct Bounds const& bounds) = 0;

    // vIndex: 11, symbol:
    // ?createChildSource@TickingAreaView@@UEAA?AV?$unique_ptr@VChunkViewSource@@U?$default_delete@VChunkViewSource@@@std@@@std@@XZ
    virtual std::unique_ptr<class ChunkViewSource> createChildSource() = 0;

    // vIndex: 12, symbol: ?getAvailableChunk@TickingAreaView@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@@Z
    virtual std::shared_ptr<class LevelChunk> getAvailableChunk(class ChunkPos const& cp) = 0;

    // NOLINTEND
};
