#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
class Vec3;
struct ActorDefinitionIdentifier;
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
    ::ll::UntypedStorage<1, 1>  mUnk68df43;
    ::ll::UntypedStorage<4, 4>  mUnk5c4297;
    ::ll::UntypedStorage<4, 4>  mUnk9bf1f1;
    ::ll::UntypedStorage<4, 4>  mUnka3b5f7;
    ::ll::UntypedStorage<1, 1>  mUnkccd8da;
    ::ll::UntypedStorage<1, 1>  mUnkcac1aa;
    ::ll::UntypedStorage<4, 4>  mUnk666645;
    ::ll::UntypedStorage<4, 4>  mUnk6c40de;
    ::ll::UntypedStorage<4, 12> mUnkef4e61;
    ::ll::UntypedStorage<8, 8>  mUnk11d3ba;
    ::ll::UntypedStorage<2, 2>  mUnke6a3c6;
    ::ll::UntypedStorage<2, 2>  mUnk3cbcac;
    // NOLINTEND

public:
    // prevent constructor by default
    FallingBlockActor& operator=(FallingBlockActor const&);
    FallingBlockActor(FallingBlockActor const&);
    FallingBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 36
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 94
    virtual float causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source) /*override*/;

    // vIndex: 21
    virtual void teleportTo(
        ::Vec3 const& pos,
        bool          shouldStopRiding,
        int           cause,
        int           sourceEntityType,
        bool          keepVelocity
    ) /*override*/;

    // vIndex: 90
    virtual bool canChangeDimensionsUsingPortal() const /*override*/;

    // vIndex: 95
    virtual void onSynchedDataUpdate(int dataId) /*override*/;

    // vIndex: 139
    virtual bool _hurt(::ActorDamageSource const&, float, bool, bool) /*override*/;

    // vIndex: 141
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 140
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 8
    virtual ~FallingBlockActor() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FallingBlockActor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void _waitRemoval();

    MCAPI void breakBlock();

    MCAPI void doNormalTick(::ITickDelegate& tickDelegate);

    MCAPI ::Block const& getFallingBlock() const;

    MCAPI void setFallDamageAmount(float amount);

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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $normalTick();

    MCAPI float $getShadowRadius() const;

    MCAPI float $causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source);

    MCAPI void
    $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);

    MCAPI bool $canChangeDimensionsUsingPortal() const;

    MCAPI void $onSynchedDataUpdate(int dataId);

    MCAPI bool $_hurt(::ActorDamageSource const&, float, bool, bool);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
