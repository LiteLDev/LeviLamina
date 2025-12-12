#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class SaveContext;
// clang-format on

class BedBlockActor : public ::BlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>             mDyeColor;
    ::ll::TypedStorage<1, 1, bool>            mDirty;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mPetSleepingOnBed;
    ::ll::TypedStorage<8, 8, ::Block const&>  mBedBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    BedBlockActor& operator=(BedBlockActor const&);
    BedBlockActor(BedBlockActor const&);
    BedBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 9
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 11
    virtual void onPlace(::BlockSource& region) /*override*/;

    // vIndex: 10
    virtual void onChanged(::BlockSource& region) /*override*/;

    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 3
    virtual bool saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 21
    virtual ::BlockActor* getCrackEntity(::BlockSource& region, ::BlockPos const& pos) /*override*/;

    // vIndex: 25
    virtual ::std::string getName() const /*override*/;

    // vIndex: 42
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    // vIndex: 43
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~BedBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BedBlockActor(::BlockPos const& pos);

    MCAPI void stopSleepingOn(::BlockSource& region, bool forcefulAwake);
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

    MCFOLD void $onPlace(::BlockSource& region);

    MCFOLD void $onChanged(::BlockSource& region);

    MCAPI void $load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI bool $saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI ::BlockActor* $getCrackEntity(::BlockSource& region, ::BlockPos const& pos);

    MCAPI ::std::string $getName() const;

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
