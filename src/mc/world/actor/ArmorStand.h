#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Mob.h"
#include "mc/world/item/HandSlot.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class Interaction;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
struct HurtParameters;
// clang-format on

class ArmorStand : public ::Mob {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mLastHit;
    ::ll::TypedStorage<4, 4, int>    mLastCircuitStrength;
    // NOLINTEND

public:
    // prevent constructor by default
    ArmorStand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual float getShadowRadius() const /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual ::Interaction getInteraction(::Player& player, ::Vec3 const& location, ::HandSlot handSlot) /*override*/;

    virtual void kill() /*override*/;

    virtual void die(::ActorDamageSource const& source) /*override*/;

    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;

    virtual void normalTick() /*override*/;

    virtual void pushActors() /*override*/;

    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ArmorStand(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void _causeDamage(float damage);

    MCAPI void _destroyWithEffects(::Actor* sourceActor);

    MCAPI void _dropHeldItems();

    MCAPI void _dropHeldItemsAndResource();

    MCAPI void _hurtByProjectile(::Actor& sourceActor);

    MCAPI void setPoseIndex(int poseIndex);
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
    MCFOLD float $getShadowRadius() const;

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI ::Interaction $getInteraction(::Player& player, ::Vec3 const& location, ::HandSlot handSlot);

    MCAPI void $kill();

    MCAPI void $die(::ActorDamageSource const& source);

    MCAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);

    MCAPI void $normalTick();

    MCAPI void $pushActors();

    MCFOLD bool $isInvulnerableTo(::ActorDamageSource const& source) const;


    // NOLINTEND
};
