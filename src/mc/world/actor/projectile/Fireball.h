#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class IConstBlockSource;
class Vec3;
struct ActorDefinitionIdentifier;
// clang-format on

class Fireball : public ::PredictableProjectile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> ownerId;
    ::ll::TypedStorage<1, 1, bool>            mInGround;
    // NOLINTEND

public:
    // prevent constructor by default
    Fireball();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void normalTick() /*override*/;

    virtual float getBrightness(float a, ::IConstBlockSource const& region) const /*override*/;

    virtual ::ActorUniqueID getSourceUniqueID() const /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual float getInertia();

    virtual ::ParticleType getTrailParticle();

    virtual bool shouldBurn();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Fireball(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCNAPI void _setPower(::Vec3 const& power);
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
    MCAPI void $normalTick();

    MCNAPI float $getBrightness(float a, ::IConstBlockSource const& region) const;

    MCNAPI ::ActorUniqueID $getSourceUniqueID() const;

    MCNAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI float $getInertia();

    MCNAPI ::ParticleType $getTrailParticle();

    MCNAPI bool $shouldBurn();


    // NOLINTEND
};
