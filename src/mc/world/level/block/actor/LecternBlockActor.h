#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/item/ItemStack.h"
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
class SaveContext;
// clang-format on

class LecternBlockActor : public ::BlockActor, public ::Container {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>           mPage;
    ::ll::TypedStorage<4, 4, int>           mTotalPages;
    ::ll::TypedStorage<8, 152, ::ItemStack> mBook;
    // NOLINTEND

public:
    // prevent constructor by default
    LecternBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ItemStack const& getItem(int) const /*override*/;

    virtual void setItem(int item, ::ItemStack const&) /*override*/;

    virtual int getMaxStackSize() const /*override*/;

    virtual int getContainerSize() const /*override*/;

    virtual void startOpen(::Actor&) /*override*/;

    virtual void stopOpen(::Actor& actor) /*override*/;

    virtual ::Container* getContainer() /*override*/;

    virtual ::Container const* getContainer() const /*override*/;

    virtual void load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual void onChanged(::BlockSource& region) /*override*/;

    virtual void serverInitItemStackIds(
        int containerSlot,
        int onNetIdChanged,
        ::std::function<void(int, ::ItemStack const&)>
    ) /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LecternBlockActor(::BlockPos const& pos);

    MCAPI void dropBook(::BlockSource& region);

    MCFOLD int getPage() const;

    MCFOLD int getTotalPages() const;

    MCAPI bool hasBook() const;

    MCAPI bool isPageInBounds(int page) const;

    MCAPI void setItemFromBlock(int slot, ::ItemStack const& item);

    MCAPI void setPageOnServer(int page, ::BlockSource& region);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::ItemStack const& $getItem(int) const;

    MCAPI void $setItem(int item, ::ItemStack const&);

    MCFOLD int $getMaxStackSize() const;

    MCFOLD int $getContainerSize() const;

    MCFOLD void $startOpen(::Actor&);

    MCFOLD void $stopOpen(::Actor& actor);

    MCFOLD ::Container* $getContainer();

    MCFOLD ::Container const* $getContainer() const;

    MCAPI void $load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $onChanged(::BlockSource& region);

    MCAPI void
    $serverInitItemStackIds(int containerSlot, int onNetIdChanged, ::std::function<void(int, ::ItemStack const&)>);

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForBlockActor();

    MCAPI static void** $vftableForContainer();
    // NOLINTEND
};
