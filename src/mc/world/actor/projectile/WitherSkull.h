#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/projectile/Fireball.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class Block;
struct VariantParameterList;
// clang-format on

class WitherSkull : public ::Fireball {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mLifetime;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&) /*override*/;

    virtual bool shouldBurn() /*override*/;

    virtual bool isOnFire() const /*override*/;

    virtual bool canDestroyBlock(::Block const& block) const /*override*/;

    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    virtual float getInertia() /*override*/;

    virtual ~WitherSkull() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $shouldBurn();

    MCFOLD bool $isOnFire() const;

    MCAPI bool $canDestroyBlock(::Block const& block) const;

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI float $getInertia();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
