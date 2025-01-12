#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/ecs/EntityId.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityId;
class EntityRegistry;
// clang-format on

class EntityContext : public ::EnableGetWeakRef<::EntityContext> {
public:
    // EntityContext inner types declare
    // clang-format off
    struct Hash;
    // clang-format on

    // EntityContext inner types define
    struct Hash {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI uint64 operator()(::EntityContext const& entity) const;
        // NOLINTEND
    };

public:
    [[nodiscard]] inline entt::basic_registry<EntityId>& getRegistry() noexcept { return mEnTTRegistry; }

    [[nodiscard]] inline entt::basic_registry<EntityId> const& getRegistry() const noexcept { return mEnTTRegistry; }

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
    // member variables
    // NOLINTBEGIN
    ::EntityRegistry&                   mRegistry;
    ::entt::basic_registry<::EntityId>& mEnTTRegistry;
    ::EntityId const                    mEntity;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EntityContext(::EntityRegistry& registry, ::EntityId entity);

    MCAPI ::EntityId _getEntityId() const;

    MCAPI uint _getRegistryId() const;

    MCFOLD ::EntityRegistry& _registry() const;

    MCAPI ::WeakRef<::EntityContext> getWeakRef() const;

    MCAPI bool isValid() const;

    MCAPI bool operator==(::EntityContext const& other) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::EntityRegistry& registry, ::EntityId entity);
    // NOLINTEND
};
