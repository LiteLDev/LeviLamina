#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/ecs/Optional.h"
#include "mc/entity/systems/OnFireSystem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorOwnerComponent;
class EntityContext;
class EntityRegistry;
struct AbilitiesComponent;
struct OnFireComponent;
// clang-format on

class OnFireServerSystem : public ::OnFireSystem {
public:
    // prevent constructor by default
    OnFireServerSystem& operator=(OnFireServerSystem const&);
    OnFireServerSystem(OnFireServerSystem const&);
    OnFireServerSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void tick(::EntityRegistry& registry) /*override*/;

    // vIndex: 0
    virtual ~OnFireServerSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _tickServer(
        ::EntityContext&                       entity,
        ::ActorOwnerComponent&                 actorOwnerComponent,
        ::OnFireComponent&                     onFireComponent,
        ::Optional<::AbilitiesComponent const> abilities
    );

    MCAPI static void _tickServerImpl(
        bool                                       isFireImmune,
        ::EntityContext&                           entity,
        ::Actor&                                   actor,
        ::OnFireComponent&                         onFireComponent,
        ::optional_ref<::AbilitiesComponent const> abilities
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::EntityRegistry& registry);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
