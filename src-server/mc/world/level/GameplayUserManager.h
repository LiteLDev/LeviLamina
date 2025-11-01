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
    ::ll::UntypedStorage<8, 24> mUnkc721ae;
    ::ll::UntypedStorage<8, 24> mUnk9fd09f;
    ::ll::UntypedStorage<8, 24> mUnk6fd064;
    ::ll::UntypedStorage<8, 24> mUnk3bf0f4;
    ::ll::UntypedStorage<8, 128> mUnk23e74c;
    ::ll::UntypedStorage<8, 128> mUnk43ee2f;
    ::ll::UntypedStorage<8, 128> mUnkc38a56;
    ::ll::UntypedStorage<8, 128> mUnk4e383a;
    ::ll::UntypedStorage<8, 128> mUnk42962d;
    ::ll::UntypedStorage<8, 128> mUnk14c0db;
    ::ll::UntypedStorage<8, 16> mUnk123f52;
    ::ll::UntypedStorage<8, 16> mUnkb8339f;
    ::ll::UntypedStorage<8, 16> mUnke29cfe;
    ::ll::UntypedStorage<8, 8> mUnkd3857d;
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
    virtual ::Bedrock::PubSub::Connector<void(::EntityContext const&)>& getGameplayUserSuspendedConnector() /*override*/;

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
    MCNAPI explicit GameplayUserManager(::std::unique_ptr<::GameplayUserManagerProxy> gameplayUserManagerProxy);

    MCNAPI void _addTrackedMapPlayers(::MapItemSavedData& mapItemSavedData);

    MCNAPI void _forEachActivePlayer(::std::function<bool(::Player&)> callback, bool includeRemovedPlayers) const;

    MCNAPI int _getNewPlayerId() const;

    MCNAPI void _resumePlayer(::WeakEntityRef weakEntityUser);

    MCNAPI void _saveAllPlayers(::LevelStorage& levelStorage);

    MCNAPI void _suspendPlayer(::WeakEntityRef weakEntityUser);

    MCNAPI void addGameplayUser(::OwnerPtr<::EntityContext> userEntity);

    MCNAPI void cleanupRemovedGameplayUsers();

    MCNAPI void clearAllGameplayUserEntities();

    MCNAPI void forEachActiveGameplayUser(::std::function<bool(::EntityContext&)> callback) const;

    MCNAPI bool isGameplayUserSuspended(::WeakEntityRef weakEntityUser) const;

    MCNAPI void queueResumePlayer(::EntityContext const& playerEntity);

    MCNAPI void queueSuspendPlayer(::EntityContext const& playerEntity);

    MCNAPI void registerLevelStorageManagerListener(::ILevelStorageManagerConnector& levelStorageManagerConnector);

    MCNAPI void registerMapDataManagerListener(::IServerMapDataManagerConnector& serverMapDataManagerConnector);

    MCNAPI void startLeaveGame();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::unique_ptr<::GameplayUserManagerProxy> gameplayUserManagerProxy);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PubSub::Connector<void(::EntityContext&)>& $getGameplayUserAddedConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(::EntityContext const&)>& $getGameplayUserResumedConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(::EntityContext const&)>& $getGameplayUserSuspendedConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(::Player const&)>& $getPlayerRenamedConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(::EntityContext&)>& $getGameplayUserRemovedConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void()>& $getAnyGameplayUsersRemovedConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
