#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TickingAreaListBase {
public:
    // prevent constructor by default
    TickingAreaListBase& operator=(TickingAreaListBase const&);
    TickingAreaListBase(TickingAreaListBase const&);
    TickingAreaListBase();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TickingAreaListBase();

    // vIndex: 1
    virtual bool removeDistantEntityAreasAndCheckForRemoved(
        std::vector<class Vec3> const&                 playerPositions,
        std::function<void(class ITickingArea const&)> requeue,
        class LevelStorage&                            levelStorage
    );

    MCAPI void add(std::unique_ptr<class ITickingArea> area);

    MCAPI uint countEntityTickingAreas() const;

    MCAPI void destroyAreas();

    MCAPI std::vector<std::shared_ptr<class ITickingArea>> findStandaloneAreasContaining(class BlockPos const& position
    );

    MCAPI std::vector<std::shared_ptr<class ITickingArea>> findStandaloneAreasNamed(std::string const& name) const;

    MCAPI std::shared_ptr<class ITickingArea> getAreaFor(struct ActorUniqueID const& entityId) const;

    MCAPI std::vector<std::shared_ptr<class ITickingArea>> const& getAreas() const;

    MCAPI std::vector<struct TickingAreaDescription> getStandaloneTickingAreaDescriptions() const;

    MCAPI bool hasTickingAreaNamed(std::string const& name) const;

    MCAPI void processRemoves();

    MCAPI std::vector<struct TickingAreaDescription> removeAllStandaloneAreas(class LevelStorage& levelStorage);

    MCAPI std::vector<struct TickingAreaDescription> removeAreas(
        std::vector<std::shared_ptr<class ITickingArea>> const& areasToRemove,
        class LevelStorage&                                     levelStorage
    );

    MCAPI void tickSeasons(class Random& random);

    MCAPI void updateBlockSourceCurrentTick(struct Tick const& currentTick);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI bool removeDistantEntityAreasAndCheckForRemoved$(
        std::vector<class Vec3> const&                 playerPositions,
        std::function<void(class ITickingArea const&)> requeue,
        class LevelStorage&                            levelStorage
    );

    // NOLINTEND
};
