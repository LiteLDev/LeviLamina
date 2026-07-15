#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/controllers/ItemCraftType.h"
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
class ContainerController;
class CraftingContainerManagerModel;
class ItemStack;
class ItemStackBase;
class Recipe;
class Recipes;
struct ActorBlockSyncMessage;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct CraftableCountingData;
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
        ::ll::UntypedStorage<8, 8>  mUnk1d4d7a;
        ::ll::UntypedStorage<8, 8>  mUnk2b9a4e;
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
        virtual ~BlockChangeListener() /*override*/ = default;

        virtual void onBlockChanged(
            ::BlockSource&                 source,
            ::BlockPos const&              pos,
            uint                           layer,
            ::Block const&                 block,
            ::Block const&                 oldBlock,
            int                            updateFlags,
            ::ActorBlockSyncMessage const* syncMsg,
            ::BlockChangedEventTarget      eventTarget,
            ::Actor*                       blockChangeSource
        ) /*override*/;

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
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::CraftingContainerManagerModel>>        mCraftingContainerManagerModel;
    ::ll::TypedStorage<4, 4, int>                                                      mGridSize;
    ::ll::TypedStorage<8, 8, ::Recipes*>                                               mLevelRecipes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::Recipe const>>> mRecipes;
    ::ll::TypedStorage<8, 8, ::Recipe const*>                                          mCraftingRecipe;
    ::ll::TypedStorage<8, 8, ::Recipe const*>                                          mSelectedRecipe;
    ::ll::TypedStorage<1, 1, bool>                                                     mDisplayingInvalidRecipe;
    ::ll::TypedStorage<1, 1, bool>                                                     mClearInputGridOnChange;
    ::ll::TypedStorage<8, 40, ::SlotData const>                                        mCreatedItemOutputSlot;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStateData>>                          mSavedInventoryState;
    ::ll::TypedStorage<8, 48, ::CraftingSessionInfo>                                   mCraftingInformation;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>>                              mRemainingItems;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                                         mResultPreviewItem;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>>                           mAllResults;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                                 mListenerLifeIndicator;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CraftingContainerManagerController::BlockChangeListener>>
                                   mBlockChangeListener;
    ::ll::TypedStorage<1, 1, bool> mCloseCraftingContainer;
    ::ll::TypedStorage<1, 1, bool> mIsCrafting;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    CraftingContainerManagerController();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftingContainerManagerController() /*override*/ = default;

    virtual bool isOutputSlot(::std::string const& collectionName) const /*override*/;

    virtual bool handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot) /*override*/;

    virtual bool handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;

    virtual bool handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot) /*override*/;

    virtual bool handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;

    virtual bool handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot) /*override*/;

    virtual int handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    ) /*override*/;

    virtual int handleAutoPlaceStack(
        ::SlotData const&                     srcSlot,
        ::ItemTakeType                        takeType,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    ) /*override*/;

    virtual void handleSplitSingle(::SlotData const& srcSlot, ::SlotData const& dstSlot) /*override*/;

    virtual void handleSplitMultiple(
        ::SelectedSlotInfo const& selected,
        ::ItemInstance const&     itemTemplate,
        ::SlotData const&         dstSlot
    ) /*override*/;

    virtual bool
    handleAddToStack(::SlotData const& dstSlot, ::SlotData const& srcSlot, ::ItemTakeType type) /*override*/;

    virtual bool handleDrop(::SlotData const& srcSlot, ::ItemTransferAmount const transferAmount) /*override*/;

    virtual void closeContainers() /*override*/;

    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const& slot) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit CraftingContainerManagerController(
        ::std::weak_ptr<::CraftingContainerManagerModel> containerManagerModel
    );

    MCNAPI bool
    autoCraftItem(::SlotData const& recipeSlot, ::ItemCraftType craftAmount, ::std::vector<::AutoPlaceItem> const&);

    MCNAPI void clearAllRecipes();

    MCNAPI void evacuateCraftingContainerToInventory(
        ::ContainerController*                container,
        ::std::vector<::AutoPlaceItem> const& autoPlace
    );

    MCNAPI int getBackgroundStyle(::std::string const& containerName, int collectionIndex) const;

    MCNAPI ::CraftableCountingData getCraftableCount(::ItemInstance const& item);

    MCNAPI ::std::string const& getExpandoItemGroupName(::std::string const& collectionName, int collectionIndex);

    MCNAPI int getIndexForCreativeItem(::std::string const& collectionName, ::ItemStackBase const& item) const;

    MCNAPI ::std::string const& getSearchString() const;

    MCNAPI void handleRecipeSelect(
        ::std::string const&                  collectionName,
        int                                   collectionIndex,
        bool                                  displayOnly,
        ::std::vector<::AutoPlaceItem> const& autoPlace
    );

    MCNAPI bool isCreativeContainer(::std::string const& containerName) const;

    MCNAPI bool isExpandableItemFiltered(::std::string const& collectionName, int collectionIndex) const;

    MCNAPI bool isTakeableContainer(::std::string const& containerName) const;

    MCNAPI bool setLastCraftedItem(::ItemInstance const& item);

    MCNAPI void setOnItemExpandedCallback(::std::function<void(::std::string const&, int, int)> callback);

    MCNAPI void switchExpandoItem(::std::string const& collectionName, int collectionIndex);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::weak_ptr<::CraftingContainerManagerModel> containerManagerModel);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
