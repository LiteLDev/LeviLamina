#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
// clang-format on

class EntityContext : public ::EnableGetWeakRef<::EntityContext> {
public:
    // EntityContext inner types declare
    // clang-format off
    struct Hash;
    // clang-format on

    // EntityContext inner types define
    struct Hash {};

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
    MCAPI ::WeakRef<::EntityContext> getWeakRef() const;

    MCAPI bool isValid() const;
    // NOLINTEND
};
