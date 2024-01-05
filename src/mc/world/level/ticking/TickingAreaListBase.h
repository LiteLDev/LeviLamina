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
    // vIndex: 0, symbol: ??1TickingAreaListBase@@UEAA@XZ
    virtual ~TickingAreaListBase();

    // vIndex: 1, symbol:
    // ?removeDistantEntityAreasAndCheckForRemoved@TickingAreaListBase@@UEAA_NAEBV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@V?$function@$$A6AXAEBVITickingArea@@@Z@3@AEAVLevelStorage@@@Z
    virtual bool removeDistantEntityAreasAndCheckForRemoved(
        std::vector<class Vec3> const&                 playerPositions,
        std::function<void(class ITickingArea const&)> requeue,
        class LevelStorage&                            levelStorage
    );

    // symbol:
    // ?add@TickingAreaListBase@@QEAAXV?$unique_ptr@VITickingArea@@U?$default_delete@VITickingArea@@@std@@@std@@@Z
    MCAPI void add(std::unique_ptr<class ITickingArea> area);

    // symbol: ?countEntityTickingAreas@TickingAreaListBase@@QEBAIXZ
    MCAPI uint countEntityTickingAreas() const;

    // symbol: ?destroyAreas@TickingAreaListBase@@QEAAXXZ
    MCAPI void destroyAreas();

    // symbol:
    // ?findStandaloneAreasContaining@TickingAreaListBase@@QEAA?AV?$vector@V?$shared_ptr@VITickingArea@@@std@@V?$allocator@V?$shared_ptr@VITickingArea@@@std@@@2@@std@@AEBVBlockPos@@@Z
    MCAPI std::vector<std::shared_ptr<class ITickingArea>> findStandaloneAreasContaining(class BlockPos const& position
    );

    // symbol:
    // ?findStandaloneAreasNamed@TickingAreaListBase@@QEBA?AV?$vector@V?$shared_ptr@VITickingArea@@@std@@V?$allocator@V?$shared_ptr@VITickingArea@@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI std::vector<std::shared_ptr<class ITickingArea>> findStandaloneAreasNamed(std::string const& name) const;

    // symbol: ?getAreaFor@TickingAreaListBase@@QEBA?AV?$shared_ptr@VITickingArea@@@std@@AEBUActorUniqueID@@@Z
    MCAPI std::shared_ptr<class ITickingArea> getAreaFor(struct ActorUniqueID const& entityId) const;

    // symbol:
    // ?getAreas@TickingAreaListBase@@QEBAAEBV?$vector@V?$shared_ptr@VITickingArea@@@std@@V?$allocator@V?$shared_ptr@VITickingArea@@@std@@@2@@std@@XZ
    MCAPI std::vector<std::shared_ptr<class ITickingArea>> const& getAreas() const;

    // symbol:
    // ?getStandaloneTickingAreaDescriptions@TickingAreaListBase@@QEBA?AV?$vector@UTickingAreaDescription@@V?$allocator@UTickingAreaDescription@@@std@@@std@@XZ
    MCAPI std::vector<struct TickingAreaDescription> getStandaloneTickingAreaDescriptions() const;

    // symbol:
    // ?hasTickingAreaNamed@TickingAreaListBase@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool hasTickingAreaNamed(std::string const& name) const;

    // symbol: ?processRemoves@TickingAreaListBase@@QEAAXXZ
    MCAPI void processRemoves();

    // symbol:
    // ?removeAllStandaloneAreas@TickingAreaListBase@@QEAA?AV?$vector@UTickingAreaDescription@@V?$allocator@UTickingAreaDescription@@@std@@@std@@AEAVLevelStorage@@@Z
    MCAPI std::vector<struct TickingAreaDescription> removeAllStandaloneAreas(class LevelStorage& levelStorage);

    // symbol:
    // ?removeAreas@TickingAreaListBase@@QEAA?AV?$vector@UTickingAreaDescription@@V?$allocator@UTickingAreaDescription@@@std@@@std@@AEBV?$vector@V?$shared_ptr@VITickingArea@@@std@@V?$allocator@V?$shared_ptr@VITickingArea@@@std@@@2@@3@AEAVLevelStorage@@@Z
    MCAPI std::vector<struct TickingAreaDescription> removeAreas(
        std::vector<std::shared_ptr<class ITickingArea>> const& areasToRemove,
        class LevelStorage&                                     levelStorage
    );

    // symbol: ?tickSeasons@TickingAreaListBase@@QEAAXAEAVRandom@@@Z
    MCAPI void tickSeasons(class Random& random);

    // symbol: ?updateBlockSourceCurrentTick@TickingAreaListBase@@QEAAXAEBUTick@@@Z
    MCAPI void updateBlockSourceCurrentTick(struct Tick const& currentTick);

    // NOLINTEND
};
