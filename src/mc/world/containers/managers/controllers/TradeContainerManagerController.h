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
class ItemStack;
class ItemStackBase;
class MerchantRecipe;
class TradeContainerManagerModel;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct CreateContainerItemScope;
struct ItemStackRequestScope;
struct ItemTransferAmount;
struct SelectedSlotInfo;
// clang-format on

class TradeContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::TradeContainerManagerModel>> mTradeContainerMangerModel;
    ::ll::TypedStorage<4, 4, int>                                            mCurrentRecipeIndex;
    ::ll::TypedStorage<8, 40, ::SlotData const>                              mCreatedItemOutputSlot;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                               mResultPreviewItem;
    ::ll::TypedStorage<8, 8, ::MerchantRecipe*>                              mResultPreviewRecipe;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TradeContainerManagerController() /*override*/ = default;

    virtual bool isOutputSlot(::std::string const& collectionName) const /*override*/;

    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const& slot) const /*override*/;

    virtual void handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;

    virtual void handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot) /*override*/;

    virtual void handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;

    virtual int handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    ) /*override*/;

    virtual void handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot) /*override*/;

    virtual void handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot) /*override*/;

    virtual void
    handleAddToStack(::SlotData const& dstSlot, ::SlotData const& srcSlot, ::ItemTakeType type) /*override*/;

    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const& takeAmount) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void _consumeIngredients(uchar numCrafts);

    MCNAPI_C void
    _consumeMaterials(::ItemStack const& containerItem, int amount, ::ContainerEnumName inputContainerEnumName);

    MCNAPI_C void _createResult(bool shouldPlayAudio);

    MCNAPI_C void
    _createTradeItem(::ItemInstance& itemInstance, ::ItemStackRequestScope const& requestScope, uchar numCrafts);

    MCNAPI_C ::MerchantRecipe* _getActiveRecipe();

    MCNAPI_C bool _handleTransferTrade(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI_C void _moveItemsBackToInventory();

    MCNAPI_C void _setupCallbacks();

    MCNAPI_C int getAvailableRecipeListSize();

    MCNAPI_C ::std::string getDisplayName();

    MCNAPI_C ::MerchantRecipe* getRecipe(int CurrentIndex);

    MCNAPI_C void setRecipeIndex(int index);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::weak_ptr<::TradeContainerManagerModel> pModel);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $isOutputSlot(::std::string const& collectionName) const;

    MCNAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const& slot) const;

    MCNAPI void $handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI void $handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot);

    MCNAPI void $handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI int $handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCNAPI void $handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot);

    MCNAPI void $handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI void $handleAddToStack(::SlotData const& dstSlot, ::SlotData const& srcSlot, ::ItemTakeType type);

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
