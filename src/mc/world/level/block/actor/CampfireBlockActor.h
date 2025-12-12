#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemInstance.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class HashedString;
class ILevel;
class SaveContext;
// clang-format on

class CampfireBlockActor : public ::BlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 512, ::ItemInstance[4]> mCookingItem;
    ::ll::TypedStorage<4, 16, int[4]>             mCookingTime;
    ::ll::TypedStorage<1, 1, bool>                mWasLit;
    ::ll::TypedStorage<4, 4, int>                 mNextSmokeParticleTick;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::BlockSource& region) /*override*/;

    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual float getShadowRadius(::BlockSource&) const /*override*/;

    virtual void onChanged(::BlockSource& region) /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    virtual ~CampfireBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _finishCooking(::BlockSource& region, int slot);

    MCAPI void dropAllItems(::BlockSource& region);

    MCAPI ::HashedString const& getCampfireTag(::BlockSource const& region) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::BlockSource& region);

    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCFOLD float $getShadowRadius(::BlockSource&) const;

    MCFOLD void $onChanged(::BlockSource& region);

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
