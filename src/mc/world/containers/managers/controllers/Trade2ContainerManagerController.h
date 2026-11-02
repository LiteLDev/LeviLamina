#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/controllers/ItemTakeType.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ContainerController;
class ItemStackBase;
class MerchantRecipe;
class Player;
class Trade2ContainerManagerModel;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct CreateContainerItemScope;
struct ItemTransferAmount;
struct SelectedSlotInfo;
// clang-format on

class Trade2ContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Trade2ContainerManagerModel>> mTradeContainerManagerModel;
    ::ll::TypedStorage<1, 1, bool>                                            mSelectBestTradeOnItemPlace;
    ::ll::TypedStorage<8, 40, ::SlotData const>                               mCreatedItemOutputSlot;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                                mResultPreviewItem;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    Trade2ContainerManagerController();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Trade2ContainerManagerController() /*override*/ = default;

    virtual bool isOutputSlot(::std::string const& collectionName) const /*override*/;

    virtual int handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    ) /*override*/;

    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const& slot) const /*override*/;

    virtual bool handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;

    virtual bool handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot) /*override*/;

    virtual bool handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot) /*override*/;

    virtual bool handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot) /*override*/;

    virtual bool
    handleAddToStack(::SlotData const& dstSlot, ::SlotData const& srcSlot, ::ItemTakeType type) /*override*/;

    virtual void _onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot) /*override*/;

#ifdef LL_PLAT_S
    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&) /*override*/;
#else // LL_PLAT_C
    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const& takeAmount) /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit Trade2ContainerManagerController(::std::weak_ptr<::Trade2ContainerManagerModel> pModel);

    MCNAPI void _consumeIngredients(uchar const numCrafts);

    MCNAPI void _consumeMaterials(int amount, ::ContainerEnumName const ingredientContainerEnumName);

    MCNAPI void _createResult(bool shouldPlayAudio);

    MCNAPI bool _handleTransferTrade(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI void _pullInIngredientItemsFromInventory(
        ::ItemInstance const&  recipeItemA,
        ::ItemInstance const&  recipeItemB,
        ::ContainerController* slot1,
        ::ContainerController* slot2,
        bool                   ignoreCustomNamedItems
    );

    MCNAPI void _selectBestTradeForIngredients();

    MCNAPI void _setupCallbacks();

    MCNAPI int getCurrentTradeExp() const;

    MCNAPI int getEntityMaxTradeTier() const;

    MCNAPI ::MerchantRecipe* getSelectedTrade() const;

    MCNAPI ::MerchantRecipe* getTrade(int tier, int index) const;

    MCNAPI void handleAutoTrade(int tier, int index, ::std::vector<::AutoPlaceResult>&);

    MCNAPI bool isItemValidForSelectedTrade(::ItemStackBase const& item, bool withCount, bool buyA) const;

    MCNAPI bool isSelectedTrade(int tier, int index) const;

    MCNAPI bool isSelectedTradeValid() const;

    MCNAPI void moveIngredientsBackToInventory();

    MCNAPI bool playerHasItemsForTrade(::MerchantRecipe const* recipe) const;

    MCNAPI ::std::pair<bool, bool> playerHasItemsForTradeInInventory(::MerchantRecipe const* recipe) const;

    MCNAPI void pullInIngredientsForSelectedTrade();

    MCNAPI bool selectOfferedTrade();

    MCNAPI void setSelectedTrade(int tier, int index);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static void
    _handleBuyItemUse(::ItemInstance const& buyItem, int& emeraldCount, ::Actor& trader, ::Player& player);

    MCNAPI static bool
    _ingredientsMatchRecipe(::MerchantRecipe const* recipe, ::ItemStackBase const& itemA, ::ItemStackBase const& itemB);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::weak_ptr<::Trade2ContainerManagerModel> pModel);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $isOutputSlot(::std::string const& collectionName) const;

    MCNAPI int $handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCNAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const& slot) const;

    MCNAPI bool $handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI bool $handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot);

    MCNAPI bool $handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot);

    MCNAPI bool $handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI bool $handleAddToStack(::SlotData const& dstSlot, ::SlotData const& srcSlot, ::ItemTakeType type);

    MCNAPI void $_onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot);

    MCNAPI ::CreateContainerItemScope
    $_makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const& takeAmount);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
