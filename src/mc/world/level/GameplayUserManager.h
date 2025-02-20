#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/level/IGameplayUserManagerConnector.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class GameplayUserManagerProxy;
class ILevelStorageManagerConnector;
class IServerMapDataManagerConnector;
class LevelStorage;
class MapItemSavedData;
class Player;
class WeakEntityRef;
// clang-format on

class GameplayUserManager : public ::IGameplayUserManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnkc721ae;
    ::ll::UntypedStorage<8, 24>  mUnk9fd09f;
    ::ll::UntypedStorage<8, 24>  mUnk6fd064;
    ::ll::UntypedStorage<8, 24>  mUnk3bf0f4;
    ::ll::UntypedStorage<8, 128> mUnk5e4bf4;
    ::ll::UntypedStorage<8, 128> mUnk50f4c2;
    ::ll::UntypedStorage<8, 128> mUnkbc53b2;
    ::ll::UntypedStorage<8, 128> mUnkbe62f5;
    ::ll::UntypedStorage<8, 128> mUnk196e07;
    ::ll::UntypedStorage<8, 128> mUnkd905a7;
    ::ll::UntypedStorage<8, 16>  mUnk123f52;
    ::ll::UntypedStorage<8, 16>  mUnkb8339f;
    ::ll::UntypedStorage<8, 16>  mUnke29cfe;
    ::ll::UntypedStorage<8, 8>   mUnkd3857d;
    // NOLINTEND

public:
    // prevent constructor by default
    GameplayUserManager& operator=(GameplayUserManager const&);
    GameplayUserManager(GameplayUserManager const&);
    GameplayUserManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual ~GameplayUserManager();

    // vIndex: 0
    virtual ::Bedrock::PubSub::Connector<void(::EntityContext&)>& getGameplayUserAddedConnector() /*override*/;

    // vIndex: 1
    virtual ::Bedrock::PubSub::Connector<void(::EntityContext const&)>& getGameplayUserResumedConnector() /*override*/;

    // vIndex: 2
    virtual ::Bedrock::PubSub::Connector<void(::EntityContext const&)>&
    getGameplayUserSuspendedConnector() /*override*/;

    // vIndex: 3
    virtual ::Bedrock::PubSub::Connector<void(::Player const&)>& getPlayerRenamedConnector() /*override*/;

    // vIndex: 4
    virtual ::Bedrock::PubSub::Connector<void(::EntityContext&)>& getGameplayUserRemovedConnector() /*override*/;

    // vIndex: 5
    virtual ::Bedrock::PubSub::Connector<void()>& getAnyGameplayUsersRemovedConnector() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit GameplayUserManager(::std::unique_ptr<::GameplayUserManagerProxy> gameplayUserManagerProxy);

    MCAPI void _addTrackedMapPlayers(::MapItemSavedData& mapItemSavedData);

    MCAPI void _forEachActivePlayer(::std::function<bool(::Player&)> callback, bool includeRemovedPlayers) const;

    MCAPI int _getNewPlayerId() const;

    MCAPI void _resumePlayer(::WeakEntityRef weakEntityUser);

    MCAPI void _saveAllPlayers(::LevelStorage& levelStorage);

    MCAPI void _suspendPlayer(::WeakEntityRef weakEntityUser);

    MCAPI void addGameplayUser(::OwnerPtr<::EntityContext> userEntity);

    MCAPI void cleanupRemovedGameplayUsers();

    MCAPI void clearAllGameplayUserEntities();

    MCAPI void forEachActiveGameplayUser(::std::function<bool(::EntityContext&)> callback) const;

    MCAPI bool isGameplayUserSuspended(::WeakEntityRef weakEntityUser) const;

    MCAPI void queueResumePlayer(::EntityContext const& playerEntity);

    MCAPI void queueSuspendPlayer(::EntityContext const& playerEntity);

    MCAPI void registerLevelStorageManagerListener(::ILevelStorageManagerConnector& levelStorageManagerConnector);

    MCAPI void registerMapDataManagerListener(::IServerMapDataManagerConnector& serverMapDataManagerConnector);

    MCAPI void startLeaveGame();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::unique_ptr<::GameplayUserManagerProxy> gameplayUserManagerProxy);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::PubSub::Connector<void(::EntityContext&)>& $getGameplayUserAddedConnector();

    MCAPI ::Bedrock::PubSub::Connector<void(::EntityContext const&)>& $getGameplayUserResumedConnector();

    MCFOLD ::Bedrock::PubSub::Connector<void(::EntityContext const&)>& $getGameplayUserSuspendedConnector();

    MCAPI ::Bedrock::PubSub::Connector<void(::Player const&)>& $getPlayerRenamedConnector();

    MCAPI ::Bedrock::PubSub::Connector<void(::EntityContext&)>& $getGameplayUserRemovedConnector();

    MCAPI ::Bedrock::PubSub::Connector<void()>& $getAnyGameplayUsersRemovedConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
