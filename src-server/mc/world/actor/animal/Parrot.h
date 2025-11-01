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
    // vIndex: 172
    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;

    // vIndex: 62
    virtual void playAmbientSound() /*override*/;

    // vIndex: 63
    virtual ::SharedTypes::Legacy::LevelSoundEvent getAmbientSound() const /*override*/;

    // vIndex: 56
    virtual void setSitting(bool value) /*override*/;

    // vIndex: 96
    virtual bool canBePulledIntoVehicle() const /*override*/;

    // vIndex: 64
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    // vIndex: 35
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 3
    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    // vIndex: 8
    virtual ~Parrot() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Parrot(::ActorDefinitionGroup* definitions, ::ActorDefinitionIdentifier const& definitionName, ::EntityContext& entityContext);

    MCAPI void postAiStep();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorDefinitionGroup* definitions, ::ActorDefinitionIdentifier const& definitionName, ::EntityContext& entityContext);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $_getWalkTargetValue(::BlockPos const& pos);

    MCAPI void $playAmbientSound();

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getAmbientSound() const;

    MCAPI void $setSitting(bool value);

    MCAPI bool $canBePulledIntoVehicle() const;

    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCAPI float $getShadowRadius() const;

    MCAPI void $reloadHardcodedClient(::ActorInitializationMethod method);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
