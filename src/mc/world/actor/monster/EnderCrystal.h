#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Actor.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
struct ActorDefinitionIdentifier;
struct HurtParameters;
// clang-format on

class EnderCrystal : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::EnderCrystal&, ::ActorDamageSource const&)>>
        mCrystalDamagedCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    EnderCrystal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void normalTick() /*override*/;

    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    virtual float getShadowRadius() const /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EnderCrystal(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void setCrystalDamagedCallback(::std::function<void(::EnderCrystal&, ::ActorDamageSource const&)> onDamaged);
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
    MCAPI void $normalTick();

    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCFOLD float $getShadowRadius() const;

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
