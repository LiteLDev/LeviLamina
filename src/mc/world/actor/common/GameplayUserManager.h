#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class GameplayUserManager {
public:
    // prevent constructor by default
    GameplayUserManager& operator=(GameplayUserManager const&);
    GameplayUserManager(GameplayUserManager const&);

public:
    // NOLINTBEGIN
    MCAPI GameplayUserManager();

    MCAPI void addGameplayUser(class OwnerPtr<class EntityContext>);

    MCAPI void cleanupRemovedGameplayUsers();

    MCAPI void forEachActiveGameplayUser(std::function<bool(class EntityContext&)> callback) const;

    MCAPI void forEachActivePlayer(std::function<bool(class Player&)> callback) const;

    MCAPI void forEachActivePlayerIncludeRemoved(std::function<bool(class Player&)> callback) const;

    MCAPI std::vector<class WeakEntityRef> const& getActiveGameplayUsers() const;

    MCAPI std::vector<class OwnerPtr<class EntityContext>> const& getGameplayUserEntities() const;

    MCAPI void initializeWithGameplayUserManagerProxy(std::unique_ptr<class GameplayUserManagerProxy>);

    MCAPI bool isGameplayUserSuspended(class WeakEntityRef) const;

    MCAPI class Bedrock::PubSub::Subscription registerAnyGameplayUsersRemovedCallback(std::function<void()> callback);

    MCAPI class Bedrock::PubSub::Subscription
    registerGameplayUserAddedCallback(std::function<void(class EntityContext&)> callback);

    MCAPI class Bedrock::PubSub::Subscription
    registerGameplayUserRemovedCallback(std::function<void(class EntityContext&)> callback);

    MCAPI class Bedrock::PubSub::Subscription
    registerGameplayUserResumedCallback(std::function<void(class EntityContext const&)> callback);

    MCAPI class Bedrock::PubSub::Subscription
    registerGameplayUserSuspendedCallback(std::function<void(class EntityContext const&)> callback);

    MCAPI void registerLevelStorageManagerListener(class LevelStorageManager&);

    MCAPI void registerMapDataManagerListener(class MapDataManager&);

    MCAPI bool shouldStartGameSaveTimer() const;

    MCAPI void tickSuspensions();

    MCAPI ~GameplayUserManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addTrackedMapPlayers(class MapItemSavedData&);

    MCAPI void _forEachActivePlayer(std::function<bool(class Player&)>, bool) const;

    MCAPI class GameplayUserManagerProxy& _getGameplayUserManagerProxy();

    MCAPI int _getNewPlayerId() const;

    MCAPI void _saveAllPlayers(class LevelStorage& levelStorage);

    // NOLINTEND
};
