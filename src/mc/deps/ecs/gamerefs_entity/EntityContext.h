#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    // prevent constructor by default
    EntityContext& operator=(EntityContext const&);
    EntityContext(EntityContext const&);
    EntityContext();

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

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
