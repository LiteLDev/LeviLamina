#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/server/IServerMapDataManagerConnector.h"
#include "mc/world/level/MapDataManager.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class IGameplayUserManagerConnector;
class MapItemSavedData;
struct ActorUniqueID;
// clang-format on

class ServerMapDataManager : public ::MapDataManager, public ::IServerMapDataManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnkd83502;
    ::ll::UntypedStorage<8, 16>  mUnk3a525e;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerMapDataManager& operator=(ServerMapDataManager const&);
    ServerMapDataManager(ServerMapDataManager const&);
    ServerMapDataManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerMapDataManager() /*override*/;

    // vIndex: 1
    virtual void registerOnGameplayUserAddedSubscription(::IGameplayUserManagerConnector& gameplayUserManagerConnector
    ) /*override*/;

    // vIndex: 0
    virtual ::Bedrock::PubSub::Connector<void(::MapItemSavedData&)>& getOnCreateMapSavedDataConnector() /*override*/;

    // vIndex: 2
    virtual ::MapItemSavedData& createMapSavedData(::ActorUniqueID const& uuid) /*override*/;

    // vIndex: 3
    virtual void requestMapInfo(::ActorUniqueID const uuid, bool forceUpdate) /*override*/;

    // vIndex: 4
    virtual void _copyAndLockMap(::ActorUniqueID const originalMapUuid, ::ActorUniqueID const newMapUuid) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _onGameplayUserAdded(::EntityContext& entity);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $registerOnGameplayUserAddedSubscription(::IGameplayUserManagerConnector& gameplayUserManagerConnector);

    MCAPI ::Bedrock::PubSub::Connector<void(::MapItemSavedData&)>& $getOnCreateMapSavedDataConnector();

    MCAPI ::MapItemSavedData& $createMapSavedData(::ActorUniqueID const& uuid);

    MCAPI void $requestMapInfo(::ActorUniqueID const uuid, bool forceUpdate);

    MCAPI void $_copyAndLockMap(::ActorUniqueID const originalMapUuid, ::ActorUniqueID const newMapUuid);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForIServerMapDataManagerConnector();

    MCAPI static void** $vftableForMapDataManager();
    // NOLINTEND
};
