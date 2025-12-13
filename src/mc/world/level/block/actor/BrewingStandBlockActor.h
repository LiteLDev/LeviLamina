#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class Item;
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
    virtual ~BrewingStandBlockActor() /*override*/ = default;

    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    virtual void setItem(int modelSlot, ::ItemStack const& item) /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual int getMaxStackSize() const /*override*/;

    virtual int getContainerSize() const /*override*/;

    virtual void startOpen(::Actor&) /*override*/;

    virtual void stopOpen(::Actor& actor) /*override*/;

    virtual void setContainerChanged(int slot) /*override*/;

    virtual void onRemoved(::BlockSource&) /*override*/;

    virtual bool canPushInItem(int slot, int face, ::ItemStack const& item) const /*override*/;

    virtual bool canPullOutItem(int slot, int face, ::ItemStack const&) const /*override*/;

    virtual ::Container* getContainer() /*override*/;

    virtual ::Container const* getContainer() const /*override*/;

    virtual void load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual void tick(::BlockSource& region) /*override*/;

    virtual void onChanged(::BlockSource& region) /*override*/;

    virtual void onMove() /*override*/;

    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void brew();

    MCAPI bool canBrew();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCAPI void $setItem(int modelSlot, ::ItemStack const& item);

    MCFOLD ::std::string $getName() const;

    MCFOLD int $getMaxStackSize() const;

    MCFOLD int $getContainerSize() const;

    MCFOLD void $startOpen(::Actor&);

    MCFOLD void $stopOpen(::Actor& actor);

    MCFOLD void $setContainerChanged(int slot);

    MCFOLD void $onRemoved(::BlockSource&);

    MCAPI bool $canPushInItem(int slot, int face, ::ItemStack const& item) const;

    MCAPI bool $canPullOutItem(int slot, int face, ::ItemStack const&) const;

    MCFOLD ::Container* $getContainer();

    MCFOLD ::Container const* $getContainer() const;

    MCAPI void $load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $tick(::BlockSource& region);

    MCAPI void $onChanged(::BlockSource& region);

    MCFOLD void $onMove();

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
