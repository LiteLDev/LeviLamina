#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#include "mc/world/containers/managers/controllers/ItemResultPreview.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/simulation/ContainerScreenRequestActionType.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStackBase;
class StonecutterContainerManagerModel;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct ContainerScreenActionResult;
struct CreateContainerItemScope;
struct ItemStackRequestScope;
struct ItemTransferAmount;
struct RecipeNetIdTag;
struct SelectedSlotInfo;
// clang-format on

class StonecutterContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                  mSelectedStoneIndex;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::StonecutterContainerManagerModel>> mStonecutterContainerManagerModel;
    ::ll::TypedStorage<8, 40, ::SlotData const>                                    mCreatedItemOutputSlot;
    ::ll::TypedStorage<8, 136, ::ItemResultPreview>                                mResultPreview;
    // NOLINTEND

public:
    // prevent constructor by default
    StonecutterContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StonecutterContainerManagerController() /*override*/ = default;

    virtual void postInit(::std::weak_ptr<::ContainerManagerController> self) /*override*/;

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

    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const& slot) const /*override*/;

    virtual void _onContainerScreenAction(::ContainerScreenActionResult const& result) /*override*/;

    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const& takeAmount) /*override*/;

    virtual void _onItemAcquired(::ItemInstance const& instance, ::SlotData const& srcSlot) /*override*/;

    virtual void _updateItemStackRequest(
        ::ContainerScreenRequestActionType,
        ::ContainerScreenActionResult const& result,
        ::ItemStackRequestScope&             requestScope
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit StonecutterContainerManagerController(
        ::std::weak_ptr<::StonecutterContainerManagerModel> containerManagerModel
    );

    MCNAPI_C ::std::pair<::ItemInstance, ::RecipeNetId> _buildResultItem();

    MCNAPI_C bool
    _createCraftItem(::ItemInstance& instance, ::ItemStackRequestScope const& requestScope, uchar craftCount);

    MCNAPI_C bool _handleTransferCraft(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI_C void _setupCallbacks();

    MCNAPI_C void _updateResultItem();

    MCNAPI_C int getItemIdAuxForStonePattern(int collectionIndex) const;

    MCNAPI_C ::ItemInstance getItemInstanceForStonePattern(int collectionIndex) const;

    MCNAPI_C int getNumberOfStonePatterns() const;

    MCNAPI_C int getStackCountForStonePattern(int collectionIndex) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::weak_ptr<::StonecutterContainerManagerModel> containerManagerModel);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $postInit(::std::weak_ptr<::ContainerManagerController> self);

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

    MCNAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const& slot) const;

    MCNAPI void $_onContainerScreenAction(::ContainerScreenActionResult const& result);

    MCNAPI ::CreateContainerItemScope
    $_makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const& takeAmount);

    MCNAPI void $_onItemAcquired(::ItemInstance const& instance, ::SlotData const& srcSlot);

    MCNAPI void $_updateItemStackRequest(
        ::ContainerScreenRequestActionType,
        ::ContainerScreenActionResult const& result,
        ::ItemStackRequestScope&             requestScope
    );
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
