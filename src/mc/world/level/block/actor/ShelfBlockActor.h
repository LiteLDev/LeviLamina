#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/Container.h"
#include "mc/world/item/ClockSpriteCalculator.h"
#include "mc/world/item/CompassSpriteCalculator.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class ItemStack;
class SaveContext;
// clang-format on

class ShelfBlockActor : public ::BlockActor, public ::Container {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::ClockSpriteCalculator>    mClockSpriteCalc;
    ::ll::TypedStorage<8, 32, ::CompassSpriteCalculator>  mCompassSpriteCalc;
    ::ll::TypedStorage<8, 32, ::CompassSpriteCalculator>  mRecoveryCompassSpriteCalc;
    ::ll::TypedStorage<1, 1, bool>                        mUpdateCalculators;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>> mItems;
    ::ll::TypedStorage<1, 1, bool>                        mIgnoreLighting;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>            mDisplayEntity;
    ::ll::TypedStorage<1, 1, bool>                        mEmitSingleItemSwapVibration;
    // NOLINTEND

public:
    // prevent constructor by default
    ShelfBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string getName() const /*override*/;

    virtual void tick(::BlockSource& region) /*override*/;

    virtual void onChanged(::BlockSource& region) /*override*/;

    virtual void onRemoved(::BlockSource& region) /*override*/;

    virtual ::Container* getContainer() /*override*/;

    virtual ::Container const* getContainer() const /*override*/;

    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    virtual void setItem(int modelSlot, ::ItemStack const& item) /*override*/;

    virtual int getMaxStackSize() const /*override*/;

    virtual int getContainerSize() const /*override*/;

    virtual void startOpen(::Actor&) /*override*/;

    virtual void stopOpen(::Actor& actor) /*override*/;

    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    virtual ~ShelfBlockActor() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ShelfBlockActor(::BlockPos const& pos);

    MCNAPI void _loadItems(::CompoundTag const& base, ::ILevel& level);

    MCNAPI void _setItemInternal(int slot, ::ItemStack const& item, bool isLoading, bool emitVibrations);

    MCNAPI void updateItemCalculators(::ItemStack const& item, ::BlockSource const& region);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $getName() const;

    MCNAPI void $tick(::BlockSource& region);

    MCNAPI void $onChanged(::BlockSource& region);

    MCNAPI void $onRemoved(::BlockSource& region);

    MCNAPI ::Container* $getContainer();

    MCNAPI ::Container const* $getContainer() const;

    MCNAPI ::ItemStack const& $getItem(int slot) const;

    MCNAPI void $setItem(int modelSlot, ::ItemStack const& item);

    MCNAPI int $getMaxStackSize() const;

    MCNAPI int $getContainerSize() const;

    MCNAPI void $startOpen(::Actor&);

    MCNAPI void $stopOpen(::Actor& actor);

    MCNAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );

    MCNAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForContainer();
    // NOLINTEND
};
