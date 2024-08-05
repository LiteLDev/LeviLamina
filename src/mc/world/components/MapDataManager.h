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
    // vIndex: 0
    virtual ~MapDataManager();

    // vIndex: 1
    virtual class Bedrock::PubSub::Subscription
        registerOnCreateMapSavedDataCallback(std::function<void(class MapItemSavedData&)>);

    // vIndex: 2
    virtual void registerOnGameplayUserAddedSubscription(class GameplayUserManager&);

    // vIndex: 3
    virtual class MapItemSavedData& createMapSavedData(struct ActorUniqueID const&);

    // vIndex: 4
    virtual void requestMapInfo(struct ActorUniqueID, bool);

    // vIndex: 5
    virtual void _copyAndLockMap(struct ActorUniqueID, struct ActorUniqueID);

    MCAPI
    MapDataManager(class DimensionManager&, class LevelStorage*, std::unique_ptr<class IMapDataManagerOptions>, std::function<struct ActorUniqueID()>);

    MCAPI bool copyAndLockMap(struct ActorUniqueID, struct ActorUniqueID);

    MCAPI class MapItemSavedData&
    createMapSavedData(std::vector<struct ActorUniqueID> const&, class BlockPos const&, DimensionType, int);

    MCAPI class MapItemSavedData&
    createMapSavedData(struct ActorUniqueID const&, class BlockPos const&, DimensionType, int);

    MCAPI struct ActorUniqueID expandMapByID(struct ActorUniqueID, bool);

    MCAPI class MapItemSavedData* getMapSavedData(struct ActorUniqueID);

    MCAPI void onStartLeaveGame();

    MCAPI void registerOnSaveLevelDataSubscription(class LevelStorageManager&);

    MCAPI void setPacketSender(class PacketSender&);

    MCAPI void tick();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI class MapItemSavedData* _loadMapData(struct ActorUniqueID const&);

    MCAPI void _onSaveLevelData(class LevelStorage&);

    // NOLINTEND
};
