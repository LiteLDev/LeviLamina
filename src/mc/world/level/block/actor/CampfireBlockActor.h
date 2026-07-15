#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemInstance.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class SaveContext;
// clang-format on

class CampfireBlockActor : public ::VanillaBlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 512, ::ItemInstance[4]> mCookingItem;
    ::ll::TypedStorage<4, 16, int[4]>             mCookingTime;
    ::ll::TypedStorage<1, 1, bool>                mWasLit;
    ::ll::TypedStorage<4, 4, int>                 mNextSmokeParticleTick;
    // NOLINTEND

public:
    // prevent constructor by default
    CampfireBlockActor();

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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CampfireBlockActor(::BlockPos const& pos);

    MCAPI void dropAllItems(::BlockSource& region);

    MCAPI bool setItem(::BlockSource&, ::ItemInstance const& item);
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
    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();

    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();
    // NOLINTEND
};
