#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/controllers/ItemTakeType.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#include "mc/world/containers/managers/controllers/CraftingSessionInfo.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/BlockSourceListener.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class CraftingContainerManagerModel;
class ItemStack;
class ItemStackBase;
class Recipe;
class Recipes;
struct ActorBlockSyncMessage;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct ItemStateData;
struct ItemTransferAmount;
struct SelectedSlotInfo;
// clang-format on

class CraftingContainerManagerController : public ::ContainerManagerController {
public:
    // CraftingContainerManagerController inner types declare
    // clang-format off
    struct BlockChangeListener;
    // clang-format on
    
    // CraftingContainerManagerController inner types define
    struct BlockChangeListener : public ::BlockSourceListener {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk1d4d7a;
        ::ll::UntypedStorage<8, 8> mUnk2b9a4e;
        ::ll::UntypedStorage<8, 64> mUnk2519ad;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        BlockChangeListener& operator=(BlockChangeListener const&);
        BlockChangeListener(BlockChangeListener const&);
        BlockChangeListener();
    
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~BlockChangeListener() /*override*/ = default;
    
        // vIndex: 4
        virtual void onBlockChanged(::BlockSource& source, ::BlockPos const& pos, uint layer, ::Block const& block, ::Block const& oldBlock, int updateFlags, ::ActorBlockSyncMessage const* syncMsg, ::BlockChangedEventTarget eventTarget, ::Actor* blockChangeSource) /*override*/;
    
        // vIndex: 2
        virtual void onSourceDestroyed(::BlockSource& source) /*override*/;
        // NOLINTEND
    
    public:
        // virtual function thunks
        // NOLINTBEGIN
    
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::CraftingContainerManagerModel>> mCraftingContainerManagerModel;
    ::ll::TypedStorage<4, 4, int> mGridSize;
    ::ll::TypedStorage<8, 8, ::Recipes*> mLevelRecipes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::Recipe const>>> mRecipes;
    ::ll::TypedStorage<8, 8, ::Recipe const*> mCraftingRecipe;
    ::ll::TypedStorage<8, 8, ::Recipe const*> mSelectedRecipe;
    ::ll::TypedStorage<1, 1, bool> mDisplayingInvalidRecipe;
    ::ll::TypedStorage<1, 1, bool> mClearInputGridOnChange;
    ::ll::TypedStorage<8, 40, ::SlotData const> mCreatedItemOutputSlot;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStateData>> mSavedInventoryState;
    ::ll::TypedStorage<8, 48, ::CraftingSessionInfo> mCraftingInformation;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>> mRemainingItems;
    ::ll::TypedStorage<8, 128, ::ItemInstance> mResultPreviewItem;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>> mAllResults;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>> mListenerLifeIndicator;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CraftingContainerManagerController::BlockChangeListener>> mBlockChangeListener;
    ::ll::TypedStorage<1, 1, bool> mCloseCraftingContainer;
    ::ll::TypedStorage<1, 1, bool> mIsCrafting;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftingContainerManagerController() /*override*/ = default;

    // vIndex: 27
    virtual bool isOutputSlot(::std::string const&) const /*override*/;

    // vIndex: 9
    virtual void handleTakeAmount(::SlotData const&, int, ::SlotData const&) /*override*/;

    // vIndex: 10
    virtual void handleTakeAll(::SlotData const&, ::SlotData const&) /*override*/;

    // vIndex: 11
    virtual void handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&) /*override*/;

    // vIndex: 12
    virtual void handleTakeHalf(::SlotData const&, ::SlotData const&) /*override*/;

    // vIndex: 13
    virtual void handlePlaceOne(::SlotData const&, ::SlotData const&) /*override*/;

    // vIndex: 15
    virtual int handleAutoPlace(::SlotData const&, int, ::std::vector<::AutoPlaceItem> const&, ::std::vector<::AutoPlaceResult>&) /*override*/;

    // vIndex: 16
    virtual int handleAutoPlaceStack(::SlotData const&, ::ItemTakeType, ::std::vector<::AutoPlaceItem> const&, ::std::vector<::AutoPlaceResult>&) /*override*/;

    // vIndex: 17
    virtual void handleSplitSingle(::SlotData const&, ::SlotData const&) /*override*/;

    // vIndex: 18
    virtual void handleSplitMultiple(::SelectedSlotInfo const&, ::ItemInstance const&, ::SlotData const&) /*override*/;

    // vIndex: 25
    virtual void handleAddToStack(::SlotData const&, ::SlotData const&, ::ItemTakeType) /*override*/;

    // vIndex: 21
    virtual bool handleDrop(::SlotData const&, ::ItemTransferAmount const) /*override*/;

    // vIndex: 26
    virtual void closeContainers() /*override*/;

    // vIndex: 8
    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
