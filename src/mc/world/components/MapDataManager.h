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

    // vIndex: 4, symbol: ?requestMapInfo@MapDataManager@@UEAAXUActorUniqueID@@_N@Z
    virtual void requestMapInfo(struct ActorUniqueID, bool);

    // vIndex: 5, symbol: ?_copyAndLockMap@MapDataManager@@MEAAXUActorUniqueID@@0@Z
    virtual void _copyAndLockMap(struct ActorUniqueID, struct ActorUniqueID);

    // symbol:
    // ??0MapDataManager@@QEAA@AEAVDimensionManager@@PEAVLevelStorage@@V?$unique_ptr@VIMapDataManagerOptions@@U?$default_delete@VIMapDataManagerOptions@@@std@@@std@@V?$function@$$A6A?AUActorUniqueID@@XZ@4@@Z
    MCAPI
    MapDataManager(class DimensionManager&, class LevelStorage*, std::unique_ptr<class IMapDataManagerOptions>, std::function<struct ActorUniqueID()>);

    // symbol: ?copyAndLockMap@MapDataManager@@QEAA_NUActorUniqueID@@0@Z
    MCAPI bool copyAndLockMap(struct ActorUniqueID, struct ActorUniqueID);

    // symbol:
    // ?createMapSavedData@MapDataManager@@QEAAAEAVMapItemSavedData@@AEBV?$vector@UActorUniqueID@@V?$allocator@UActorUniqueID@@@std@@@std@@AEBVBlockPos@@V?$AutomaticID@VDimension@@H@@H@Z
    MCAPI class MapItemSavedData&
    createMapSavedData(std::vector<struct ActorUniqueID> const&, class BlockPos const&, DimensionType, int);

    // symbol:
    // ?createMapSavedData@MapDataManager@@QEAAAEAVMapItemSavedData@@AEBUActorUniqueID@@AEBVBlockPos@@V?$AutomaticID@VDimension@@H@@H@Z
    MCAPI class MapItemSavedData&
    createMapSavedData(struct ActorUniqueID const&, class BlockPos const&, DimensionType, int);

    // symbol: ?expandMapByID@MapDataManager@@QEAA?AUActorUniqueID@@U2@_N@Z
    MCAPI struct ActorUniqueID expandMapByID(struct ActorUniqueID, bool);

    // symbol: ?getMapSavedData@MapDataManager@@QEAAPEAVMapItemSavedData@@UActorUniqueID@@@Z
    MCAPI class MapItemSavedData* getMapSavedData(struct ActorUniqueID);

    // symbol: ?onStartLeaveGame@MapDataManager@@QEAAXXZ
    MCAPI void onStartLeaveGame();

    // symbol: ?registerOnSaveLevelDataSubscription@MapDataManager@@QEAAXAEAVLevelStorageManager@@@Z
    MCAPI void registerOnSaveLevelDataSubscription(class LevelStorageManager&);

    // symbol: ?setPacketSender@MapDataManager@@QEAAXAEAVPacketSender@@@Z
    MCAPI void setPacketSender(class PacketSender&);

    // symbol: ?tick@MapDataManager@@QEAAXXZ
    MCAPI void tick();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_loadMapData@MapDataManager@@IEAAPEAVMapItemSavedData@@AEBUActorUniqueID@@@Z
    MCAPI class MapItemSavedData* _loadMapData(struct ActorUniqueID const&);

    // symbol: ?_onSaveLevelData@MapDataManager@@IEAAXAEAVLevelStorage@@@Z
    MCAPI void _onSaveLevelData(class LevelStorage&);

    // NOLINTEND
};
