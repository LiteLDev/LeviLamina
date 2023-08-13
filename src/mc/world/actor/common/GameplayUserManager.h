#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class GameplayUserManager : public ::Bedrock::EnableNonOwnerReferences {

public:
    // prevent constructor by default
    GameplayUserManager& operator=(GameplayUserManager const&) = delete;
    GameplayUserManager(GameplayUserManager const&)            = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMEPLAYUSERMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~GameplayUserManager();
#endif
    /**
     * @symbol ??0GameplayUserManager\@\@QEAA\@XZ
     */
    MCAPI GameplayUserManager();
    /**
     * @symbol ?addGameplayUser\@GameplayUserManager\@\@QEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI void addGameplayUser(class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @symbol ?cleanupRemovedGameplayUsers\@GameplayUserManager\@\@QEAAXXZ
     */
    MCAPI void cleanupRemovedGameplayUsers();
    /**
     * @symbol ?clearAllGameplayUserEntities\@GameplayUserManager\@\@QEAAXXZ
     */
    MCAPI void clearAllGameplayUserEntities();
    /**
     * @symbol
     * ?forEachActiveGameplayUser\@GameplayUserManager\@\@QEBAXV?$function\@$$A6A_NAEAVEntityContext\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachActiveGameplayUser(std::function<bool(class EntityContext&)>) const;
    /**
     * @symbol ?forEachActivePlayer\@GameplayUserManager\@\@QEBAXV?$function\@$$A6A_NAEAVPlayer\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachActivePlayer(std::function<bool(class Player&)>) const;
    /**
     * @symbol
     * ?forEachActivePlayerIncludeRemoved\@GameplayUserManager\@\@QEBAXV?$function\@$$A6A_NAEAVPlayer\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachActivePlayerIncludeRemoved(std::function<bool(class Player&)>) const;
    /**
     * @symbol ?getActiveGameplayUserCount\@GameplayUserManager\@\@QEBA_KXZ
     */
    MCAPI uint64_t getActiveGameplayUserCount() const;
    /**
     * @symbol
     * ?getActiveGameplayUsers\@GameplayUserManager\@\@QEBAAEBV?$vector\@VWeakEntityRef\@\@V?$allocator\@VWeakEntityRef\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class WeakEntityRef> const& getActiveGameplayUsers() const;
    /**
     * @symbol ?getActivePlayerCount\@GameplayUserManager\@\@QEBA_KXZ
     */
    MCAPI uint64_t getActivePlayerCount() const;
    /**
     * @symbol
     * ?getGameplayUserEntities\@GameplayUserManager\@\@QEBAAEBV?$vector\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@V?$allocator\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> const& getGameplayUserEntities() const;
    /**
     * @symbol ?getGameplayUserEntityCount\@GameplayUserManager\@\@QEBA_KXZ
     */
    MCAPI uint64_t getGameplayUserEntityCount() const;
    /**
     * @symbol
     * ?initializeWithGameplayUserManagerProxy\@GameplayUserManager\@\@QEAAXV?$unique_ptr\@VGameplayUserManagerProxy\@\@U?$default_delete\@VGameplayUserManagerProxy\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void initializeWithGameplayUserManagerProxy(std::unique_ptr<class GameplayUserManagerProxy>);
    /**
     * @symbol ?isGameplayUserSuspended\@GameplayUserManager\@\@QEBA_NVWeakEntityRef\@\@\@Z
     */
    MCAPI bool isGameplayUserSuspended(class WeakEntityRef) const;
    /**
     * @symbol ?queueResumePlayer\@GameplayUserManager\@\@QEAAXAEBVEntityContext\@\@\@Z
     */
    MCAPI void queueResumePlayer(class EntityContext const&);
    /**
     * @symbol ?queueSuspendPlayer\@GameplayUserManager\@\@QEAAXAEBVEntityContext\@\@\@Z
     */
    MCAPI void queueSuspendPlayer(class EntityContext const&);
    /**
     * @symbol
     * ?registerAnyGameplayUsersRemovedCallback\@GameplayUserManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription registerAnyGameplayUsersRemovedCallback(std::function<void(void)>);
    /**
     * @symbol
     * ?registerGameplayUserAddedCallback\@GameplayUserManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVEntityContext\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription
        registerGameplayUserAddedCallback(std::function<void(class EntityContext&)>);
    /**
     * @symbol
     * ?registerGameplayUserRemovedCallback\@GameplayUserManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVEntityContext\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription
        registerGameplayUserRemovedCallback(std::function<void(class EntityContext&)>);
    /**
     * @symbol
     * ?registerGameplayUserResumedCallback\@GameplayUserManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEBVEntityContext\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription
        registerGameplayUserResumedCallback(std::function<void(class EntityContext const&)>);
    /**
     * @symbol
     * ?registerGameplayUserSuspendedCallback\@GameplayUserManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEBVEntityContext\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription
        registerGameplayUserSuspendedCallback(std::function<void(class EntityContext const&)>);
    /**
     * @symbol ?registerLevelStorageManagerListener\@GameplayUserManager\@\@QEAAXAEAVLevelStorageManager\@\@\@Z
     */
    MCAPI void registerLevelStorageManagerListener(class LevelStorageManager&);
    /**
     * @symbol ?shouldStartGameSaveTimer\@GameplayUserManager\@\@QEBA_NXZ
     */
    MCAPI bool shouldStartGameSaveTimer() const;
    /**
     * @symbol ?shuffleActiveUsers\@GameplayUserManager\@\@QEAAXAEAVRandom\@\@\@Z
     */
    MCAPI void shuffleActiveUsers(class Random&);
    /**
     * @symbol ?startLeaveGame\@GameplayUserManager\@\@QEAAXXZ
     */
    MCAPI void startLeaveGame();
    /**
     * @symbol ?tickSuspensions\@GameplayUserManager\@\@QEAAXXZ
     */
    MCAPI void tickSuspensions();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_forEachActivePlayer\@GameplayUserManager\@\@AEBAXV?$function\@$$A6A_NAEAVPlayer\@\@\@Z\@std\@\@_N\@Z
     */
    MCAPI void _forEachActivePlayer(std::function<bool(class Player&)>, bool) const;
    /**
     * @symbol ?_getGameplayUserManagerProxy\@GameplayUserManager\@\@AEAAAEAVGameplayUserManagerProxy\@\@XZ
     */
    MCAPI class GameplayUserManagerProxy& _getGameplayUserManagerProxy();
    /**
     * @symbol ?_getNewPlayerId\@GameplayUserManager\@\@AEBAHXZ
     */
    MCAPI int _getNewPlayerId() const;
    /**
     * @symbol ?_saveAllPlayers\@GameplayUserManager\@\@AEAAXAEAVLevelStorage\@\@\@Z
     */
    MCAPI void _saveAllPlayers(class LevelStorage&);
    // NOLINTEND
};
