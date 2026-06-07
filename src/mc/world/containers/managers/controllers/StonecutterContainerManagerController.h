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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    StonecutterContainerManagerController();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~StonecutterContainerManagerController() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~StonecutterContainerManagerController() /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void postInit(::std::weak_ptr<::ContainerManagerController>) /*override*/;
#else // LL_PLAT_C
    virtual void postInit(::std::weak_ptr<::ContainerManagerController> self) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual bool isOutputSlot(::std::string const&) const /*override*/;
#else // LL_PLAT_C
    virtual bool isOutputSlot(::std::string const& collectionName) const /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void handleTakeAmount(::SlotData const&, int, ::SlotData const&) /*override*/;
#else // LL_PLAT_C
    virtual void handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void handleTakeAll(::SlotData const&, ::SlotData const&) /*override*/;
#else // LL_PLAT_C
    virtual void handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&) /*override*/;
#else // LL_PLAT_C
    virtual void handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void handleTakeHalf(::SlotData const&, ::SlotData const&) /*override*/;
#else // LL_PLAT_C
    virtual void handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void handlePlaceOne(::SlotData const&, ::SlotData const&) /*override*/;
#else // LL_PLAT_C
    virtual void handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot) /*override*/;
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
    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const&) const /*override*/;
#else // LL_PLAT_C
    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const& slot) const /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void _onContainerScreenAction(::ContainerScreenActionResult const&) /*override*/;
#else // LL_PLAT_C
    virtual void _onContainerScreenAction(::ContainerScreenActionResult const& result) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&) /*override*/;
#else // LL_PLAT_C
    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const& takeAmount) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&) /*override*/;
#else // LL_PLAT_C
    virtual void _onItemAcquired(::ItemInstance const& instance, ::SlotData const& srcSlot) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void _updateItemStackRequest(
        ::ContainerScreenRequestActionType,
        ::ContainerScreenActionResult const&,
        ::ItemStackRequestScope&
    ) /*override*/;
#else // LL_PLAT_C
    virtual void _updateItemStackRequest(
        ::ContainerScreenRequestActionType   result,
        ::ContainerScreenActionResult const& requestScope,
        ::ItemStackRequestScope&
    ) /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit StonecutterContainerManagerController(
        ::std::weak_ptr<::StonecutterContainerManagerModel> containerManagerModel
    );

    MCNAPI ::std::pair<::ItemInstance, ::RecipeNetId> _buildResultItem();

    MCNAPI bool
    _createCraftItem(::ItemInstance& instance, ::ItemStackRequestScope const& requestScope, uchar craftCount);

    MCNAPI bool _handleTransferCraft(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI void _setupCallbacks();

    MCNAPI void _updateResultItem();

    MCNAPI int getItemIdAuxForStonePattern(int collectionIndex) const;

    MCNAPI ::ItemInstance getItemInstanceForStonePattern(int collectionIndex) const;

    MCNAPI int getNumberOfStonePatterns() const;

    MCNAPI int getStackCountForStonePattern(int collectionIndex) const;

    MCNAPI bool hasInputItem() const;

    MCNAPI bool isSelectedStonePattern(int collectionIndex) const;

    MCNAPI void setSelectedStone(int collectionIndex);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::weak_ptr<::StonecutterContainerManagerModel> containerManagerModel);
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
        ::ContainerScreenRequestActionType   result,
        ::ContainerScreenActionResult const& requestScope,
        ::ItemStackRequestScope&
    );
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
