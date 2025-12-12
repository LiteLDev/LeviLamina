#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
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
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class ServerMapDataManager : public ::MapDataManager, public ::IServerMapDataManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::MapItemSavedData&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                                               mOnCreateMapSavedData;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserAdded;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerMapDataManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerMapDataManager() /*override*/ = default;

    // vIndex: 1
    virtual void
    registerOnGameplayUserAddedSubscription(::IGameplayUserManagerConnector& gameplayUserManagerConnector) /*override*/;

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
    MCNAPI static void** $vftableForIServerMapDataManagerConnector();

    MCNAPI static void** $vftableForMapDataManager();
    // NOLINTEND
};
