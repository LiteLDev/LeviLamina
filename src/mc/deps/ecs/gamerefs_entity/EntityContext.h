#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::EntityRegistry&>                   mRegistry;
    ::ll::TypedStorage<8, 8, ::entt::basic_registry<::EntityId>&> mEnTTRegistry;
    ::ll::TypedStorage<4, 4, ::EntityId const>                    mEntity;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EntityContext(::EntityRegistry& registry, ::EntityId entity);

    MCAPI ::EntityId _getEntityId() const;

    MCAPI uint _getRegistryId() const;

    MCAPI ::EntityRegistry& _registry() const;

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
