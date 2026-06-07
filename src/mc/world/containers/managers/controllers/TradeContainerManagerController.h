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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    TradeContainerManagerController();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~TradeContainerManagerController() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~TradeContainerManagerController() /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual bool isOutputSlot(::std::string const&) const /*override*/;
#else // LL_PLAT_C
    virtual bool isOutputSlot(::std::string const& collectionName) const /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const&) const /*override*/;
#else // LL_PLAT_C
    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const& slot) const /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void handleTakeAll(::SlotData const&, ::SlotData const&) /*override*/;
#else // LL_PLAT_C
    virtual void handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void handleTakeAmount(::SlotData const&, int, ::SlotData const&) /*override*/;
#else // LL_PLAT_C
    virtual void handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void handleTakeHalf(::SlotData const&, ::SlotData const&) /*override*/;
#else // LL_PLAT_C
    virtual void handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual int handleAutoPlace(
        ::SlotData const&,
        int,
        ::std::vector<::AutoPlaceItem> const&,
        ::std::vector<::AutoPlaceResult>&
    ) /*override*/;
#else // LL_PLAT_C
    virtual int handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    ) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&) /*override*/;
#else // LL_PLAT_C
    virtual void handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void handlePlaceOne(::SlotData const&, ::SlotData const&) /*override*/;
#else // LL_PLAT_C
    virtual void handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void handleAddToStack(::SlotData const&, ::SlotData const&, ::ItemTakeType) /*override*/;
#else // LL_PLAT_C
    virtual void
    handleAddToStack(::SlotData const& dstSlot, ::SlotData const& srcSlot, ::ItemTakeType type) /*override*/;
#endif

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
    MCNAPI explicit TradeContainerManagerController(::std::weak_ptr<::TradeContainerManagerModel> pModel);

    MCNAPI void _consumeIngredients(uchar numCrafts);

    MCNAPI void
    _consumeMaterials(::ItemStack const& containerItem, int amount, ::ContainerEnumName inputContainerEnumName);

    MCNAPI void _createResult(bool shouldPlayAudio);

    MCNAPI void
    _createTradeItem(::ItemInstance& itemInstance, ::ItemStackRequestScope const& requestScope, uchar numCrafts);

    MCNAPI ::MerchantRecipe* _getActiveRecipe();

    MCNAPI bool _handleTransferTrade(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI void _moveItemsBackToInventory();

    MCNAPI void _setupCallbacks();

    MCNAPI int getAvailableRecipeListSize();

    MCNAPI ::std::string getDisplayName();

    MCNAPI ::MerchantRecipe* getRecipe(int CurrentIndex);

    MCNAPI void recipeChanged();

    MCNAPI void setRecipeIndex(int index);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::weak_ptr<::TradeContainerManagerModel> pModel);
#endif
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
