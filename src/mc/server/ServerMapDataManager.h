#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/MapDataManager.h"

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
    // vIndex: 0
    virtual ~ServerMapDataManager() = default;

    // vIndex: 1
    virtual class Bedrock::PubSub::Subscription
    registerOnCreateMapSavedDataCallback(std::function<void(class MapItemSavedData&)> callback);

    // vIndex: 2
    virtual void registerOnGameplayUserAddedSubscription(class GameplayUserManager& gameplayUserManager);

    // vIndex: 3
    virtual class MapItemSavedData& createMapSavedData(struct ActorUniqueID const& uuid);

    // vIndex: 4
    virtual void requestMapInfo(struct ActorUniqueID, bool);

    // vIndex: 5
    virtual void _copyAndLockMap(struct ActorUniqueID originalMapUuid, struct ActorUniqueID newMapUuid);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _onGameplayUserAdded(class EntityContext& entity);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void _copyAndLockMap$(struct ActorUniqueID originalMapUuid, struct ActorUniqueID newMapUuid);

    MCAPI class MapItemSavedData& createMapSavedData$(struct ActorUniqueID const& uuid);

    MCAPI class Bedrock::PubSub::Subscription
    registerOnCreateMapSavedDataCallback$(std::function<void(class MapItemSavedData&)> callback);

    MCAPI void registerOnGameplayUserAddedSubscription$(class GameplayUserManager& gameplayUserManager);

    MCAPI void requestMapInfo$(struct ActorUniqueID, bool);

    // NOLINTEND
};
