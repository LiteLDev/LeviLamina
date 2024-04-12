#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/enums/AddTickingAreaStatus.h"
#include "mc/enums/TickingAreaLoadMode.h"
#include "mc/world/AutomaticID.h"

class TickingAreasManager {
public:
    // TickingAreasManager inner types define
    enum class AreaLimitCheck {};

public:
    // prevent constructor by default
    TickingAreasManager& operator=(TickingAreasManager const&);
    TickingAreasManager(TickingAreasManager const&);
    TickingAreasManager();

public:
    // NOLINTBEGIN
    // symbol: ??0TickingAreasManager@@QEAA@AEBV?$StackRefResult@VLevelStorage@@@@@Z
    MCAPI explicit TickingAreasManager(class StackRefResult<class LevelStorage> const&);

    // symbol:
    // ?addArea@TickingAreasManager@@QEAA?AW4AddTickingAreaStatus@@V?$AutomaticID@VDimension@@H@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@2W4AreaLimitCheck@1@_NW4TickingAreaLoadMode@@AEAVLevelStorage@@@Z
    MCAPI ::AddTickingAreaStatus addArea(
        DimensionType         dimensionId,
        std::string const&    name,
        class BlockPos const& min,
        class BlockPos const& max,
        ::TickingAreasManager::AreaLimitCheck,
        bool,
        ::TickingAreaLoadMode loadMode,
        class LevelStorage&   levelStorage
    );

    // symbol:
    // ?addArea@TickingAreasManager@@QEAA?AW4AddTickingAreaStatus@@V?$AutomaticID@VDimension@@H@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@HW4AreaLimitCheck@1@_NW4TickingAreaLoadMode@@AEAVLevelStorage@@@Z
    MCAPI ::AddTickingAreaStatus addArea(
        DimensionType         dimensionId,
        std::string const&    name,
        class BlockPos const& center,
        int                   radius,
        ::TickingAreasManager::AreaLimitCheck,
        bool,
        ::TickingAreaLoadMode loadMode,
        class LevelStorage&   levelStorage
    );

    // symbol: ?addEntityArea@TickingAreasManager@@QEAAXV?$AutomaticID@VDimension@@H@@AEBVActor@@AEAVLevelStorage@@@Z
    MCAPI void addEntityArea(DimensionType dimensionId, class Actor const& actor, class LevelStorage& levelStorage);

    // symbol:
    // ?addEntityArea@TickingAreasManager@@QEAAXV?$AutomaticID@VDimension@@H@@AEBUActorUniqueID@@AEBUBounds@@_NMAEAVLevelStorage@@@Z
    MCAPI void addEntityArea(
        DimensionType               dimensionId,
        struct ActorUniqueID const& entityId,
        struct Bounds const&        bounds,
        bool                        alwaysActive,
        float                       maxDistToPlayers,
        class LevelStorage&         levelStorage
    );

    // symbol:
    // ?addTickingAreaListForDimension@TickingAreasManager@@QEAAXV?$AutomaticID@VDimension@@H@@AEBV?$shared_ptr@VTickingAreaList@@@std@@@Z
    MCAPI void addTickingAreaListForDimension(DimensionType dimensionId, std::shared_ptr<class TickingAreaList> const&);

    // symbol: ?countActiveStandaloneTickingAreas@TickingAreasManager@@QEBAIXZ
    MCAPI uint countActiveStandaloneTickingAreas() const;

    // symbol: ?countStandaloneTickingAreas@TickingAreasManager@@QEBAIXZ
    MCAPI uint countStandaloneTickingAreas() const;

