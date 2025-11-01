#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"

// auto generated forward declare list
// clang-format off
class Actor;
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
    ShooterComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ShooterComponent(::ShooterComponent const&);

    MCNAPI void _shootProjectile(::Actor& owner, ::ActorDefinitionIdentifier const& actorDef, int auxVal);

    MCNAPI void onShoot(::Actor& owner);

    MCNAPI ::ShooterComponent& operator=(::ShooterComponent&&);

    MCNAPI ~ShooterComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ShooterComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
