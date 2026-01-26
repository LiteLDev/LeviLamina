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
struct ItemStackRequestScope;
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

    virtual void handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;

    virtual void handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot) /*override*/;

    virtual void handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot) /*override*/;

    virtual void handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot) /*override*/;

    virtual void
    handleAddToStack(::SlotData const& dstSlot, ::SlotData const& srcSlot, ::ItemTakeType type) /*override*/;

    virtual void _onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot) /*override*/;

    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const& takeAmount) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void _consumeIngredients(uchar numCrafts);

    MCNAPI_C void _consumeMaterials(int amount, ::ContainerEnumName ingredientContainerEnumName);

    MCNAPI_C void _createResult(bool shouldPlayAudio);

    MCNAPI_C void
    _createTradeItem(::ItemInstance& itemInstance, ::ItemStackRequestScope const& requestScope, uchar numCrafts);

    MCNAPI_C void
    _handleBuyItemUse(::ItemInstance const& buyItem, int& emeraldCount, ::Actor& trader, ::Player& player);

    MCNAPI_C bool _handleTransferTrade(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI_C bool _ingredientsMatchRecipe(
        ::MerchantRecipe const* recipe,
        ::ItemStackBase const&  itemA,
        ::ItemStackBase const&  itemB
    ) const;

    MCNAPI_C void _pullInIngredientItemsFromInventory(
        ::ItemInstance const&  recipeItemA,
        ::ItemInstance const&  recipeItemB,
        ::ContainerController* slot1,
        ::ContainerController* slot2,
        bool                   ignoreCustomNamedItems
    );

    MCNAPI_C void _selectBestTradeForIngredients();

    MCNAPI_C void _setupCallbacks();

    MCNAPI_C int getCurrentTradeExp() const;

    MCNAPI_C ::std::string getDisplayName();

    MCNAPI_C ::std::string getDisplayNameTag() const;

    MCNAPI_C int getEntityMaxTradeTier() const;

    MCNAPI_C int getEntityTradeTier() const;

    MCNAPI_C ::MerchantRecipe* getSelectedTrade() const;

    MCNAPI_C ::MerchantRecipe* getTrade(int tier, int index) const;

    MCNAPI_C void handleAutoTrade(int tier, int index, ::std::vector<::AutoPlaceResult>&);

    MCNAPI_C bool hasAvailableTradeWithSecondItem() const;

    MCNAPI_C bool isItemValidForSelectedTrade(::ItemStackBase const& item, bool withCount, bool buyA) const;

    MCNAPI_C bool isSelectedTrade(int tier, int index) const;

    MCNAPI_C bool isSelectedTradeValid() const;

    MCNAPI_C void moveIngredientsBackToInventory();

    MCNAPI_C bool playerHasItemsForTrade(::MerchantRecipe const* recipe) const;

    MCNAPI_C ::std::pair<bool, bool> playerHasItemsForTradeInInventory(::MerchantRecipe const* recipe) const;

    MCNAPI_C void pullInIngredientsForSelectedTrade();

    MCNAPI_C bool selectOfferedTrade();

    MCNAPI_C void setSelectedTrade(int tier, int index);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static bool itemMatchesRecipe(::ItemStackBase const& item, ::ItemStackBase const& recipe);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::weak_ptr<::Trade2ContainerManagerModel> pModel);
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

    MCNAPI void $handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI void $handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot);

    MCNAPI void $handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot);

    MCNAPI void $handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI void $handleAddToStack(::SlotData const& dstSlot, ::SlotData const& srcSlot, ::ItemTakeType type);

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
