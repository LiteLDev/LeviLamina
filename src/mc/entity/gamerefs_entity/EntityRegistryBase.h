#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/EntityId.h"

class EntityRegistryBase {
public:
    // prevent constructor by default
    EntityRegistryBase& operator=(EntityRegistryBase const&);
    EntityRegistryBase(EntityRegistryBase const&);
    EntityRegistryBase();

    entt::basic_registry<EntityId>& mRegistry;
    uint                            mId;

public:
    // NOLINTBEGIN
    // symbol: ??0EntityRegistryBase@@QEAA@AEAV?$basic_registry@VEntityId@@V?$allocator@VEntityId@@@std@@@entt@@@Z
    MCAPI explicit EntityRegistryBase(entt::basic_registry<EntityId>&);

    // symbol: ?isValidEntity@EntityRegistryBase@@QEBA_NAEBVEntityContextBase@@@Z
    MCAPI bool isValidEntity(class EntityContextBase const&) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_assertValidRegistry@EntityRegistryBase@@IEBAXAEBVEntityContextBase@@@Z
    MCAPI void _assertValidRegistry(class EntityContextBase const&) const;

    // NOLINTEND

protected:
    // NOLINTBEGIN
    // symbol: ?mRegistryCount@EntityRegistryBase@@1U?$atomic@I@std@@A
    MCAPI static std::atomic<uint> mRegistryCount;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $mRegistryCount() { return mRegistryCount; }

    // NOLINTEND
};
