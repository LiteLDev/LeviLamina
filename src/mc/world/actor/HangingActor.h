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
    MCNAPI HangingActor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext,
        int                                wouldSurviveCheckCooldown
    );

    MCNAPI bool _blockContainsObstruction(::BlockSource const& region, ::BlockPos const& blockPos) const;

    MCNAPI bool _blockIsObstruction(::BlockSource const& region, ::BlockPos const& blockPos) const;

    MCNAPI void _calculateAABB();

#ifdef LL_PLAT_S
    MCNAPI void _calculateActorPositionFromPlacementPosition(::BlockPos const& blockPos);
#endif

#ifdef LL_PLAT_C
    MCNAPI void _calculateActorPositionFromPlacementPosition(::BlockPos const& blockPos);
#endif

#ifdef LL_PLAT_S
    MCNAPI bool _wouldSurvive(::BlockSource& region, ::BlockPos const& blockPos, bool beingPlaced);
#endif

#ifdef LL_PLAT_C
    MCNAPI bool _wouldSurvive(::BlockSource& region, ::BlockPos const& blockPos, bool beingPlaced);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext,
        int                                wouldSurviveCheckCooldown
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $normalTick();

    MCNAPI float $getBrightness(float a, ::IConstBlockSource const& region) const;

    MCNAPI bool $placeHangingEntity(::BlockSource& region, int direction);

    MCNAPI bool $wouldSurvive(::BlockSource& region);

    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI void $reloadHardcodedClient(::ActorInitializationMethod method);

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const& source, float, ::HurtParameters const&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);


    // NOLINTEND
};
