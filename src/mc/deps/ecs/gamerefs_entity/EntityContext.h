#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/EntityId.h"
#include "mc/entity/gamerefs_entity/EntityRegistry.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

class EntityContext {
public:
    // EntityContext inner types declare
    // clang-format off
    class Hash;
    // clang-format on

    // EntityContext inner types define
    class Hash {
    public:
        // prevent constructor by default
        Hash& operator=(Hash const&);
        Hash(Hash const&);
        Hash();

    public:
        // NOLINTBEGIN
        MCAPI uint64 operator()(class EntityContext const& entity) const;

        // NOLINTEND
    };

public:
    EntityRegistry&                 mRegistry;
    entt::basic_registry<EntityId>& mEnttRegistry;
    EntityId                        mEntity;

    [[nodiscard]] inline entt::basic_registry<EntityId>& getRegistry() noexcept { return mEnttRegistry; }

    [[nodiscard]] inline entt::basic_registry<EntityId> const& getRegistry() const noexcept { return mEnttRegistry; }

    template <class T>
    [[nodiscard]] inline optional_ref<T const> tryGetComponent() const {
        return getRegistry().try_get<T>(mEntity);
    }

    template <class T>
    [[nodiscard]] inline optional_ref<T> tryGetComponent() {
        return const_cast<T*>(std::as_const(getRegistry()).try_get<T>(mEntity));
    }

    template <class T>
    [[nodiscard]] inline bool hasComponent() const {
        return getRegistry().all_of<T>(mEntity);
    }

    template <class T>
    inline bool removeComponent() const {
        return getRegistry().remove<T>(mEntity);
    }

    template <class T, typename... Args>
    [[nodiscard]] inline T& getOrAddComponent(Args&&... args) {
        return getRegistry().get_or_emplace<T>(mEntity, std::forward<Args>(args)...);
    }

public:
    // NOLINTBEGIN
    MCAPI EntityContext(class EntityRegistry& registry, class EntityId entity);

    MCAPI class EntityRegistry& _registry() const;

    MCAPI class WeakRef<class EntityContext> getWeakRef() const;

    MCAPI bool isValid() const;

    MCAPI bool operator==(class EntityContext const& other) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI class EntityId _getEntityId() const;

    MCAPI uint _getRegistryId() const;

    // NOLINTEND
};
