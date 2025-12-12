#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/Container.h"
#include "mc/world/actor/Hopper.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/Tick.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class FurnaceBlockActor;
class ILevel;
class SaveContext;
// clang-format on

class HopperBlockActor : public ::BlockActor, public ::Container, public ::Hopper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 760, ::ItemStack[5]> mItems;
    ::ll::TypedStorage<8, 8, ::Tick>           mLastTick;
    // NOLINTEND

public:
    // prevent constructor by default
    HopperBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::BlockSource& region) /*override*/;

    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual int getContainerSize() const /*override*/;

    virtual int getMaxStackSize() const /*override*/;

    virtual void startOpen(::Actor&) /*override*/;

    virtual void stopOpen(::Actor& actor) /*override*/;

    virtual ::Container* getContainer() /*override*/;

    virtual ::Container const* getContainer() const /*override*/;

    virtual void setContainerChanged(int slot) /*override*/;

    virtual void onRemoved(::BlockSource&) /*override*/;

    virtual void onNeighborChanged(::BlockSource& region, ::BlockPos const&) /*override*/;

    virtual void onMove() /*override*/;

    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource&) /*override*/;

    virtual ~HopperBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit HopperBlockActor(::BlockPos const& pos);

    MCAPI int _countItems() const;

    MCAPI void _ensureTickingOrder(::BlockSource& region, int maxRecursion);

    MCAPI void _tick(::BlockSource& region, int maxRecursion);

    MCAPI ::FurnaceBlockActor* getAttachedFurnace(::BlockSource& region);

    MCAPI bool isAttachedToChestAndFurnace(::BlockSource& region);

    MCAPI bool isAttachedToContainerType(::BlockSource& region, ::SharedTypes::Legacy::ContainerType containerType);

    MCAPI bool isSourceOfContainerType(::BlockSource& region, ::SharedTypes::Legacy::ContainerType containerType);
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

    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCAPI void $setItem(int slot, ::ItemStack const& item);

    MCAPI ::std::string $getName() const;

    MCFOLD int $getContainerSize() const;

    MCFOLD int $getMaxStackSize() const;

    MCFOLD void $startOpen(::Actor&);

    MCFOLD void $stopOpen(::Actor& actor);

    MCFOLD ::Container* $getContainer();

    MCFOLD ::Container const* $getContainer() const;

    MCFOLD void $setContainerChanged(int slot);

    MCFOLD void $onRemoved(::BlockSource&);

    MCAPI void $onNeighborChanged(::BlockSource& region, ::BlockPos const&);

    MCFOLD void $onMove();

    MCAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForBlockActor();

    MCAPI static void** $vftableForContainer();
    // NOLINTEND
};
