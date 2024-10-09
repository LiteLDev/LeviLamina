#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/ticking/ITickingArea.h"
#include "mc/world/level/ticking/TickingAreaLoadMode.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class TickingArea : public ::ITickingArea {
public:
    // prevent constructor by default
    TickingArea& operator=(TickingArea const&);
    TickingArea(TickingArea const&);
    TickingArea();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TickingArea();

    // vIndex: 1
    virtual class mce::UUID const& getId() const;

    // vIndex: 2
    virtual std::string const& getName() const;

    // vIndex: 3
    virtual struct ActorUniqueID const& getEntityId() const;

    // vIndex: 4
    virtual bool isEntityOwned() const;

    // vIndex: 5
    virtual class WeakRef<class BlockSource> const getBlockSource() const;

    // vIndex: 6
    virtual class WeakRef<class BlockSource> getBlockSource();

    // vIndex: 7
    virtual struct Bounds const& getBounds() const;

    // vIndex: 8
    virtual bool isAlwaysActive() const;

    // vIndex: 9
    virtual float getMaxDistToPlayers() const;

    // vIndex: 10
    virtual class ITickingAreaView const& getView() const;

    // vIndex: 11
    virtual class ITickingAreaView& getView();

    // vIndex: 12
    virtual struct TickingAreaDescription getDescription() const;

    // vIndex: 13
    virtual ::TickingAreaLoadMode getLoadMode() const;

    // vIndex: 14
    virtual void setLoadMode(::TickingAreaLoadMode loadMode, class LevelStorage& levelStorage);

    // vIndex: 15
    virtual bool isPreloadDone() const;

    // vIndex: 16
    virtual void tick(struct Tick const& currentTick, bool randomize);

    // vIndex: 17
    virtual void tickSeasons(class Random& random);

    // vIndex: 18
    virtual void updatePosition(class Vec3 const& pos);

    // vIndex: 19
    virtual void updateAndCenter(class LevelStorage& levelStorage, struct Tick currentLevelTick);

    // vIndex: 20
    virtual class Actor* findOwner(uchar& pendingChunks);

    // vIndex: 21
    virtual bool entityHasBeenFound() const;

    // vIndex: 22
    virtual void setEntityFound();

    // vIndex: 23
    virtual bool isRemoved();

    // vIndex: 24
    virtual void remove(class LevelStorage& levelStorage);

    // vIndex: 25
    virtual void
    onComponentChanged(uint radius, float maxDistToPlayers, bool alwaysActive, class LevelStorage& levelStorage);

    // vIndex: 26
    virtual void updateBlockSourceCurrentTick(struct Tick const& currentTick);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI TickingArea(
        class Dimension&      dimension,
        class mce::UUID       uniqueId,
        std::string const&    name,
        struct ActorUniqueID  entityId,
        struct Bounds const&  bounds,
        bool                  isCircle,
        float                 maxDistToPlayers,
        bool                  alwaysActive,
        ::TickingAreaLoadMode loadMode
    );

    MCAPI void _center(class LevelStorage& levelStorage);

    MCAPI void _save(class LevelStorage& levelStorage);

    // NOLINTEND
};
