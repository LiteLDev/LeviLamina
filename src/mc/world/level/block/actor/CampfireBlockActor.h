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
class HashedString;
class ItemInstance;
class Level;
class SaveContext;
// clang-format on

class CampfireBlockActor : public ::BlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 512> mUnk949ab4;
    ::ll::UntypedStorage<4, 16>  mUnk82ac43;
    ::ll::UntypedStorage<1, 1>   mUnkf5d0aa;
    ::ll::UntypedStorage<4, 4>   mUnk85654f;
    // NOLINTEND

public:
    // prevent constructor by default
    CampfireBlockActor& operator=(CampfireBlockActor const&);
    CampfireBlockActor(CampfireBlockActor const&);
    CampfireBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 1
    virtual void load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 19
    virtual float getShadowRadius(::BlockSource&) const /*override*/;

    // vIndex: 8
    virtual void onChanged(::BlockSource& region) /*override*/;

    // vIndex: 43
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    // vIndex: 44
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~CampfireBlockActor() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CampfireBlockActor(::BlockPos const& pos);

    MCAPI void _finishCooking(::BlockSource& region, int slot);

    MCAPI void dropAllItems(::BlockSource& region);

    MCAPI ::HashedString const& getCampfireTag(::BlockSource const& region) const;

    MCAPI ::ItemInstance const& getCookingItem(int slot);

    MCAPI bool setItem(::BlockSource&, ::ItemInstance const& item);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& MAX_SMOKE_THRESHOLD_COUNTER();

    MCAPI static int const& MIN_SMOKE_THRESHOLD_COUNTER();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::BlockSource& region);

    MCAPI void $load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI float $getShadowRadius(::BlockSource&) const;

    MCAPI void $onChanged(::BlockSource& region);

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
