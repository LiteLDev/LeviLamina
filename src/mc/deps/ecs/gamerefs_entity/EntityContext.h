#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class StrictEntityContext;
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
        MCNAPI uint64 operator()(::EntityContext const& entity) const;
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
    // prevent constructor by default
    EntityContext& operator=(EntityContext const&);
    EntityContext(EntityContext const&);
    EntityContext();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI EntityContext(::EntityRegistry& registry, ::StrictEntityContext const& entity);
#endif

    MCAPI EntityContext(::EntityRegistry& registry, ::EntityId entity);

    MCAPI ::EntityId _getEntityId() const;

    MCFOLD ::EntityRegistry& _registry() const;

    MCAPI ::WeakRef<::EntityContext> getWeakRef() const;

    MCAPI bool isValid() const;

    MCAPI bool operator==(::EntityContext const& other) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::EntityRegistry& registry, ::StrictEntityContext const& entity);
#endif

    MCAPI void* $ctor(::EntityRegistry& registry, ::EntityId entity);
    // NOLINTEND
};
