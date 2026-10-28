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
class ItemRegistryRef;
class ItemStack;
class ItemStackBase;
class Recipe;
class Recipes;
struct ActorBlockSyncMessage;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct CraftableCountingData;
struct CreateContainerItemScope;
struct ItemStateData;
struct ItemTransferAmount;
struct RecipeSearchResult;
struct SelectedSlotInfo;
struct ShapedRecipeTriggeredEvent;
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
        ::ll::TypedStorage<8, 8, ::BlockSource*>           mUnsafeSourcePointer;
        ::ll::TypedStorage<8, 8, ::BlockPos const&>        mPos;
        ::ll::TypedStorage<8, 64, ::std::function<void()>> mCallback;
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
#ifdef LL_PLAT_C
        MCAPI void $onBlockChanged(
            ::BlockSource&                 source,
            ::BlockPos const&              pos,
            uint                           layer,
            ::Block const&                 block,
            ::Block const&                 oldBlock,
            int                            updateFlags,
            ::ActorBlockSyncMessage const* syncMsg,
            ::BlockChangedEventTarget      eventTarget,
            ::Actor*                       blockChangeSource
        );

        MCAPI void $onSourceDestroyed(::BlockSource& source);
#endif


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
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::CraftableCountingData>> mCraftableCountCache;
    ::ll::TypedStorage<1, 1, bool>                                                mCraftableCountCacheDirty;
    ::ll::TypedStorage<1, 1, bool>                                                mCloseCraftingContainer;
    ::ll::TypedStorage<1, 1, bool>                                                mIsCrafting;
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
        ::ItemTakeType                        type,
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
    MCAPI explicit CraftingContainerManagerController(
        ::std::weak_ptr<::CraftingContainerManagerModel> containerManagerModel
    );

    MCAPI void _filterRecipes();

    MCAPI ::std::vector<::RecipeSearchResult> _getRecipesForItem(
        ::ItemInstance const&               recipeItem,
        ::std::vector<::std::string> const& tags,
        ::ItemRegistryRef const             itemRegistry,
        bool
    );

    MCAPI void _handleItemCraftedEvents(
        ::ItemInstance const&               resultItem,
        ::std::vector<short> const&         ingredientIds,
        ::ShapedRecipeTriggeredEvent const& shapedRecipeTriggeredEvent
    );

    MCAPI bool _handleTransferCraft(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCAPI void _handleTransferCraftExtraResults(::std::vector<::ItemInstance>& allResults);

    MCAPI bool _inventoryContainsItemForRecipeInputSlot(::std::string const& containerName, int collectionIndex) const;

    MCAPI ::CreateContainerItemScope _makeCreateItemScopeCrafting(
        ::SlotData const&              srcSlot,
        ::ItemTransferAmount const&    takeAmount,
        ::std::vector<::ItemInstance>& allResults
    );

    MCAPI ::CreateContainerItemScope
    _makeCreateItemScopeCreative(::SlotData const& srcSlot, ::ItemTransferAmount const& takeAmount);

    MCAPI void _updateCraftingResultItem();

    MCAPI bool
    autoCraftItem(::SlotData const& recipeSlot, ::ItemCraftType craftAmount, ::std::vector<::AutoPlaceItem> const&);

    MCAPI void clearAllRecipes();

    MCAPI void evacuateCraftingContainerToInventory(
        ::ContainerController*                container,
        ::std::vector<::AutoPlaceItem> const& autoPlace
    );

    MCAPI int getBackgroundStyle(::std::string const& containerName, int collectionIndex) const;

    MCAPI ::CraftableCountingData getCraftableCount(::ItemInstance const& item);

    MCFOLD ::std::string const& getExpandoItemGroupName(::std::string const& collectionName, int collectionIndex);

    MCAPI ::ItemInstance const& getGhostItem(::std::string const& collectionName, int collectionIndex) const;

    MCAPI int getIndexForCreativeItem(::std::string const& collectionName, ::ItemStackBase const& item) const;

    MCAPI ::ItemInstance const& getRecipeItem(::std::string const& collectionName, int collectionIndex) const;

    MCAPI ::std::string const& getSearchString() const;

    MCAPI void handleRecipeSelect(
        ::std::string const&                  collectionName,
        int                                   collectionIndex,
        bool                                  displayOnly,
        ::std::vector<::AutoPlaceItem> const& autoPlace
    );

    MCAPI bool isCreativeContainer(::std::string const& containerName) const;

    MCFOLD bool isExpandableItemFiltered(::std::string const& collectionName, int collectionIndex) const;

    MCAPI bool isTakeableContainer(::std::string const& containerName) const;

    MCAPI bool setLastCraftedItem(::ItemInstance const& item);

    MCAPI void setOnItemExpandedCallback(::std::function<void(::std::string const&, int, int)> callback);

    MCAPI void switchExpandoItem(::std::string const& collectionName, int collectionIndex);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::weak_ptr<::CraftingContainerManagerModel> containerManagerModel);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI bool $isOutputSlot(::std::string const& collectionName) const;

    MCAPI bool $handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot);

    MCAPI bool $handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCAPI bool $handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot);

    MCAPI bool $handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCAPI bool $handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCAPI int $handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCAPI int $handleAutoPlaceStack(
        ::SlotData const&                     srcSlot,
        ::ItemTakeType                        type,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCAPI void $handleSplitSingle(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCAPI void $handleSplitMultiple(
        ::SelectedSlotInfo const& selected,
        ::ItemInstance const&     itemTemplate,
        ::SlotData const&         dstSlot
    );

    MCAPI bool $handleAddToStack(::SlotData const& dstSlot, ::SlotData const& srcSlot, ::ItemTakeType type);

    MCAPI bool $handleDrop(::SlotData const& srcSlot, ::ItemTransferAmount const transferAmount);

    MCAPI void $closeContainers();

    MCAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const& slot) const;
#endif


    // NOLINTEND
};
