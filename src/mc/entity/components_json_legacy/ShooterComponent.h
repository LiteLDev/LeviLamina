#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorDefinitionIdentifier;
// clang-format on

class ShooterComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk95712c;
    ::ll::UntypedStorage<8, 24>  mUnk45ffcc;
    ::ll::UntypedStorage<8, 176> mUnk8b74b3;
    ::ll::UntypedStorage<4, 4>   mUnk11e1e3;
    ::ll::UntypedStorage<4, 4>   mUnk7e6473;
    ::ll::UntypedStorage<1, 1>   mUnk5a545f;
    // NOLINTEND

public:
    // prevent constructor by default
    ShooterComponent& operator=(ShooterComponent const&);
    ShooterComponent(ShooterComponent const&);
    ShooterComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _shootProjectile(::Actor& owner, ::ActorDefinitionIdentifier const& actorDef, int auxVal);

    MCAPI bool hasMagicAttacks() const;

    MCAPI void onShoot(::Actor& owner);

    MCAPI ::ShooterComponent& operator=(::ShooterComponent&&);

    MCAPI ~ShooterComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
