#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
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

class ChiseledBookshelfBlockActor : public ::BlockActor, public ::Container {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>> mItems;
    ::ll::TypedStorage<4, 4, uint>                        mLastInteractedSlot;
    // NOLINTEND

public:
    // prevent constructor by default
    ChiseledBookshelfBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    virtual void setItem(int modelSlot, ::ItemStack const& item) /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual int getMaxStackSize() const /*override*/;

    virtual int getContainerSize() const /*override*/;

    virtual void startOpen(::Actor&) /*override*/;

    virtual void stopOpen(::Actor& actor) /*override*/;

    virtual ::Container* getContainer() /*override*/;

    virtual ::Container const* getContainer() const /*override*/;

    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    virtual bool isEmpty() const /*override*/;

    virtual bool canPushInItem(int slot, int, ::ItemStack const& item) const /*override*/;

    virtual bool canPullOutItem(int slot, int, ::ItemStack const&) const /*override*/;

    virtual bool addItemToFirstEmptySlot(::ItemStack const& item) /*override*/;

    virtual void onChanged(::BlockSource& region) /*override*/;

    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    virtual ~ChiseledBookshelfBlockActor() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ChiseledBookshelfBlockActor(::BlockPos const& pos);

    MCAPI void _loadItems(::CompoundTag const& base, ::ILevel& level);

    MCAPI void _setItemInternal(int slot, ::ItemStack const& item, bool isLoading);

    MCAPI ::ItemStack retrieveBook(int slot);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool allowedItem(::ItemStack const& item);

    MCAPI static ::ChiseledBookshelfBlockActor* tryGet(::BlockSource& region, ::BlockPos const& pos);
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
    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCAPI void $setItem(int modelSlot, ::ItemStack const& item);

    MCAPI ::std::string $getName() const;

    MCFOLD int $getMaxStackSize() const;

    MCFOLD int $getContainerSize() const;

    MCFOLD void $startOpen(::Actor&);

    MCFOLD void $stopOpen(::Actor& actor);

    MCFOLD ::Container* $getContainer();

    MCFOLD ::Container const* $getContainer() const;

    MCAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );

    MCAPI bool $isEmpty() const;

    MCAPI bool $canPushInItem(int slot, int, ::ItemStack const& item) const;

    MCAPI bool $canPullOutItem(int slot, int, ::ItemStack const&) const;

    MCAPI bool $addItemToFirstEmptySlot(::ItemStack const& item);

    MCAPI void $onChanged(::BlockSource& region);

    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForContainer();

    MCAPI static void** $vftableForBlockActor();
    // NOLINTEND
};
