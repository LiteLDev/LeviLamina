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
    MCNAPI ArmorStand(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCNAPI void _causeDamage(float damage);

    MCNAPI void _destroyWithEffects(::Actor* sourceActor);

    MCNAPI void _dropHeldItems();

    MCNAPI void _dropHeldItemsAndResource();

    MCNAPI void _hurtByProjectile(::Actor& sourceActor);

    MCNAPI void setPoseIndex(int poseIndex);
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
    MCNAPI float $getShadowRadius() const;

    MCNAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI ::Interaction $getInteraction(::Player& player, ::Vec3 const& location, ::HandSlot handSlot);

    MCNAPI void $kill();

    MCNAPI void $die(::ActorDamageSource const& source);

    MCNAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);

    MCNAPI void $normalTick();

    MCNAPI void $pushActors();

    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;


    // NOLINTEND
};
