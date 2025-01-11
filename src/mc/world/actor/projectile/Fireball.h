#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ParticleType.h"
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
struct ActorUniqueID;
// clang-format on

class Fireball : public ::PredictableProjectile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk9a01da;
    ::ll::UntypedStorage<1, 1> mUnkc82155;
    // NOLINTEND

public:
    // prevent constructor by default
    Fireball& operator=(Fireball const&);
    Fireball(Fireball const&);
    Fireball();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 39
    virtual float getBrightness(float a, ::IConstBlockSource const& region) const /*override*/;

    // vIndex: 86
    virtual ::ActorUniqueID getSourceUniqueID() const /*override*/;

    // vIndex: 141
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 140
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 143
    virtual float getInertia();

    // vIndex: 144
    virtual ::ParticleType getTrailParticle();

    // vIndex: 145
    virtual bool shouldBurn();

    // vIndex: 8
    virtual ~Fireball() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Fireball(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void _setPower(::Vec3 const& power);
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
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $normalTick();

    MCFOLD float $getBrightness(float a, ::IConstBlockSource const& region) const;

    MCFOLD ::ActorUniqueID $getSourceUniqueID() const;

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI float $getInertia();

    MCFOLD ::ParticleType $getTrailParticle();

    MCFOLD bool $shouldBurn();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
