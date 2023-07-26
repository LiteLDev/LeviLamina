#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class GameplayUserManager {

public:
    // prevent constructor by default
    GameplayUserManager& operator=(GameplayUserManager const&) = delete;
    GameplayUserManager(GameplayUserManager const&)            = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMEPLAYUSERMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~GameplayUserManager(); // NOLINT
#endif
    /**
     * @symbol ??0GameplayUserManager\@\@QEAA\@XZ
     */
    MCAPI GameplayUserManager(); // NOLINT
    /**
     * @symbol ?addGameplayUser\@GameplayUserManager\@\@QEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI void addGameplayUser(class OwnerPtrT<struct EntityRefTraits>); // NOLINT
    /**
     * @symbol ?cleanupRemovedGameplayUsers\@GameplayUserManager\@\@QEAAXXZ
     */
    MCAPI void cleanupRemovedGameplayUsers(); // NOLINT
    /**
     * @symbol ?clearAllGameplayUserEntities\@GameplayUserManager\@\@QEAAXXZ
     */
    MCAPI void clearAllGameplayUserEntities(); // NOLINT
    /**
     * @symbol
     * ?forEachActiveGameplayUser\@GameplayUserManager\@\@QEBAXV?$function\@$$A6A_NAEAVEntityContext\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachActiveGameplayUser(class std::function<bool(class EntityContext&)>) const; // NOLINT
    /**
     * @symbol ?forEachActivePlayer\@GameplayUserManager\@\@QEBAXV?$function\@$$A6A_NAEAVPlayer\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachActivePlayer(class std::function<bool(class Player&)>) const; // NOLINT
    /**
     * @symbol
     * ?forEachActivePlayerIncludeRemoved\@GameplayUserManager\@\@QEBAXV?$function\@$$A6A_NAEAVPlayer\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachActivePlayerIncludeRemoved(class std::function<bool(class Player&)>) const; // NOLINT
    /**
     * @symbol ?getActiveGameplayUserCount\@GameplayUserManager\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getActiveGameplayUserCount() const; // NOLINT
    /**
     * @symbol
     * ?getActiveGameplayUsers\@GameplayUserManager\@\@QEBAAEBV?$vector\@VWeakEntityRef\@\@V?$allocator\@VWeakEntityRef\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class WeakEntityRef> const& getActiveGameplayUsers() const; // NOLINT
    /**
     * @symbol ?getActivePlayerCount\@GameplayUserManager\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getActivePlayerCount() const; // NOLINT
    /**
     * @symbol
     * ?getGameplayUserEntities\@GameplayUserManager\@\@QEBAAEBV?$vector\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@V?$allocator\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> const& getGameplayUserEntities() const; // NOLINT
    /**
     * @symbol ?getGameplayUserEntityCount\@GameplayUserManager\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getGameplayUserEntityCount() const; // NOLINT
    /**
     * @symbol
     * ?initializeWithGameplayUserManagerProxy\@GameplayUserManager\@\@QEAAXV?$unique_ptr\@VGameplayUserManagerProxy\@\@U?$default_delete\@VGameplayUserManagerProxy\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void initializeWithGameplayUserManagerProxy(std::unique_ptr<class GameplayUserManagerProxy>); // NOLINT
    /**
     * @symbol ?isGameplayUserSuspended\@GameplayUserManager\@\@QEBA_NVWeakEntityRef\@\@\@Z
     */
    MCAPI bool isGameplayUserSuspended(class WeakEntityRef) const; // NOLINT
    /**
     * @symbol ?queueResumePlayer\@GameplayUserManager\@\@QEAAXAEBVEntityContext\@\@\@Z
     */
    MCAPI void queueResumePlayer(class EntityContext const&); // NOLINT
    /**
     * @symbol ?queueSuspendPlayer\@GameplayUserManager\@\@QEAAXAEBVEntityContext\@\@\@Z
     */
    MCAPI void queueSuspendPlayer(class EntityContext const&); // NOLINT
    /**
     * @symbol
     * ?registerAnyGameplayUsersRemovedCallback\@GameplayUserManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription
        registerAnyGameplayUsersRemovedCallback(class std::function<void(void)>); // NOLINT
    /**
     * @symbol
     * ?registerGameplayUserAddedCallback\@GameplayUserManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVEntityContext\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription
        registerGameplayUserAddedCallback(class std::function<void(class EntityContext&)>); // NOLINT
    /**
     * @symbol
     * ?registerGameplayUserRemovedCallback\@GameplayUserManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVEntityContext\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription
        registerGameplayUserRemovedCallback(class std::function<void(class EntityContext&)>); // NOLINT
    /**
     * @symbol
     * ?registerGameplayUserResumedCallback\@GameplayUserManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEBVEntityContext\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription
        registerGameplayUserResumedCallback(class std::function<void(class EntityContext const&)>); // NOLINT
    /**
     * @symbol
     * ?registerGameplayUserSuspendedCallback\@GameplayUserManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEBVEntityContext\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription
        registerGameplayUserSuspendedCallback(class std::function<void(class EntityContext const&)>); // NOLINT
    /**
     * @symbol ?registerLevelStorageManagerListener\@GameplayUserManager\@\@QEAAXAEAVLevelStorageManager\@\@\@Z
     */
    MCAPI void registerLevelStorageManagerListener(class LevelStorageManager&); // NOLINT
    /**
     * @symbol ?shouldStartGameSaveTimer\@GameplayUserManager\@\@QEBA_NXZ
     */
    MCAPI bool shouldStartGameSaveTimer() const; // NOLINT
    /**
     * @symbol ?shuffleActiveUsers\@GameplayUserManager\@\@QEAAXAEAVRandom\@\@\@Z
     */
    MCAPI void shuffleActiveUsers(class Random&); // NOLINT
    /**
     * @symbol ?startLeaveGame\@GameplayUserManager\@\@QEAAXXZ
     */
    MCAPI void startLeaveGame(); // NOLINT
    /**
     * @symbol ?tickSuspensions\@GameplayUserManager\@\@QEAAXXZ
     */
    MCAPI void tickSuspensions(); // NOLINT

    // private:
    /**
     * @symbol ?_forEachActivePlayer\@GameplayUserManager\@\@AEBAXV?$function\@$$A6A_NAEAVPlayer\@\@\@Z\@std\@\@_N\@Z
     */
    MCAPI void _forEachActivePlayer(class std::function<bool(class Player&)>, bool) const; // NOLINT
    /**
     * @symbol ?_getGameplayUserManagerProxy\@GameplayUserManager\@\@AEAAAEAVGameplayUserManagerProxy\@\@XZ
     */
    MCAPI class GameplayUserManagerProxy& _getGameplayUserManagerProxy(); // NOLINT
    /**
     * @symbol ?_getNewPlayerId\@GameplayUserManager\@\@AEBAHXZ
     */
    MCAPI int _getNewPlayerId() const; // NOLINT
    /**
     * @symbol ?_saveAllPlayers\@GameplayUserManager\@\@AEAAXAEAVLevelStorage\@\@\@Z
     */
    MCAPI void _saveAllPlayers(class LevelStorage&); // NOLINT

private:
};
