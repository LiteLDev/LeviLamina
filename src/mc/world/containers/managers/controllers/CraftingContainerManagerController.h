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
struct CreateContainerItemScope;
struct ItemStackRequestScope;
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
#ifdef LL_PLAT_C
        MCNAPI void $onBlockChanged(
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

        MCNAPI void $onSourceDestroyed(::BlockSource& source);
#endif


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
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

public:
    // prevent constructor by default
    CraftingContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~CraftingContainerManagerController() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~CraftingContainerManagerController() /*override*/;
#endif

    virtual bool isOutputSlot(::std::string const& collectionName) const /*override*/;

    virtual void handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot) /*override*/;

    virtual void handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;

    virtual void handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot) /*override*/;

    virtual void handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;

    virtual void handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot) /*override*/;

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

    virtual void
    handleAddToStack(::SlotData const& dstSlot, ::SlotData const& srcSlot, ::ItemTakeType type) /*override*/;

    virtual bool handleDrop(::SlotData const& srcSlot, ::ItemTransferAmount const transferAmount) /*override*/;

    virtual void closeContainers() /*override*/;

    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const& slot) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit CraftingContainerManagerController(
        ::std::weak_ptr<::CraftingContainerManagerModel> containerManagerModel
    );

    MCNAPI_C ::std::vector<::ItemInstance> _craftItem(::ItemStackRequestScope const& requestScope, uchar craftCount);

    MCNAPI_C void _filterRecipes();

    MCNAPI_C ::std::vector<::RecipeSearchResult>
    _getRecipesForItem(::ItemInstance const& recipeItem, ::std::vector<::std::string> const& tags, bool);

    MCNAPI_C void _handleItemCraftedEvents(
        ::ItemInstance const&               resultItem,
        ::std::vector<short> const&         ingredientIds,
        ::ShapedRecipeTriggeredEvent const& shapedRecipeTriggeredEvent
    );

    MCNAPI_C bool _handleTransferCraft(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI_C void _handleTransferCraftExtraResults(::std::vector<::ItemInstance>& allResults);

    MCNAPI_C bool
    _inventoryContainsItemForRecipeInputSlot(::std::string const& containerName, int collectionIndex) const;

    MCNAPI_C ::CreateContainerItemScope _makeCreateItemScopeCrafting(
        ::SlotData const&              srcSlot,
        ::ItemTransferAmount const&    takeAmount,
        ::std::vector<::ItemInstance>& allResults
    );

    MCNAPI_C ::CreateContainerItemScope
    _makeCreateItemScopeCreative(::SlotData const& srcSlot, ::ItemTransferAmount const& takeAmount);

    MCNAPI_C void _setupCallbacks();

    MCNAPI_C void _updateCraftingResultItem();

    MCNAPI_C bool
    autoCraftItem(::SlotData const& recipeSlot, ::ItemCraftType craftAmount, ::std::vector<::AutoPlaceItem> const&);

    MCNAPI_C void clearAllRecipes();

    MCNAPI_C void evacuateCraftingContainerToInventory(
        ::ContainerController*                container,
        ::std::vector<::AutoPlaceItem> const& autoPlace
    );

    MCNAPI_C int getBackgroundStyle(::std::string const& containerName, int collectionIndex) const;

    MCNAPI_C ::CraftableCountingData getCraftableCount(::ItemInstance const& item);

    MCNAPI_C ::std::string const& getExpandoItemGroupName(::std::string const& collectionName, int collectionIndex);

    MCNAPI_C ::ItemInstance const& getGhostItem(::std::string const& collectionName, int collectionIndex);

    MCNAPI_C int getIndexForCreativeItem(::std::string const& collectionName, ::ItemStackBase const& item) const;

    MCNAPI_C ::ItemInstance const& getRecipeItem(::std::string const& collectionName, int collectionIndex) const;

    MCNAPI_C ::std::string const& getSearchString() const;

    MCNAPI_C void handleRecipeSelect(
        ::std::string const&                  collectionName,
        int                                   collectionIndex,
        bool                                  displayOnly,
        ::std::vector<::AutoPlaceItem> const& autoPlace
    );

    MCNAPI_C bool isCreativeContainer(::std::string const& containerName) const;

    MCNAPI_C bool isExpandableItemFiltered(::std::string const& collectionName, int collectionIndex) const;

    MCNAPI_C bool isTakeableContainer(::std::string const& containerName) const;

    MCNAPI_C bool setLastCraftedItem(::ItemInstance const& item);

    MCNAPI_C void setOnItemExpandedCallback(::std::function<void(::std::string const&, int, int)> callback);

    MCNAPI_C void setSearchString(::std::string const& searchString);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::weak_ptr<::CraftingContainerManagerModel> containerManagerModel);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $isOutputSlot(::std::string const& collectionName) const;

    MCNAPI void $handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot);

    MCNAPI void $handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI void $handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot);

    MCNAPI void $handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI void $handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI int $handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCNAPI int $handleAutoPlaceStack(
        ::SlotData const&                     srcSlot,
        ::ItemTakeType                        type,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCNAPI void $handleSplitSingle(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI void $handleSplitMultiple(
        ::SelectedSlotInfo const& selected,
        ::ItemInstance const&     itemTemplate,
        ::SlotData const&         dstSlot
    );

    MCNAPI void $handleAddToStack(::SlotData const& dstSlot, ::SlotData const& srcSlot, ::ItemTakeType type);

    MCNAPI bool $handleDrop(::SlotData const& srcSlot, ::ItemTransferAmount const transferAmount);

    MCNAPI void $closeContainers();

    MCNAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const& slot) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
