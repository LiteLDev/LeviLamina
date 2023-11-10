#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/EntityId.h"
#include "mc/entity/gamerefs_entity/EntityRegistryBase.h"

class EntityContextBase {
public:
    class EntityRegistryBase& mRegistry;
    class EntityId            mEntity;

    [[nodiscard]] inline class entt::basic_registry<EntityId>& _enttRegistry() {
        return mRegistry.mRegistry;
    } 
    
    [[nodiscard]] inline class entt::basic_registry<EntityId> const& _enttRegistry() const {
        return mRegistry.mRegistry;
    }

    template <class T>
    [[nodiscard]] inline T* tryGetComponent() const {
        return _enttRegistry().try_get<T>(mEntity);
    }

    template <class T>
    [[nodiscard]] inline bool hasComponent() const {
        return _enttRegistry().all_of<T>(mEntity);
    }

    template <class T, typename... Args>
    [[nodiscard]] inline T& getOrAddComponent(Args&&... args) const {
        return _enttRegistry().get_or_emplace<T>(mEntity, std::forward<Args>(args)...);
    }

public:
    // NOLINTBEGIN
    // symbol: ??0EntityContextBase@@QEAA@AEAVEntityRegistryBase@@VEntityId@@@Z
    MCAPI EntityContextBase(class EntityRegistryBase&, class EntityId);

    // symbol: ?isValid@EntityContextBase@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ??8EntityContextBase@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class EntityContextBase const&) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_getEntityId@EntityContextBase@@IEBA?AVEntityId@@XZ
    MCAPI class EntityId _getEntityId() const;

    // symbol: ?_getRegistryId@EntityContextBase@@IEBAIXZ
    MCAPI uint _getRegistryId() const;

    // NOLINTEND
};
