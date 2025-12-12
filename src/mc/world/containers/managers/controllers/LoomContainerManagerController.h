#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
class LoomContainerManagerModel;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct CreateContainerItemScope;
struct ItemStackRequestScope;
struct ItemTransferAmount;
struct SelectedSlotInfo;
// clang-format on

class LoomContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::LoomContainerManagerModel>> mLoomContainerManagerModel;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                           mFilteredPatterns;
    ::ll::TypedStorage<4, 4, int>                                           mSelectedPatternIndex;
    ::ll::TypedStorage<1, 1, bool>                                          mCurrentlyCrafting;
    ::ll::TypedStorage<8, 40, ::SlotData const>                             mCreatedItemOutputSlot;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                              mResultItemPreview;
    ::ll::TypedStorage<8, 32, ::std::string>                                mResultPatternNameId;
    // NOLINTEND

public:
    // prevent constructor by default
    LoomContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~LoomContainerManagerController() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~LoomContainerManagerController() /*override*/;
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

    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const& slot) const /*override*/;

    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const& takeAmount) /*override*/;

    virtual void _onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit LoomContainerManagerController(
        ::std::weak_ptr<::LoomContainerManagerModel> containerManagerModel
    );

    MCNAPI_C ::ItemInstance _buildResultItem();

    MCNAPI_C void
    _createCraftItem(::ItemInstance& instance, ::ItemStackRequestScope const& requestScope, uchar numCrafts);

    MCNAPI_C void _filterPatterns();

    MCNAPI_C bool _handleTransferCraft(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI_C void _networkUpdateResultItem();

    MCNAPI_C void _setupCallbacks();

    MCNAPI_C void pullInPatternItemForPattern();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::weak_ptr<::LoomContainerManagerModel> containerManagerModel);
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

    MCNAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const& slot) const;

    MCNAPI ::CreateContainerItemScope
    $_makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const& takeAmount);

    MCNAPI void $_onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
