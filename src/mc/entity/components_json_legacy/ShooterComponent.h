#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorDefinitionIdentifier;
struct ShooterProjectileData;
// clang-format on

class ShooterComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                   mThrowPower;
    ::ll::TypedStorage<8, 24, ::std::vector<::ShooterProjectileData>> mShooterProjectileData;
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>           mDefaultActorDef;
    ::ll::TypedStorage<4, 4, int>                                     mDefaultAuxValue;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>  mSoundEvent;
    ::ll::TypedStorage<1, 1, bool>                                    mMagicAttacks;
    // NOLINTEND

public:
    // prevent constructor by default
    ShooterComponent& operator=(ShooterComponent const&);
    ShooterComponent(ShooterComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _shootProjectile(::Actor& owner, ::ActorDefinitionIdentifier const& actorDef, int auxVal);

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
