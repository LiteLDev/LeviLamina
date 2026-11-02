#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/Container.h"
#include "mc/world/actor/Hopper.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/Tick.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

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

class HopperBlockActor : public ::VanillaBlockActor, public ::Container, public ::Hopper {
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit HopperBlockActor(::BlockPos const& pos);

    MCNAPI int _countItems() const;

    MCNAPI void _tick(::BlockSource& region, int maxRecursion);

    MCNAPI ::FurnaceBlockActor* getAttachedFurnace(::BlockSource& region);

    MCNAPI bool isAttachedToChestAndFurnace(::BlockSource& region);

    MCNAPI bool isAttachedToContainerType(::BlockSource& region, ::SharedTypes::Legacy::ContainerType containerType);

    MCNAPI bool isSourceOfContainerType(::BlockSource& region, ::SharedTypes::Legacy::ContainerType containerType);
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

    MCNAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCAPI void $setItem(int slot, ::ItemStack const& item);

    MCNAPI ::std::string $getName() const;

    MCNAPI int $getContainerSize() const;

    MCNAPI int $getMaxStackSize() const;

    MCNAPI void $startOpen(::Actor&);

    MCNAPI void $stopOpen(::Actor& actor);

    MCNAPI ::Container* $getContainer();

    MCNAPI ::Container const* $getContainer() const;

    MCNAPI void $setContainerChanged(int slot);

    MCNAPI void $onRemoved(::BlockSource&);

    MCNAPI void $onNeighborChanged(::BlockSource& region, ::BlockPos const&);

    MCNAPI void $onMove();

    MCNAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );

    MCNAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource&);


    // NOLINTEND
};
