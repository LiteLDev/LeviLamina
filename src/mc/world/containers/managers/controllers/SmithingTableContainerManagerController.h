#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#include "mc/world/containers/managers/controllers/ItemResultPreview.h"
#include "mc/world/inventory/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStackBase;
class SmithingTableContainerManagerModel;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct CreateContainerItemScope;
struct ItemStackRequestScope;
struct ItemTransferAmount;
struct RecipeNetIdTag;
// clang-format on

class SmithingTableContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::SmithingTableContainerManagerModel>>
                                                    mSmithingTableContainerManagerModel;
    ::ll::TypedStorage<8, 40, ::SlotData const>     mCreatedItemOutputSlot;
    ::ll::TypedStorage<8, 136, ::ItemResultPreview> mResultPreview;
    // NOLINTEND

public:
    // prevent constructor by default
    SmithingTableContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SmithingTableContainerManagerController() /*override*/ = default;

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

    virtual void _onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot) /*override*/;

    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit SmithingTableContainerManagerController(
        ::std::weak_ptr<::SmithingTableContainerManagerModel> containerManagerModel
    );

    MCNAPI_C void _consumeItems();

    MCNAPI_C void _createCraftItem(::ItemInstance& stack, ::ItemStackRequestScope const& requestScope);

    MCNAPI_C ::std::pair<::ItemInstance, ::RecipeNetId> _getResult();

    MCNAPI_C bool _handleTransferCraft(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI_C void _setupCallbacks();

    MCNAPI_C bool getHasInputItem() const;

    MCNAPI_C bool getHasMaterialItem() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::weak_ptr<::SmithingTableContainerManagerModel> containerManagerModel);
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

    MCNAPI void $_onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot);

    MCNAPI ::CreateContainerItemScope $_makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const&);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
