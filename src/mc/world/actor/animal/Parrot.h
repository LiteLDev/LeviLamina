#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class BlockPos;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class Parrot : public ::Animal {
public:
    // prevent constructor by default
    Parrot();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;

    virtual void playAmbientSound() /*override*/;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getAmbientSound() const /*override*/;

    virtual void setSitting(bool value) /*override*/;

    virtual bool canBePulledIntoVehicle() const /*override*/;

    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    virtual float getShadowRadius() const /*override*/;

    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Parrot(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCNAPI void postAiStep();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI float $_getWalkTargetValue(::BlockPos const& pos);

    MCNAPI void $playAmbientSound();

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getAmbientSound() const;

    MCNAPI void $setSitting(bool value);

    MCNAPI bool $canBePulledIntoVehicle() const;

    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCNAPI float $getShadowRadius() const;

    MCNAPI void $reloadHardcodedClient(::ActorInitializationMethod method);


    // NOLINTEND
};
