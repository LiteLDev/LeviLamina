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
    // vIndex: 0
    virtual ~ConduitBlockActor() /*override*/ = default;

    // vIndex: 8
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 21
    virtual bool hasAlphaLayer() const /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 44
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    // vIndex: 45
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ConduitBlockActor(::BlockPos const& pos);

    MCNAPI void _animateTick(::BlockSource& region) const;

    MCNAPI void _checkShape(::BlockSource& region);

    MCNAPI void _updateTarget(::BlockSource& region);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::BlockSource& region);

    MCNAPI bool $hasAlphaLayer() const;

    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCNAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
