#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/LevelSoundEvent.h"
#include "mc/world/Container.h"
#include "mc/world/ContainerType.h"
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class HashedString;
class Item;
class ItemStack;
class ItemStackBase;
class Level;
class LevelChunk;
class Player;
class Recipes;
class SaveContext;
// clang-format on

class FurnaceBlockActor : public ::BlockActor, public ::Container {
public:
    // FurnaceBlockActor inner types define
    enum : int {
        SlotIngredient = 0,
        SlotFuel       = 1,
        SlotResult     = 2,
        NumItems       = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkadf70b;
    ::ll::UntypedStorage<4, 4>   mUnka16909;
    ::ll::UntypedStorage<4, 4>   mUnk52bdf8;
    ::ll::UntypedStorage<4, 4>   mUnk94e26f;
    ::ll::UntypedStorage<8, 456> mUnkc02a91;
    ::ll::UntypedStorage<1, 3>   mUnk5e9dca;
    ::ll::UntypedStorage<8, 64>  mUnkfb93d3;
    ::ll::UntypedStorage<8, 48>  mUnkc2519b;
    ::ll::UntypedStorage<4, 4>   mUnk89a71f;
    ::ll::UntypedStorage<4, 4>   mUnk244bc0;
    ::ll::UntypedStorage<4, 4>   mUnk505a19;
    ::ll::UntypedStorage<4, 4>   mUnk7ba5bb;
    ::ll::UntypedStorage<8, 8>   mUnk9dea1b;
    ::ll::UntypedStorage<8, 8>   mUnk30531c;
    ::ll::UntypedStorage<8, 128> mUnkce6f66;
    ::ll::UntypedStorage<1, 1>   mUnke94b38;
    ::ll::UntypedStorage<1, 1>   mUnk339135;
    // NOLINTEND

public:
    // prevent constructor by default
    FurnaceBlockActor& operator=(FurnaceBlockActor const&);
    FurnaceBlockActor(FurnaceBlockActor const&);
    FurnaceBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
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

    // vIndex: 13
    virtual void onRemoved(::BlockSource&) /*override*/;

    // vIndex: 22
    virtual void startOpen(::Player& player) /*override*/;

    // vIndex: 23
    virtual void stopOpen(::Player& player) /*override*/;

    // vIndex: 29
    virtual bool canPushInItem(int slot, int face, ::ItemStack const& item) const /*override*/;

    // vIndex: 30
    virtual bool canPullOutItem(int slot, int face, ::ItemStack const& item) const /*override*/;

    // vIndex: 33
    virtual ::Container* getContainer() /*override*/;

    // vIndex: 32
    virtual ::Container const* getContainer() const /*override*/;

    // vIndex: 1
    virtual void load(::Level& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 6
    virtual void onCustomTagLoadDone(::BlockSource& region) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 7
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 18
    virtual void onNeighborChanged(::BlockSource& region, ::BlockPos const& position) /*override*/;

    // vIndex: 12
    virtual void onMove() /*override*/;

    // vIndex: 2
    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    // vIndex: 42
    virtual void fixupOnLoad(::LevelChunk& lc) /*override*/;

    // vIndex: 43
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    // vIndex: 44
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~FurnaceBlockActor() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FurnaceBlockActor(::BlockPos const& pos);

    MCAPI FurnaceBlockActor(
        ::BlockActorType                       blockActorType,
        ::BlockPos const&                      pos,
        ::HashedString const&                  recipeTag,
        ::SharedTypes::Legacy::LevelSoundEvent smeltSound,
        ::ContainerType                        containerType,
        int                                    burnInterval,
        ::Block const&                         unlitFurnace,
        ::Block const&                         litFurnace
    );

    MCAPI void burn(::Recipes const& recipes);

    MCAPI bool canBurn(::Recipes const& recipes);

    MCAPI void checkForAlternativeFuelAchievement(::BlockSource& region, ::ItemStack const& item);

    MCAPI void checkForSmeltEverythingAchievement(::BlockSource& region);

    MCAPI int getLitDuration() const;

    MCAPI int getLitTime() const;

    MCAPI int getStoredXP() const;

    MCAPI int getTickCount() const;

    MCAPI bool isEmptiedByHopper(::BlockSource& region);

    MCAPI void onFurnaceBlockRemoved(::BlockSource& region);

    MCAPI void setLitDuration(int value);

    MCAPI void setLitTime(int value);

    MCAPI void setStoredXP(int value);

    MCAPI void setTickCount(int value);

    MCAPI void storeXPRewardForRemovingWithHopper(::ItemStackBase const& item, int numItemsSmelted);

    MCAPI int withdrawStoredXPReward();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static float _getXPRewardMultiplier(::ItemStackBase const& item);

    MCAPI static int _roundXPReward(float xpTotal);

    MCAPI static int getAvailableFuelSetCount(int slot, ::ItemStackBase const& item);

    MCAPI static float getBurnDuration(::ItemStackBase const& itemInstance, float burnInterval);

    MCAPI static float getItemBurnDuration(::Item const& item, float burnInterval);

    MCAPI static int getXPRewardFromSmeltingItems(::ItemStackBase const& item, int numItemsSmelted);

    MCAPI static bool isItemAllowedInFuelSlot(int slot, ::ItemStackBase const& item, int amount);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& BURN_DURATION_KEY();

    MCAPI static int const& BURN_INTERVAL();

    MCAPI static ::std::string const& BURN_TIME_KEY();

    MCAPI static ::std::string const& COOK_TIME_KEY();

    MCAPI static ::std::string const& CUSTOM_NAME_KEY();

    MCAPI static float const& DEFAULT_SMELTING_TIME();

    MCAPI static ::std::string const& ITEMS_LIST_KEY();

    MCAPI static ::std::string const& LAST_FUEL_KEY();

    MCAPI static ::std::string const& SLOT_KEY();

    MCAPI static ::std::string const& STORED_XP_DEPRECATED_KEY();

    MCAPI static ::std::string const& STORED_XP_KEY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);

    MCAPI void* $ctor(
        ::BlockActorType                       blockActorType,
        ::BlockPos const&                      pos,
        ::HashedString const&                  recipeTag,
        ::SharedTypes::Legacy::LevelSoundEvent smeltSound,
        ::ContainerType                        containerType,
        int                                    burnInterval,
        ::Block const&                         unlitFurnace,
        ::Block const&                         litFurnace
    );
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

    MCAPI void $setItem(int slot, ::ItemStack const& item);

    MCAPI ::std::string $getName() const;

    MCAPI int $getMaxStackSize() const;

    MCAPI int $getContainerSize() const;

    MCAPI void $onRemoved(::BlockSource&);

    MCAPI void $startOpen(::Player& player);

    MCAPI void $stopOpen(::Player& player);

    MCAPI bool $canPushInItem(int slot, int face, ::ItemStack const& item) const;

    MCAPI bool $canPullOutItem(int slot, int face, ::ItemStack const& item) const;

    MCAPI ::Container* $getContainer();

    MCAPI ::Container const* $getContainer() const;

    MCAPI void $load(::Level& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $onCustomTagLoadDone(::BlockSource& region);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $tick(::BlockSource& region);

    MCAPI void $onNeighborChanged(::BlockSource& region, ::BlockPos const& position);

    MCAPI void $onMove();

    MCAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );

    MCAPI void $fixupOnLoad(::LevelChunk& lc);

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForContainer();

    MCAPI static void** $vftableForBlockActor();
    // NOLINTEND
};
