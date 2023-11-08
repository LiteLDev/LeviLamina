#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/components/MapDataManager.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class ServerMapDataManager : public ::MapDataManager {
public:
    // prevent constructor by default
    ServerMapDataManager& operator=(ServerMapDataManager const&);
    ServerMapDataManager(ServerMapDataManager const&);
    ServerMapDataManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ServerMapDataManager@@UEAA@XZ
    virtual ~ServerMapDataManager() = default;

    // vIndex: 1, symbol:
    // ?registerOnCreateMapSavedDataCallback@ServerMapDataManager@@UEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXAEAVMapItemSavedData@@@Z@std@@@Z
    virtual class Bedrock::PubSub::Subscription
        registerOnCreateMapSavedDataCallback(std::function<void(class MapItemSavedData&)>);

    // vIndex: 2, symbol:
    // ?registerOnGameplayUserAddedSubscription@ServerMapDataManager@@UEAAXAEAVGameplayUserManager@@@Z
    virtual void registerOnGameplayUserAddedSubscription(class GameplayUserManager&);

    // vIndex: 3, symbol: ?createMapSavedData@ServerMapDataManager@@UEAAAEAVMapItemSavedData@@AEBUActorUniqueID@@@Z
    virtual class MapItemSavedData& createMapSavedData(struct ActorUniqueID const&);

    // symbol:
    // ??0ServerMapDataManager@@QEAA@AEAVDimensionManager@@PEAVLevelStorage@@V?$unique_ptr@VIMapDataManagerOptions@@U?$default_delete@VIMapDataManagerOptions@@@std@@@std@@V?$function@$$A6A?AUActorUniqueID@@XZ@4@@Z
    MCAPI
    ServerMapDataManager(class DimensionManager&, class LevelStorage*, std::unique_ptr<class IMapDataManagerOptions>, std::function<struct ActorUniqueID(void)>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_onGameplayUserAdded@ServerMapDataManager@@AEAAXAEAVEntityContext@@@Z
    MCAPI void _onGameplayUserAdded(class EntityContext&);

    // NOLINTEND
};
