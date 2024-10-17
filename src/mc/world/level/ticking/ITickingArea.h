#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/ticking/TickingAreaLoadMode.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ITickingArea {
public:
    // prevent constructor by default
    ITickingArea& operator=(ITickingArea const&);
    ITickingArea(ITickingArea const&);
    ITickingArea();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ITickingArea();

    // vIndex: 1
    virtual class mce::UUID const& getId() const = 0;

    // vIndex: 2
    virtual std::string const& getName() const = 0;

    // vIndex: 3
    virtual struct ActorUniqueID const& getEntityId() const = 0;

    // vIndex: 4
    virtual bool isEntityOwned() const = 0;

    // vIndex: 5
    virtual class WeakRef<class BlockSource> const getBlockSource() const = 0;

    // vIndex: 6
    virtual class WeakRef<class BlockSource> getBlockSource() = 0;

    // vIndex: 7
    virtual struct Bounds const& getBounds() const = 0;

    // vIndex: 8
    virtual bool isAlwaysActive() const = 0;

    // vIndex: 9
    virtual float getMaxDistToPlayers() const = 0;

    // vIndex: 10
    virtual class ITickingAreaView const& getView() const = 0;

    // vIndex: 11
    virtual class ITickingAreaView& getView() = 0;

    // vIndex: 12
    virtual struct TickingAreaDescription getDescription() const = 0;

    // vIndex: 13
    virtual ::TickingAreaLoadMode getLoadMode() const = 0;

    // vIndex: 14
    virtual void setLoadMode(::TickingAreaLoadMode loadMode, class LevelStorage& levelStorage) = 0;

    // vIndex: 15
    virtual bool isPreloadDone() const = 0;

    // vIndex: 16
    virtual void tick(struct Tick const& currentTick, bool randomize) = 0;

    // vIndex: 17
    virtual void tickSeasons(class Random& random) = 0;

    // vIndex: 18
    virtual void updatePosition(class Vec3 const& pos) = 0;

    // vIndex: 19
    virtual void updateAndCenter(class LevelStorage& levelStorage, struct Tick currentLevelTick) = 0;

    // vIndex: 20
    virtual class Actor* findOwner(uchar& pendingChunks) = 0;

    // vIndex: 21
    virtual bool entityHasBeenFound() const = 0;

    // vIndex: 22
    virtual void setEntityFound() = 0;

    // vIndex: 23
    virtual bool isRemoved() = 0;

    // vIndex: 24
    virtual void remove(class LevelStorage& levelStorage) = 0;

    // vIndex: 25
    virtual void
    onComponentChanged(uint radius, float maxDistToPlayers, bool alwaysActive, class LevelStorage& levelStorage) = 0;

    // vIndex: 26
    virtual void updateBlockSourceCurrentTick(struct Tick const& currentTick) = 0;

    MCAPI class CompoundTag serialize() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    // NOLINTEND
};
