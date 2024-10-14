#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

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
    registerOnCreateMapSavedDataCallback(std::function<void(class MapItemSavedData&)> callback);

    // vIndex: 2
    virtual void registerOnGameplayUserAddedSubscription(class GameplayUserManager&);

    // vIndex: 3
    virtual class MapItemSavedData& createMapSavedData(struct ActorUniqueID const& uuid);

    // vIndex: 4
    virtual void requestMapInfo(struct ActorUniqueID uuid, bool forceUpdate);

    // vIndex: 5
    virtual void _copyAndLockMap(struct ActorUniqueID originalMapUuid, struct ActorUniqueID newMapUuid);

    MCAPI MapDataManager(
        class DimensionManager&                       dimensionManager,
        class LevelStorage*                           levelStorage,
        std::unique_ptr<class IMapDataManagerOptions> mapDataManagerOptions,
        std::function<struct ActorUniqueID()>         getNewUniqueID
    );

    MCAPI bool copyAndLockMap(struct ActorUniqueID originalMapUuid, struct ActorUniqueID newMapUuid);

    MCAPI class MapItemSavedData& createMapSavedData(
        std::vector<struct ActorUniqueID> const& mapIds,
        class BlockPos const&                    origin,
        DimensionType                            dimension,
        int                                      returnScaleLevel
    );

    MCAPI class MapItemSavedData& createMapSavedData(
        struct ActorUniqueID const& uuid,
        class BlockPos const&       origin,
        DimensionType               dimension,
        int                         returnScaleLevel
    );

    MCAPI struct ActorUniqueID expandMapByID(struct ActorUniqueID uuid, bool wasInit);

    MCAPI class MapItemSavedData* getMapSavedData(struct ActorUniqueID uuid);

    MCAPI void onStartLeaveGame();

    MCAPI void registerOnSaveLevelDataSubscription(class LevelStorageManager& levelStorageManager);

    MCAPI void setPacketSender(class PacketSender& packetSender);

    MCAPI void tick();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI class MapItemSavedData* _loadMapData(struct ActorUniqueID const& uuid);

    MCAPI void _onSaveLevelData(class LevelStorage& levelStorage);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI void _copyAndLockMap$(struct ActorUniqueID originalMapUuid, struct ActorUniqueID newMapUuid);

    MCAPI class MapItemSavedData& createMapSavedData$(struct ActorUniqueID const& uuid);

    MCAPI class Bedrock::PubSub::Subscription
    registerOnCreateMapSavedDataCallback$(std::function<void(class MapItemSavedData&)> callback);

    MCAPI void registerOnGameplayUserAddedSubscription$(class GameplayUserManager&);

    MCAPI void requestMapInfo$(struct ActorUniqueID uuid, bool forceUpdate);

    // NOLINTEND
};
