#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityRegistryBase {

public:
    // prevent constructor by default
    EntityRegistryBase& operator=(EntityRegistryBase const&) = delete;
    EntityRegistryBase(EntityRegistryBase const&)            = delete;
    EntityRegistryBase()                                     = delete;

public:
    /**
     * @symbol
     * ??0EntityRegistryBase\@\@QEAA\@AEAV?$basic_registry\@VEntityId\@\@V?$allocator\@VEntityId\@\@\@std\@\@\@entt\@\@\@Z
     */
    MCAPI
    EntityRegistryBase(class entt::basic_registry<class EntityId, class std::allocator<class EntityId>>&); // NOLINT
    /**
     * @symbol ?isValidEntity\@EntityRegistryBase\@\@QEBA_NAEBVEntityContextBase\@\@\@Z
     */
    MCAPI bool isValidEntity(class EntityContextBase const&) const; // NOLINT

    // protected:
    /**
     * @symbol ?_assertValidRegistry\@EntityRegistryBase\@\@IEBAXAEBVEntityContextBase\@\@\@Z
     */
    MCAPI void _assertValidRegistry(class EntityContextBase const&) const; // NOLINT

protected:
    /**
     * @symbol ?mRegistryCount\@EntityRegistryBase\@\@1U?$atomic\@I\@std\@\@A
     */
    MCAPI static struct std::atomic<unsigned int> mRegistryCount; // NOLINT
};
