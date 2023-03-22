/**
 * @file  GameplayUserManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class GameplayUserManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEPLAYUSERMANAGER
public:
    class GameplayUserManager& operator=(class GameplayUserManager const &) = delete;
    GameplayUserManager(class GameplayUserManager const &) = delete;
#endif

public:
    /**
     * @symbol ??0GameplayUserManager\@\@QEAA\@XZ
     */
    MCAPI GameplayUserManager();
    /**
     * @symbol ?forEachActiveGameplayUser\@GameplayUserManager\@\@QEAAXV?$function\@$$A6A_NAEAVEntityContext\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachActiveGameplayUser(class std::function<bool (class EntityContext &)>);
    /**
     * @symbol ?forEachActiveGameplayUser\@GameplayUserManager\@\@QEBAXV?$function\@$$A6A_NAEBVEntityContext\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachActiveGameplayUser(class std::function<bool (class EntityContext const &)>) const;
    /**
     * @symbol ?forEachActivePlayer\@GameplayUserManager\@\@QEAAXV?$function\@$$A6A_NAEAVPlayer\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachActivePlayer(class std::function<bool (class Player &)>);
    /**
     * @symbol ?forEachActivePlayer\@GameplayUserManager\@\@QEBAXV?$function\@$$A6A_NAEBVPlayer\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachActivePlayer(class std::function<bool (class Player const &)>) const;
    /**
     * @symbol ?getActiveGameplayUserCount\@GameplayUserManager\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getActiveGameplayUserCount() const;
    /**
     * @symbol ?getActiveGameplayUsers\@GameplayUserManager\@\@QEAAAEAV?$vector\@VWeakEntityRef\@\@V?$allocator\@VWeakEntityRef\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class WeakEntityRef> & getActiveGameplayUsers();
    /**
     * @symbol ?getActiveGameplayUsers\@GameplayUserManager\@\@QEBAAEBV?$vector\@VWeakEntityRef\@\@V?$allocator\@VWeakEntityRef\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class WeakEntityRef> const & getActiveGameplayUsers() const;
    /**
     * @symbol ?getGameplayUserEntities\@GameplayUserManager\@\@QEAAAEAV?$vector\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@V?$allocator\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> & getGameplayUserEntities();
    /**
     * @symbol ?getGameplayUserEntities\@GameplayUserManager\@\@QEBAAEBV?$vector\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@V?$allocator\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> const & getGameplayUserEntities() const;
    /**
     * @symbol ?getGameplayUserEntityCount\@GameplayUserManager\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getGameplayUserEntityCount() const;
    /**
     * @symbol ?getSuspendedGameplayUsers\@GameplayUserManager\@\@QEAAAEAV?$vector\@VWeakEntityRef\@\@V?$allocator\@VWeakEntityRef\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class WeakEntityRef> & getSuspendedGameplayUsers();
    /**
     * @symbol ?getSuspendedGameplayUsers\@GameplayUserManager\@\@QEBAAEBV?$vector\@VWeakEntityRef\@\@V?$allocator\@VWeakEntityRef\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class WeakEntityRef> const & getSuspendedGameplayUsers() const;
    /**
     * @symbol ??1GameplayUserManager\@\@QEAA\@XZ
     */
    MCAPI ~GameplayUserManager();

};
