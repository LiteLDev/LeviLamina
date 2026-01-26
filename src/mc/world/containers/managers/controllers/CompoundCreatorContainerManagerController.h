#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/controllers/ItemTakeType.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class CompoundCreatorContainerManagerModel;
class CraftableCompounds;
class ItemStackBase;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct CreateContainerItemScope;
struct ItemTransferAmount;
// clang-format on

class CompoundCreatorContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::CompoundCreatorContainerManagerModel>> mModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CraftableCompounds>>                  mCraftableCompounds;
    ::ll::TypedStorage<8, 40, ::SlotData const>                                        mCreatedItemOutputSlot;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                                         mResultItemPreview;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CompoundCreatorContainerManagerController() /*override*/ = default;

    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const& slot) const /*override*/;

    virtual void handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot) /*override*/;

    virtual void handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;

    virtual void handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;

    virtual int handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    ) /*override*/;

    virtual void
    handleAddToStack(::SlotData const& dstSlot, ::SlotData const& srcSlot, ::ItemTakeType type) /*override*/;

    virtual bool isOutputSlot(::std::string const& collectionName) const /*override*/;

    virtual void _onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot) /*override*/;

    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const& amount) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C bool
    _handleTransferCraft(::SlotData const& srcSlot, ::SlotData const& dstSlot, ::ItemTransferAmount amount);

    MCNAPI_C void _setupCallbacks();

    MCNAPI_C void _updateResultPreview();

    MCNAPI_C ::std::string getOutputFormula();

    MCNAPI_C bool isStillValid(float pickRange);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::weak_ptr<::CompoundCreatorContainerManagerModel> containerManagerModel);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const& slot) const;

    MCNAPI void $handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot);

    MCNAPI void $handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI void $handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI int $handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCNAPI void $handleAddToStack(::SlotData const& dstSlot, ::SlotData const& srcSlot, ::ItemTakeType type);

    MCNAPI bool $isOutputSlot(::std::string const& collectionName) const;

    MCNAPI void $_onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot);

    MCNAPI ::CreateContainerItemScope
    $_makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const& amount);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
