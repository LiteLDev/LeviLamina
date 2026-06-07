#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class SaveContext;
// clang-format on

class ConduitBlockActor : public ::BlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                       mIsActive;
    ::ll::TypedStorage<1, 1, bool>                       mIsHunting;
    ::ll::TypedStorage<4, 4, int>                        mBlockRefreshCounter;
    ::ll::TypedStorage<8, 8, uint64>                     mNextAmbientSound;
    ::ll::TypedStorage<4, 4, float>                      mAnimationValue;
    ::ll::TypedStorage<4, 4, float>                      mRotation;
    ::ll::TypedStorage<4, 4, int>                        mRotationTickCount;
    ::ll::TypedStorage<4, 4, int>                        mWindLevel;
    ::ll::TypedStorage<4, 4, int>                        mEffectRange;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>            mTarget;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>> mBlockPositions;
    // NOLINTEND

public:
    // prevent constructor by default
    ConduitBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::BlockSource& region) /*override*/;

    virtual bool hasAlphaLayer() const /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const&) const /*override*/;

    virtual void load(::ILevel& tag, ::CompoundTag const& dataLoadHelper, ::DataLoadHelper&) /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ConduitBlockActor(::BlockPos const& pos);

    MCAPI void _animateTick(::BlockSource& region) const;

    MCAPI void _applyEffects(::BlockSource& region);

    MCAPI void _checkShape(::BlockSource& region);

    MCAPI void _updateTarget(::BlockSource& region);

#ifdef LL_PLAT_C
    MCAPI void incrementAnimationValue(float animationStep);

    MCAPI void incrementWindLevel();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::BlockSource& region);

    MCFOLD bool $hasAlphaLayer() const;

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const&) const;

    MCAPI void $load(::ILevel& tag, ::CompoundTag const& dataLoadHelper, ::DataLoadHelper&);

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
