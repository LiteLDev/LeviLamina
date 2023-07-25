#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityRegistryBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYREGISTRYBASE
public:
    EntityRegistryBase& operator=(EntityRegistryBase const&) = delete;
    EntityRegistryBase(EntityRegistryBase const&)            = delete;
    EntityRegistryBase()                                     = delete;
#endif

public:
    /**
     * @symbol
     * ??0EntityRegistryBase\@\@QEAA\@AEAV?$basic_registry\@VEntityId\@\@V?$allocator\@VEntityId\@\@\@std\@\@\@entt\@\@\@Z
     */
    MCAPI EntityRegistryBase(class entt::basic_registry<class EntityId, class std::allocator<class EntityId>>&);
    /**
     * @symbol ?isValidEntity\@EntityRegistryBase\@\@QEBA_NAEBVEntityContextBase\@\@\@Z
     */
    MCAPI bool isValidEntity(class EntityContextBase const&) const;

    // protected:
    /**
     * @symbol ?_assertValidRegistry\@EntityRegistryBase\@\@IEBAXAEBVEntityContextBase\@\@\@Z
     */
    MCAPI void _assertValidRegistry(class EntityContextBase const&) const;

protected:
    /**
     * @symbol ?mRegistryCount\@EntityRegistryBase\@\@1U?$atomic\@I\@std\@\@A
     */
    MCAPI static struct std::atomic<unsigned int> mRegistryCount;
};
