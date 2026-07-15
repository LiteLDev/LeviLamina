#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/DispenserBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockSource;
class CompoundTag;
class CraftingContainer;
class DataLoadHelper;
class ILevel;
class ItemInstance;
class ItemStack;
class Level;
class SaveContext;
// clang-format on

class CrafterBlockActor : public ::DispenserBlockActor {
public:
    // CrafterBlockActor inner types declare
    // clang-format off
    class LruCache;
    // clang-format on

    // CrafterBlockActor inner types define
    class LruCache {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<uint64>> mRecencyOrderedIndexes;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::CraftingContainer, ::std::vector<::ItemInstance>>>>
            mCachedValues;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::bitset<9>>               mDisabledSlots;
    ::ll::TypedStorage<8, 48, ::CrafterBlockActor::LruCache> mCraftedRecipesCache;
    ::ll::TypedStorage<4, 4, int>                            mTicksLeftInCraftingState;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string getName() const /*override*/;

    virtual bool canPushInItem(int slot, int, ::ItemStack const& item) const /*override*/;

    virtual bool isSlotDisabled(int slot) const /*override*/;

    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual void tick(::BlockSource& region) /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void onDisabledSlotToggleRequested(::BlockSource& region, int slot, bool shouldDisable);

    MCAPI void setToCraftingVisualState(::BlockSource& region);

    MCAPI bool tryMoveItemsIntoContainer(::BlockSource& region, ::std::vector<::ItemInstance>& items);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::ItemInstance> getCraftableItem(::CraftingContainer& craftingGrid, ::Level& level);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $getName() const;

    MCAPI bool $canPushInItem(int slot, int, ::ItemStack const& item) const;

    MCAPI bool $isSlotDisabled(int slot) const;

    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $tick(::BlockSource& region);

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();
    // NOLINTEND
};
