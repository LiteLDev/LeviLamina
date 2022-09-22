/**
 * @file  EntityRegistryBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EntityRegistryBase.
 *
 */
class EntityRegistryBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYREGISTRYBASE
public:
    class EntityRegistryBase& operator=(class EntityRegistryBase const &) = delete;
    EntityRegistryBase(class EntityRegistryBase const &) = delete;
    EntityRegistryBase() = delete;
#endif

public:
    /**
     * @hash   1760265351
     * @symbol ??0EntityRegistryBase@@QEAA@AEAV?$basic_registry@VEntityId@@@entt@@@Z
     */
    MCAPI EntityRegistryBase(class entt::basic_registry<class EntityId> &);
    /**
     * @hash   -1405771327
     * @symbol ?isValidEntity@EntityRegistryBase@@QEBA_NAEBVEntityContextBase@@@Z
     */
    MCAPI bool isValidEntity(class EntityContextBase const &) const;

//protected:
    /**
     * @hash   -722292235
     * @symbol ?_assertValidRegistry@EntityRegistryBase@@IEBAXAEBVEntityContextBase@@@Z
     */
    MCAPI void _assertValidRegistry(class EntityContextBase const &) const;

protected:
    /**
     * @hash   1038602328
     * @symbol ?mRegistryCount@EntityRegistryBase@@1U?$atomic@I@std@@A
     */
    MCAPI static struct std::atomic<unsigned int> mRegistryCount;

};