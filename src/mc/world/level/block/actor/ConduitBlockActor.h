#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class Level;
class SaveContext;
struct ActorUniqueID;
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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ConduitBlockActor() /*override*/ = default;

    // vIndex: 7
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 20
    virtual bool hasAlphaLayer() const /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 1
    virtual void load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 43
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    // vIndex: 44
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ConduitBlockActor(::BlockPos const& pos);

    MCAPI void _animateTick(::BlockSource& region) const;

    MCAPI void _checkShape(::BlockSource& region);

    MCAPI void _updateTarget(::BlockSource& region);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::BlockSource& region);

    MCFOLD bool $hasAlphaLayer() const;

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
