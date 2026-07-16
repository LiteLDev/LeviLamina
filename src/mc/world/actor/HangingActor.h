#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorInitializationMethod.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class IConstBlockSource;
struct ActorDefinitionIdentifier;
struct HurtParameters;
struct VariantParameterList;
// clang-format on

class HangingActor : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mDirection;
    ::ll::TypedStorage<4, 4, int> mTicksToWouldSurviveCheck;
    ::ll::TypedStorage<4, 4, int> mWouldSurviveCheckCooldown;
    // NOLINTEND

public:
    // prevent constructor by default
    HangingActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void normalTick() /*override*/;

    virtual int getWidth() const = 0;

    virtual int getHeight() const = 0;

    virtual void dropItem() = 0;

    virtual float getBrightness(float a, ::IConstBlockSource const& region) const /*override*/;

    virtual bool placeHangingEntity(::BlockSource& region, int direction);

    virtual bool wouldSurvive(::BlockSource& region);

    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&) /*override*/;

    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const& source, float, ::HurtParameters const&) /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HangingActor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext,
        int                                wouldSurviveCheckCooldown
    );

    MCAPI void _calculateAABB();

    MCAPI void _calculateActorPositionFromPlacementPosition(::BlockPos const& blockPos);

    MCAPI bool _wouldSurvive(::BlockSource& region, ::BlockPos const& blockPos, bool beingPlaced);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext,
        int                                wouldSurviveCheckCooldown
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $normalTick();

    MCAPI float $getBrightness(float a, ::IConstBlockSource const& region) const;

    MCFOLD bool $placeHangingEntity(::BlockSource& region, int direction);

    MCAPI bool $wouldSurvive(::BlockSource& region);

    MCFOLD bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    MCAPI void $reloadHardcodedClient(::ActorInitializationMethod method);

    MCAPI ::ActorHurtResult $_hurt(::ActorDamageSource const& source, float, ::HurtParameters const&);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);


    // NOLINTEND
};
