#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorInitializationMethod.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class IConstBlockSource;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class HangingActor : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7ede45;
    ::ll::UntypedStorage<4, 4> mUnk56346e;
    ::ll::UntypedStorage<4, 4> mUnke7da52;
    // NOLINTEND

public:
    // prevent constructor by default
    HangingActor& operator=(HangingActor const&);
    HangingActor(HangingActor const&);
    HangingActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 138
    virtual int getWidth() const = 0;

    // vIndex: 139
    virtual int getHeight() const = 0;

    // vIndex: 140
    virtual void dropItem() = 0;

    // vIndex: 38
    virtual float getBrightness(float a, ::IConstBlockSource const& region) const /*override*/;

    // vIndex: 141
    virtual bool placeHangingEntity(::BlockSource&, int);

    // vIndex: 142
    virtual bool wouldSurvive(::BlockSource& region);

    // vIndex: 64
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&) /*override*/;

    // vIndex: 3
    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const& source, float, bool, bool) /*override*/;

    // vIndex: 137
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 136
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 8
    virtual ~HangingActor() /*override*/;
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

    MCAPI bool _blockIsObstruction(::BlockSource const& region, ::BlockPos const& blockPos) const;

    MCAPI void _calculateAABB();

    MCAPI void _calculateActorPositionFromPlacementPosition(::BlockPos const& blockPos);

    MCAPI bool _canSurviveOnBlock(::BlockSource const& region, ::BlockPos const& blockPos, bool beingPlaced) const;

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
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $normalTick();

    MCAPI float $getBrightness(float a, ::IConstBlockSource const& region) const;

    MCFOLD bool $placeHangingEntity(::BlockSource&, int);

    MCAPI bool $wouldSurvive(::BlockSource& region);

    MCFOLD bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    MCAPI void $reloadHardcodedClient(::ActorInitializationMethod method);

    MCAPI bool $_hurt(::ActorDamageSource const& source, float, bool, bool);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
