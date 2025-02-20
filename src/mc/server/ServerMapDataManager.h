#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/server/IServerMapDataManagerConnector.h"
#include "mc/world/level/MapDataManager.h"

// auto generated forward declare list
// clang-format off
class DimensionManager;
class EntityContext;
class IGameplayUserManagerConnector;
class IMapDataManagerOptions;
class LevelStorage;
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
    virtual ~ServerMapDataManager() /*override*/ = default;

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
    MCAPI ServerMapDataManager(
        ::DimensionManager&                         dimensionManager,
        ::LevelStorage*                             levelStorage,
        ::std::unique_ptr<::IMapDataManagerOptions> mapDataManagerOptions,
        ::std::function<::ActorUniqueID()>          getNewUniqueID
    );

    MCAPI void _onGameplayUserAdded(::EntityContext& entity);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::DimensionManager&                         dimensionManager,
        ::LevelStorage*                             levelStorage,
        ::std::unique_ptr<::IMapDataManagerOptions> mapDataManagerOptions,
        ::std::function<::ActorUniqueID()>          getNewUniqueID
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $registerOnGameplayUserAddedSubscription(::IGameplayUserManagerConnector& gameplayUserManagerConnector);

    MCFOLD ::Bedrock::PubSub::Connector<void(::MapItemSavedData&)>& $getOnCreateMapSavedDataConnector();

    MCAPI ::MapItemSavedData& $createMapSavedData(::ActorUniqueID const& uuid);

    MCFOLD void $requestMapInfo(::ActorUniqueID const uuid, bool forceUpdate);

    MCAPI void $_copyAndLockMap(::ActorUniqueID const originalMapUuid, ::ActorUniqueID const newMapUuid);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForIServerMapDataManagerConnector();

    MCAPI static void** $vftableForMapDataManager();
    // NOLINTEND
};
