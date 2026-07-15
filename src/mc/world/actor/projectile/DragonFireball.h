#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/world/actor/projectile/Fireball.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorHurtResult;
struct HurtParameters;
// clang-format on

class DragonFireball : public ::Fireball {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ParticleType getTrailParticle() /*override*/;

    virtual bool shouldBurn() /*override*/;

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ParticleType $getTrailParticle();

    MCFOLD bool $shouldBurn();

    MCFOLD ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
