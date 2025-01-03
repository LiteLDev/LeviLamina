#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class Item;
class ItemDescriptor;
class ItemStack;
class Level;
class Player;
class SaveContext;
// clang-format on

class BrewingStandBlockActor : public ::BlockActor, public ::Container {
public:
    // BrewingStandBlockActor inner types define
    enum : int {
        Ingredient = 0,
        Potion1    = 1,
        Potion2    = 2,
        Potion3    = 3,
        Fuel       = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>              mBrewTime;
    ::ll::TypedStorage<4, 4, int>              mFuelAmount;
    ::ll::TypedStorage<4, 4, int>              mFuelTotal;
    ::ll::TypedStorage<8, 8, ::Item const*>    mIngredient;
    ::ll::TypedStorage<8, 760, ::ItemStack[5]> mItems;
    ::ll::TypedStorage<1, 1, bool>             mNotifyPlayersOnChange;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BrewingStandBlockActor() /*override*/ = default;

    // vIndex: 7
    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    // vIndex: 12
    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;

    // vIndex: 26
    virtual ::std::string getName() const /*override*/;

    // vIndex: 21
    virtual int getMaxStackSize() const /*override*/;

    // vIndex: 20
    virtual int getContainerSize() const /*override*/;

    // vIndex: 22
    virtual void startOpen(::Player&) /*override*/;

    // vIndex: 23
    virtual void stopOpen(::Player& player) /*override*/;

    // vIndex: 31
    virtual void setContainerChanged(int slot) /*override*/;

    // vIndex: 13
    virtual void onRemoved(::BlockSource&) /*override*/;

    // vIndex: 29
    virtual bool canPushInItem(int slot, int face, ::ItemStack const& item) const /*override*/;

    // vIndex: 30
    virtual bool canPullOutItem(int slot, int face, ::ItemStack const&) const /*override*/;

    // vIndex: 33
    virtual ::Container* getContainer() /*override*/;

    // vIndex: 32
    virtual ::Container const* getContainer() const /*override*/;

    // vIndex: 1
    virtual void load(::Level& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 7
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 8
    virtual void onChanged(::BlockSource& region) /*override*/;

    // vIndex: 12
    virtual void onMove() /*override*/;

    // vIndex: 2
    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BrewingStandBlockActor(::BlockPos const& pos);

    MCAPI void brew();

    MCAPI bool canBrew();

    MCAPI int getBrewTime() const;

    MCAPI int getFuelAmount() const;

    MCAPI int getFuelTotal() const;

    MCAPI void setBrewTime(int value);

    MCAPI void setFuelAmount(int value);

    MCAPI void setFuelTotal(int value);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isFuel(::ItemDescriptor const& itemDescriptor);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCAPI void $setItem(int slot, ::ItemStack const& item);

    MCAPI ::std::string $getName() const;

    MCAPI int $getMaxStackSize() const;

    MCAPI int $getContainerSize() const;

    MCAPI void $startOpen(::Player&);

    MCAPI void $stopOpen(::Player& player);

    MCAPI void $setContainerChanged(int slot);

    MCAPI void $onRemoved(::BlockSource&);

    MCAPI bool $canPushInItem(int slot, int face, ::ItemStack const& item) const;

    MCAPI bool $canPullOutItem(int slot, int face, ::ItemStack const&) const;

    MCAPI ::Container* $getContainer();

    MCAPI ::Container const* $getContainer() const;

    MCAPI void $load(::Level& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $tick(::BlockSource& region);

    MCAPI void $onChanged(::BlockSource& region);

    MCAPI void $onMove();

    MCAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForBlockActor();

    MCAPI static void** $vftableForContainer();
    // NOLINTEND
};
