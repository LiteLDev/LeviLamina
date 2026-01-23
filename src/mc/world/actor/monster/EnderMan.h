#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/NewBlockID.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class CompoundTag;
class DataLoadHelper;
class MobEffectInstance;
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
