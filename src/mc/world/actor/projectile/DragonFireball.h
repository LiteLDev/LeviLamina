#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/world/actor/projectile/Fireball.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class DragonFireball : public ::Fireball {
public:
    // prevent constructor by default
    DragonFireball();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ParticleType getTrailParticle() /*override*/;

    virtual bool shouldBurn() /*override*/;

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, bool, bool) /*override*/;
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
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ParticleType $getTrailParticle();

    MCFOLD bool $shouldBurn();

    MCFOLD ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, bool, bool);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
