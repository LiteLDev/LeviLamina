#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/level/block/NewBlockID.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class MobEffectInstance;
struct ActorDefinitionIdentifier;
struct HurtEffectsSettings;
// clang-format on

class EnderMan : public ::Monster {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                             mAggroedByPlayer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>> mCarryBlockSerId;
    ::ll::TypedStorage<2, 2, ::NewBlockID>                     mCarryBlockId;
    ::ll::TypedStorage<2, 2, ushort>                           mCarryBlockData;
    // NOLINTEND

public:
    // prevent constructor by default
    EnderMan();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void normalTick() /*override*/;

    virtual void newServerAiStep() /*override*/;

    virtual void
    hurtEffects(::ActorDamageSource const& source, float damage, ::HurtEffectsSettings const& settings) /*override*/;

    virtual bool canBeAffectedByArrow(::MobEffectInstance const& effect) const /*override*/;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getAmbientSound() const /*override*/;

    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EnderMan(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
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

    MCAPI void $newServerAiStep();

    MCAPI void $hurtEffects(::ActorDamageSource const& source, float damage, ::HurtEffectsSettings const& settings);

    MCFOLD bool $canBeAffectedByArrow(::MobEffectInstance const& effect) const;

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getAmbientSound() const;

    MCAPI ::ActorHurtResult $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCFOLD void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
