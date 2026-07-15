#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/Mob.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class BlockPos;
class BodyControl;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class SynchedActorDataWriter;
struct ActorDefinitionIdentifier;
struct HurtParameters;
struct VariantParameterList;
// clang-format on

class Shulker : public ::Mob {
public:
    // prevent constructor by default
    Shulker();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& entityTag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    virtual bool checkSpawnRules(bool) /*override*/;

    virtual int getArmorValue() const /*override*/;

    virtual void _doInitialMove() /*override*/;

    virtual ::std::unique_ptr<::BodyControl> initBodyControl() /*override*/;

    virtual float getShadowRadius() const /*override*/;

    virtual float getMaxHeadXRot() /*override*/;

    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Shulker(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void postNormalTick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    postSetPosSetShulkerAttachPosAndPeekAmount(::SynchedActorDataWriter data, ::BlockPos const& newAttachPos);

    MCAPI static void setShulkerAttachPos(::SynchedActorDataWriter data, ::BlockPos const& pos);
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

    // NOLINTEND
};
