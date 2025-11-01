#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/world/actor/projectile/Fireball.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
// clang-format on

class DragonFireball : public ::Fireball {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 139
    virtual ::ParticleType getTrailParticle() /*override*/;

    // vIndex: 140
    virtual bool shouldBurn() /*override*/;

    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const&, float, bool, bool) /*override*/;

    // vIndex: 8
    virtual ~DragonFireball() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ParticleType $getTrailParticle();

    MCFOLD bool $shouldBurn();

    MCFOLD bool $_hurt(::ActorDamageSource const&, float, bool, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
