#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class GrindstoneContainerManagerModel;
class ItemStack;
class ItemStackBase;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct CreateContainerItemScope;
struct ItemStackRequestScope;
struct ItemTransferAmount;
// clang-format on

class GrindstoneContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::GrindstoneContainerManagerModel>> mGrindstoneContainerManagerModel;
    ::ll::TypedStorage<8, 40, ::SlotData const>                                   mCreatedItemOutputSlot;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                                    mResultItemPreview;
    ::ll::TypedStorage<4, 24, ::ItemStackNetIdVariant>                            mSrcItemNetId;
    // NOLINTEND

public:
    // prevent constructor by default
    GrindstoneContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GrindstoneContainerManagerController() /*override*/ = default;

    virtual bool isOutputSlot(::std::string const& collectionName) const /*override*/;

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

    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit GrindstoneContainerManagerController(
        ::std::weak_ptr<::GrindstoneContainerManagerModel> containerManagerModel
    );

    MCNAPI_C bool _createCraftItem(::ItemInstance& instance, ::ItemStackRequestScope const& requestScope);

    MCNAPI_C void _grantExperience(::ItemStack const& input, ::ItemStack const& additional) const;

    MCNAPI_C bool _handleTransferCraft(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI_C void _setupCallbacks();

    MCNAPI_C void _updateResult(::ItemInstance const& oldItem);

    MCNAPI_C void _updateResultPreview();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::weak_ptr<::GrindstoneContainerManagerModel> containerManagerModel);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $isOutputSlot(::std::string const& collectionName) const;

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

    MCNAPI ::CreateContainerItemScope $_makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const&);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
