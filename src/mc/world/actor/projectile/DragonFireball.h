#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ParticleType.h"
#include "mc/world/actor/projectile/Fireball.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class DragonFireball : public ::Fireball {
public:
    // prevent constructor by default
    DragonFireball& operator=(DragonFireball const&);
    DragonFireball(DragonFireball const&);
    DragonFireball();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 144
    virtual ::ParticleType getTrailParticle() /*override*/;

    // vIndex: 145
    virtual bool shouldBurn() /*override*/;

    // vIndex: 139
    virtual bool _hurt(::ActorDamageSource const&, float, bool, bool) /*override*/;

    // vIndex: 8
    virtual ~DragonFireball() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DragonFireball(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float& SPLASH_RANGE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ParticleType $getTrailParticle();

    MCAPI bool $shouldBurn();

    MCAPI bool $_hurt(::ActorDamageSource const&, float, bool, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
