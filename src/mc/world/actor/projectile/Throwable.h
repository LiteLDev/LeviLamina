#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class Mob;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct VariantParameterList;
// clang-format on

class Throwable : public ::PredictableProjectile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk497068;
    ::ll::UntypedStorage<8, 8> mUnk11b16a;
    ::ll::UntypedStorage<4, 4> mUnkb3e2d3;
    ::ll::UntypedStorage<4, 4> mUnk8dca32;
    // NOLINTEND

public:
    // prevent constructor by default
    Throwable& operator=(Throwable const&);
    Throwable(Throwable const&);
    Throwable();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 22
    virtual void lerpMotion(::Vec3 const& delta) /*override*/;

    // vIndex: 143
    virtual float getThrowPower();

    // vIndex: 86
    virtual ::ActorUniqueID getSourceUniqueID() const /*override*/;

    // vIndex: 141
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 140
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 144
    virtual float getThrowUpAngleOffset();

    // vIndex: 145
    virtual float getGravity();

    // vIndex: 8
    virtual ~Throwable() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Throwable(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void shoot(::Mob& shooter);

    MCAPI void shoot(::Vec3 const& dir, float pow, float uncertainty, ::Vec3 const& baseSpeed);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Actor* spawnPlayerProjectile(::ActorDefinitionIdentifier const& id, ::Player& player);
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
    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $lerpMotion(::Vec3 const& delta);

    MCAPI float $getThrowPower();

    MCAPI ::ActorUniqueID $getSourceUniqueID() const;

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCFOLD float $getThrowUpAngleOffset();

    MCAPI float $getGravity();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
