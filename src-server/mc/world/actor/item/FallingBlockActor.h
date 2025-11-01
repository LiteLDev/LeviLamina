#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/NewBlockID.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class Block;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class ITickDelegate;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class FallingBlockActor : public ::PredictableProjectile {
public:
    // FallingBlockActor inner types define
    enum class State : int {
        Falling = 0,
        WaitRemoval = 1,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mCreative;
    ::ll::TypedStorage<4, 4, ::FallingBlockActor::State> mState;
    ::ll::TypedStorage<4, 4, int> mWaitTicks;
    ::ll::TypedStorage<4, 4, int> mTime;
    ::ll::TypedStorage<1, 1, bool> mCancelDrop;
    ::ll::TypedStorage<1, 1, bool> mHurtEntities;
    ::ll::TypedStorage<4, 4, int> mFallDamageMax;
    ::ll::TypedStorage<4, 4, float> mFallDamageAmount;
    ::ll::TypedStorage<4, 12, ::Vec3> mRenderOffset;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>> mFallingBlockSerId;
    ::ll::TypedStorage<2, 2, ::NewBlockID> mFallingBlockId;
    ::ll::TypedStorage<2, 2, ushort> mFallingBlockData;
    // NOLINTEND

public:
    // prevent constructor by default
    FallingBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 35
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 92
    virtual float causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source) /*override*/;

    // vIndex: 21
    virtual void teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity) /*override*/;

    // vIndex: 88
    virtual bool canChangeDimensionsUsingPortal() const /*override*/;

    // vIndex: 93
    virtual void onSynchedDataUpdate(int dataId) /*override*/;

    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const&, float, bool, bool) /*override*/;

    // vIndex: 137
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 136
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 8
    virtual ~FallingBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FallingBlockActor(::ActorDefinitionGroup* definitions, ::ActorDefinitionIdentifier const& definitionName, ::EntityContext& entityContext);

    MCAPI void breakBlock();

    MCAPI void doNormalTick(::ITickDelegate& tickDelegate);

    MCAPI ::Block const& getFallingBlock() const;

    MCAPI void setFallingBlock(::Block const& block, bool creative);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorDefinitionGroup* definitions, ::ActorDefinitionIdentifier const& definitionName, ::EntityContext& entityContext);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $normalTick();

    MCFOLD float $getShadowRadius() const;

    MCAPI float $causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source);

    MCFOLD void $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);

    MCAPI bool $canChangeDimensionsUsingPortal() const;

    MCAPI void $onSynchedDataUpdate(int dataId);

    MCFOLD bool $_hurt(::ActorDamageSource const&, float, bool, bool);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND

};
