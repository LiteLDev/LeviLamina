#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/Container.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/ItemStack.h"
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
class ILevel;
class Item;
class ItemStackBase;
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
    ::ll::TypedStorage<4, 4, int>                                    mLitTime;
    ::ll::TypedStorage<4, 4, int>                                    mLitDuration;
    ::ll::TypedStorage<4, 4, int>                                    mCookingProgress;
    ::ll::TypedStorage<4, 4, uint>                                   mStoredXP;
    ::ll::TypedStorage<8, 456, ::ItemStack[3]>                       mItems;
    ::ll::TypedStorage<1, 3, bool[3]>                                mDirty;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ActorUniqueID>> mPlayers;
    ::ll::TypedStorage<8, 48, ::HashedString const>                  mRecipeTag;
    ::ll::TypedStorage<4, 4, int const>                              mBurnInterval;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSmeltSoundEvent;
    ::ll::TypedStorage<4, 4, int>                                    mSoundTick;
    ::ll::TypedStorage<4, 4, int>                                    mSoundTickTarget;
    ::ll::TypedStorage<8, 8, ::Block const&>                         mUnlitFurnace;
    ::ll::TypedStorage<8, 8, ::Block const&>                         mLitFurnace;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                       mLastFuelItem;
    ::ll::TypedStorage<1, 1, bool>                                   mNoDrop;
    ::ll::TypedStorage<1, 1, bool>                                   mNeedsLitStateFixup;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    // vIndex: 12
    virtual void setItem(int modelSlot, ::ItemStack const& item) /*override*/;

    // vIndex: 27
    virtual ::std::string getName() const /*override*/;

    // vIndex: 21
    virtual int getMaxStackSize() const /*override*/;

    // vIndex: 20
    virtual int getContainerSize() const /*override*/;

    // vIndex: 14
    virtual void onRemoved(::BlockSource&) /*override*/;

    // vIndex: 22
    virtual void startOpen(::Player& player) /*override*/;

    // vIndex: 23
    virtual void stopOpen(::Player& player) /*override*/;

    // vIndex: 29
    virtual bool canPushInItem(int slot, int face, ::ItemStack const& item) const /*override*/;

    // vIndex: 30
    virtual bool canPullOutItem(int slot, int face, ::ItemStack const& item) const /*override*/;

    // vIndex: 34
    virtual ::Container* getContainer() /*override*/;

    // vIndex: 33
    virtual ::Container const* getContainer() const /*override*/;

    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 6
    virtual void onCustomTagLoadDone(::BlockSource& region) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 8
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 19
    virtual void onNeighborChanged(::BlockSource& region, ::BlockPos const& position) /*override*/;

    // vIndex: 13
    virtual void onMove() /*override*/;

    // vIndex: 2
    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    // vIndex: 43
    virtual void fixupOnLoad(::LevelChunk& lc) /*override*/;

    // vIndex: 44
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    // vIndex: 45
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~FurnaceBlockActor() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FurnaceBlockActor(
        ::BlockActorType                       blockActorType,
        ::BlockPos const&                      pos,
        ::HashedString const&                  recipeTag,
        ::SharedTypes::Legacy::LevelSoundEvent smeltSound,
        ::SharedTypes::Legacy::ContainerType   containerType,
        int                                    burnInterval,
        ::Block const&                         unlitFurnace,
        ::Block const&                         litFurnace
    );

    MCNAPI void _tryBroadcastBurnSound(::BlockSource& region);

    MCNAPI void burn(::Recipes const& recipes);

    MCNAPI bool canBurn(::Recipes const& recipes);

    MCNAPI void checkForAlternativeFuelAchievement(::BlockSource& region, ::ItemStack const& item);

    MCNAPI void checkForSmeltEverythingAchievement(::BlockSource& region);

    MCNAPI int withdrawStoredXPReward();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static float _getXPRewardMultiplier(::ItemStackBase const& item);

    MCNAPI static int getAvailableFuelSetCount(int slot, ::ItemStackBase const& item);

    MCNAPI static float getBurnDuration(::ItemStackBase const& itemInstance, float burnInterval);

    MCNAPI static float getItemBurnDuration(::Item const& item, float burnInterval);

    MCNAPI static int getXPRewardFromSmeltingItems(::ItemStackBase const& item, int numItemsSmelted);
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

    MCAPI static ::std::string const& FILTERED_CUSTOM_NAME_KEY();

    MCAPI static ::std::string const& ITEMS_LIST_KEY();

    MCAPI static ::std::string const& LAST_FUEL_KEY();

    MCAPI static ::std::string const& SLOT_KEY();

    MCAPI static ::std::string const& STORED_XP_DEPRECATED_KEY();

    MCAPI static ::std::string const& STORED_XP_KEY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::BlockActorType                       blockActorType,
        ::BlockPos const&                      pos,
        ::HashedString const&                  recipeTag,
        ::SharedTypes::Legacy::LevelSoundEvent smeltSound,
        ::SharedTypes::Legacy::ContainerType   containerType,
        int                                    burnInterval,
        ::Block const&                         unlitFurnace,
        ::Block const&                         litFurnace
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemStack const& $getItem(int slot) const;

    MCNAPI void $setItem(int modelSlot, ::ItemStack const& item);

    MCNAPI ::std::string $getName() const;

    MCNAPI int $getMaxStackSize() const;

    MCNAPI int $getContainerSize() const;

    MCNAPI void $onRemoved(::BlockSource&);

    MCNAPI void $startOpen(::Player& player);

    MCNAPI void $stopOpen(::Player& player);

    MCNAPI bool $canPushInItem(int slot, int face, ::ItemStack const& item) const;

    MCNAPI bool $canPullOutItem(int slot, int face, ::ItemStack const& item) const;

    MCNAPI ::Container* $getContainer();

    MCNAPI ::Container const* $getContainer() const;

    MCNAPI void $load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);

    MCNAPI void $onCustomTagLoadDone(::BlockSource& region);

    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI void $tick(::BlockSource& region);

    MCNAPI void $onNeighborChanged(::BlockSource& region, ::BlockPos const& position);

    MCNAPI void $onMove();

    MCNAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );

    MCNAPI void $fixupOnLoad(::LevelChunk& lc);

    MCNAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCNAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForContainer();

    MCNAPI static void** $vftableForBlockActor();
    // NOLINTEND
};
