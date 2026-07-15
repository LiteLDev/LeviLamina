#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

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

class ChiseledBookshelfBlockActor : public ::VanillaBlockActor, public ::Container {
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
    virtual ::ItemStack const& getItem(int) const /*override*/;

    virtual void setItem(int, ::ItemStack const&) /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual int getMaxStackSize() const /*override*/;

    virtual int getContainerSize() const /*override*/;

    virtual void startOpen(::Actor&) /*override*/;

    virtual void stopOpen(::Actor& actor) /*override*/;

    virtual ::Container* getContainer() /*override*/;

    virtual ::Container const* getContainer() const /*override*/;

    virtual void serverInitItemStackIds(int, int, ::std::function<void(int, ::ItemStack const&)>) /*override*/;

    virtual bool isEmpty() const /*override*/;

    virtual bool canPushInItem(int, int, ::ItemStack const&) const /*override*/;

    virtual bool canPullOutItem(int, int, ::ItemStack const&) const /*override*/;

    virtual bool addItemToFirstEmptySlot(::ItemStack const& item) /*override*/;

    virtual void onChanged(::BlockSource&) /*override*/;

    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& helper) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& context) const /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ChiseledBookshelfBlockActor(::BlockPos const& pos);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool allowedItem(::ItemStack const& item);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
