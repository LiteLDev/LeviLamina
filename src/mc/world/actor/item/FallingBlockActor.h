#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"
#include "mc/world/level/block/NewBlockID.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class Block;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class ITickDelegate;
struct ActorDefinitionIdentifier;
struct HurtParameters;
struct VariantParameterList;
// clang-format on

class FallingBlockActor : public ::PredictableProjectile {
public:
    // FallingBlockActor inner types define
    enum class State : int {
        Falling     = 0,
        WaitRemoval = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                             mCreative;
    ::ll::TypedStorage<4, 4, ::FallingBlockActor::State>       mState;
    ::ll::TypedStorage<4, 4, int>                              mWaitTicks;
    ::ll::TypedStorage<4, 4, int>                              mTime;
    ::ll::TypedStorage<1, 1, bool>                             mCancelDrop;
    ::ll::TypedStorage<1, 1, bool>                             mHurtEntities;
    ::ll::TypedStorage<4, 4, int>                              mFallDamageMax;
    ::ll::TypedStorage<4, 4, float>                            mFallDamageAmount;
    ::ll::TypedStorage<4, 12, ::Vec3>                          mRenderOffset;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>> mFallingBlockSerId;
    ::ll::TypedStorage<2, 2, ::NewBlockID>                     mFallingBlockId;
    ::ll::TypedStorage<2, 2, ushort>                           mFallingBlockData;
    // NOLINTEND

public:
    // prevent constructor by default
    FallingBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&) /*override*/;

    virtual void normalTick() /*override*/;

    virtual float getShadowRadius() const /*override*/;

    virtual float causeFallDamageToActor(float, float, ::ActorDamageSource) /*override*/;

    virtual void teleportTo(::Vec3 const&, bool, int, int, bool) /*override*/;

    virtual bool canChangeDimensionsUsingPortal() const /*override*/;

    virtual void onSynchedDataUpdate(int dataId) /*override*/;

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&) /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FallingBlockActor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void breakBlock();

    MCAPI void doNormalTick(::ITickDelegate& tickDelegate);

    MCAPI void setFallingBlock(::Block const& block, bool creative);
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
