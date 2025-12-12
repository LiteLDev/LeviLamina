#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/NewBlockID.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class MobEffectInstance;
struct ActorDefinitionIdentifier;
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

    virtual void hurtEffects(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    virtual bool canBeAffectedByArrow(::MobEffectInstance const& effect) const /*override*/;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getAmbientSound() const /*override*/;

    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual ~EnderMan() /*override*/ = default;
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

    MCAPI void $hurtEffects(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCFOLD bool $canBeAffectedByArrow(::MobEffectInstance const& effect) const;

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getAmbientSound() const;

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
