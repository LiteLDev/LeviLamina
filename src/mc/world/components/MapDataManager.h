#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class MapDataManager {
public:
    // prevent constructor by default
    MapDataManager& operator=(MapDataManager const&);
    MapDataManager(MapDataManager const&);
    MapDataManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1MapDataManager@@UEAA@XZ
    virtual ~MapDataManager();

    // vIndex: 1, symbol:
    // ?registerOnCreateMapSavedDataCallback@MapDataManager@@UEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXAEAVMapItemSavedData@@@Z@std@@@Z
    virtual class Bedrock::PubSub::Subscription
        registerOnCreateMapSavedDataCallback(std::function<void(class MapItemSavedData&)>);

    // vIndex: 2, symbol: ?registerOnGameplayUserAddedSubscription@MapDataManager@@UEAAXAEAVGameplayUserManager@@@Z
    virtual void registerOnGameplayUserAddedSubscription(class GameplayUserManager&);

    // vIndex: 3, symbol: ?createMapSavedData@MapDataManager@@UEAAAEAVMapItemSavedData@@AEBUActorUniqueID@@@Z
    virtual class MapItemSavedData& createMapSavedData(struct ActorUniqueID const&);

    // symbol:
    // ??0MapDataManager@@QEAA@AEAVDimensionManager@@PEAVLevelStorage@@V?$unique_ptr@VIMapDataManagerOptions@@U?$default_delete@VIMapDataManagerOptions@@@std@@@std@@V?$function@$$A6A?AUActorUniqueID@@XZ@4@@Z
    MCAPI
    MapDataManager(class DimensionManager&, class LevelStorage*, std::unique_ptr<class IMapDataManagerOptions>, std::function<struct ActorUniqueID(void)>);

    // symbol:
    // ?createMapSavedData@MapDataManager@@QEAAAEAVMapItemSavedData@@AEBV?$vector@UActorUniqueID@@V?$allocator@UActorUniqueID@@@std@@@std@@AEBVBlockPos@@V?$AutomaticID@VDimension@@H@@H@Z
    MCAPI class MapItemSavedData&
    createMapSavedData(std::vector<struct ActorUniqueID> const&, class BlockPos const&, DimensionType, int);

    // symbol:
    // ?createMapSavedData@MapDataManager@@QEAAAEAVMapItemSavedData@@AEBUActorUniqueID@@AEBVBlockPos@@V?$AutomaticID@VDimension@@H@@H@Z
    MCAPI class MapItemSavedData&
    createMapSavedData(struct ActorUniqueID const&, class BlockPos const&, DimensionType, int);

    // symbol:
    // ?getAllMapData@MapDataManager@@QEAAAEAV?$unordered_map@UActorUniqueID@@V?$unique_ptr@VMapItemSavedData@@U?$default_delete@VMapItemSavedData@@@std@@@std@@U?$hash@UActorUniqueID@@@3@U?$equal_to@UActorUniqueID@@@3@V?$allocator@U?$pair@$$CBUActorUniqueID@@V?$unique_ptr@VMapItemSavedData@@U?$default_delete@VMapItemSavedData@@@std@@@std@@@std@@@3@@std@@XZ
    MCAPI std::unordered_map<struct ActorUniqueID, std::unique_ptr<class MapItemSavedData>>& getAllMapData();

    // symbol: ?getMapSavedData@MapDataManager@@QEAAPEAVMapItemSavedData@@UActorUniqueID@@@Z
    MCAPI class MapItemSavedData* getMapSavedData(struct ActorUniqueID);

    // symbol: ?registerOnSaveLevelDataSubscription@MapDataManager@@QEAAXAEAVLevelStorageManager@@@Z
    MCAPI void registerOnSaveLevelDataSubscription(class LevelStorageManager&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_loadMapData@MapDataManager@@IEAAPEAVMapItemSavedData@@AEBUActorUniqueID@@@Z
    MCAPI class MapItemSavedData* _loadMapData(struct ActorUniqueID const&);

    // symbol: ?_onSaveLevelData@MapDataManager@@IEAAXAEAVLevelStorage@@@Z
    MCAPI void _onSaveLevelData(class LevelStorage&);

    // NOLINTEND
};