    // symbol:
    // ?getPendingStandaloneAreaDescriptions@TickingAreasManager@@QEBA?AV?$vector@UTickingAreaDescription@@V?$allocator@UTickingAreaDescription@@@std@@@std@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI std::vector<struct TickingAreaDescription> getPendingStandaloneAreaDescriptions(DimensionType dimensionId
    ) const;

    // symbol:
    // ?getPendingStandaloneAreaDescriptionsByName@TickingAreasManager@@QEBA?AV?$vector@UTickingAreaDescription@@V?$allocator@UTickingAreaDescription@@@std@@@std@@V?$AutomaticID@VDimension@@H@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI std::vector<struct TickingAreaDescription>
          getPendingStandaloneAreaDescriptionsByName(DimensionType dimensionId, std::string const& name) const;

    // symbol:
    // ?getPendingStandaloneAreaDescriptionsByPosition@TickingAreasManager@@QEBA?AV?$vector@UTickingAreaDescription@@V?$allocator@UTickingAreaDescription@@@std@@@std@@V?$AutomaticID@VDimension@@H@@AEBVBlockPos@@@Z
    MCAPI std::vector<struct TickingAreaDescription>
    getPendingStandaloneAreaDescriptionsByPosition(DimensionType dimensionId, class BlockPos const& position) const;

    // symbol: ?hasActiveAreas@TickingAreasManager@@QEBA_NXZ
    MCAPI bool hasActiveAreas() const;

    // symbol: ?isPreloadDone@TickingAreasManager@@QEBA_NXZ
    MCAPI bool isPreloadDone() const;

    // symbol:
    // ?loadArea@TickingAreasManager@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVCompoundTag@@@Z
    MCAPI void loadArea(std::string const& key, class CompoundTag const* tag);

    // symbol: ?loadAreasFromSaveData@TickingAreasManager@@QEAAXAEAVLevelStorage@@@Z
    MCAPI void loadAreasFromSaveData(class LevelStorage&);

    // symbol:
    // ?onTickingEntityAdded@TickingAreasManager@@QEAAXV?$AutomaticID@VDimension@@H@@AEAVActor@@AEAVLevelStorage@@@Z
    MCAPI void onTickingEntityAdded(DimensionType dimensionId, class Actor& actor, class LevelStorage& levelStorage);

    // symbol: ?registerForActorManagerEvents@TickingAreasManager@@QEAAXAEAVActorManager@@@Z
    MCAPI void registerForActorManagerEvents(class ActorManager&);

    // symbol: ?registerForLevelStorageManagerEvents@TickingAreasManager@@QEAAXAEAVLevelStorageManager@@@Z
    MCAPI void registerForLevelStorageManagerEvents(class LevelStorageManager&);

    // symbol:
    // ?removePendingAreaByName@TickingAreasManager@@QEAA?AV?$vector@UTickingAreaDescription@@V?$allocator@UTickingAreaDescription@@@std@@@std@@V?$AutomaticID@VDimension@@H@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEAVLevelStorage@@@Z
    MCAPI std::vector<struct TickingAreaDescription>
          removePendingAreaByName(DimensionType dimensionId, std::string const& name, class LevelStorage& levelStorage);

    // symbol:
    // ?removePendingAreaByPosition@TickingAreasManager@@QEAA?AV?$vector@UTickingAreaDescription@@V?$allocator@UTickingAreaDescription@@@std@@@std@@V?$AutomaticID@VDimension@@H@@AEBVBlockPos@@AEAVLevelStorage@@@Z
    MCAPI std::vector<struct TickingAreaDescription> removePendingAreaByPosition(
        DimensionType         dimensionId,
        class BlockPos const& position,
        class LevelStorage&   levelStorage
    );

    // symbol:
    // ?setPendingAreaLoadModeByName@TickingAreasManager@@QEAA?AV?$vector@UTickingAreaDescription@@V?$allocator@UTickingAreaDescription@@@std@@@std@@V?$AutomaticID@VDimension@@H@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@W4TickingAreaLoadMode@@AEAVLevelStorage@@@Z
    MCAPI std::vector<struct TickingAreaDescription> setPendingAreaLoadModeByName(
        DimensionType         dimensionId,
        std::string const&    name,
        ::TickingAreaLoadMode loadMode,
        class LevelStorage&   levelStorage
    );

    // symbol:
    // ?setPendingAreaLoadModeByPosition@TickingAreasManager@@QEAA?AV?$vector@UTickingAreaDescription@@V?$allocator@UTickingAreaDescription@@@std@@@std@@V?$AutomaticID@VDimension@@H@@AEBVBlockPos@@W4TickingAreaLoadMode@@AEAVLevelStorage@@@Z
    MCAPI std::vector<struct TickingAreaDescription> setPendingAreaLoadModeByPosition(
        DimensionType         dimensionId,
        class BlockPos const& position,
        ::TickingAreaLoadMode loadMode,
        class LevelStorage&   levelStorage
    );

    // symbol: ?tick@TickingAreasManager@@QEAAXAEBUTick@@@Z
    MCAPI void tick(struct Tick const& currentTick);

    // symbol: ?update@TickingAreasManager@@QEAAXAEAVLevel@@AEAVLevelStorage@@@Z
    MCAPI void update(class Level& level, class LevelStorage& levelStorage);

    // symbol: ?getLimitCheck@TickingAreasManager@@SA?AW4AreaLimitCheck@1@AEBVLevel@@_N@Z
    MCAPI static ::TickingAreasManager::AreaLimitCheck getLimitCheck(class Level const& level, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_addArea@TickingAreasManager@@AEAA?AW4AddTickingAreaStatus@@V?$AutomaticID@VDimension@@H@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUBounds@@_NW4AreaLimitCheck@1@3W4TickingAreaLoadMode@@AEAVLevelStorage@@@Z
    MCAPI ::AddTickingAreaStatus _addArea(
        DimensionType        dimensionId,
        std::string const&   name,
        struct Bounds const& bounds,
        bool                 isCircle,
        ::TickingAreasManager::AreaLimitCheck,
        bool,
        ::TickingAreaLoadMode loadMode,
        class LevelStorage&   levelStorage
    );

    // symbol: ?_deletePendingArea@TickingAreasManager@@AEAAXAEAVLevelStorage@@AEBUPendingArea@@@Z
    MCAPI void _deletePendingArea(class LevelStorage& levelStorage, struct PendingArea const& pendingArea);

    // symbol:
    // ?_findUsableDefaultName@TickingAreasManager@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVTickingAreaList@@AEBV?$vector@UPendingArea@@V?$allocator@UPendingArea@@@std@@@3@@Z
    MCAPI std::string
          _findUsableDefaultName(class TickingAreaList const&, std::vector<struct PendingArea> const&) const;

    // symbol:
    // ?_getPendingAreaDescriptionsFiltered@TickingAreasManager@@AEBA?AV?$vector@UTickingAreaDescription@@V?$allocator@UTickingAreaDescription@@@std@@@std@@V?$AutomaticID@VDimension@@H@@V?$function@$$A6A_NAEBUPendingArea@@@Z@3@@Z
    MCAPI std::vector<struct TickingAreaDescription>
          _getPendingAreaDescriptionsFiltered(DimensionType dimensionId, std::function<bool(struct PendingArea const&)>)
        const;

    // symbol:
    // ?_hasPendingTickingAreaNamed@TickingAreasManager@@AEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@UPendingArea@@V?$allocator@UPendingArea@@@std@@@3@@Z
    MCAPI bool
    _hasPendingTickingAreaNamed(std::string const& name, std::vector<struct PendingArea> const& dimensionAreas) const;

    // symbol: ?_postReloadActorAdded@TickingAreasManager@@AEAAXAEAVActor@@@Z
    MCAPI void _postReloadActorAdded(class Actor&);

    // symbol: ?_processAdds@TickingAreasManager@@AEAAXAEAVLevel@@@Z
    MCAPI void _processAdds(class Level& level);

    // symbol:
    // ?_processRemoves@TickingAreasManager@@AEAAXV?$AutomaticID@VDimension@@H@@AEAVTickingAreaList@@AEAVLevel@@AEAVLevelStorage@@@Z
    MCAPI void _processRemoves(
        DimensionType          dimensionId,
        class TickingAreaList& list,
        class Level&           level,
        class LevelStorage&    levelStorage
    );

    // symbol:
    // ?_savePendingArea@TickingAreasManager@@AEAAXAEAVLevelStorage@@V?$AutomaticID@VDimension@@H@@AEBUPendingArea@@@Z
    MCAPI void _savePendingArea(
        class LevelStorage&       levelStorage,
        DimensionType             dimensionId,
        struct PendingArea const& pendingArea
    );

    // NOLINTEND
};
