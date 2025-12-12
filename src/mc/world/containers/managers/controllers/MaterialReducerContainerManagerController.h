#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"

// auto generated forward declare list
// clang-format off
class BlockReducer;
class CraftableCompounds;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class MaterialReducerContainerManagerModel;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct CreateContainerItemScope;
struct ItemStackRequestScope;
struct ItemTransferAmount;
// clang-format on

class MaterialReducerContainerManagerController : public ::ContainerManagerController {
public:
    // MaterialReducerContainerManagerController inner types define
    using ActionScope = ::gsl::final_action<::std::function<void()>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::MaterialReducerContainerManagerModel>> mModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CraftableCompounds>>                  mCraftableCompounds;
    ::ll::TypedStorage<8, 8, ::BlockReducer*>                                          mBlockReducer;
    ::ll::TypedStorage<1, 1, bool>                                                     mObservingContainers;
    ::ll::TypedStorage<8, 40, ::SlotData const>                                        mCreatedItemOutputSlot;
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialReducerContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MaterialReducerContainerManagerController() /*override*/ = default;

    virtual bool isOutputSlot(::std::string const& collectionName) const /*override*/;

    virtual void closeContainers() /*override*/;

    virtual void handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot) /*override*/;

    virtual int handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    ) /*override*/;

    virtual bool handleSwap(::SlotData const& slotA, ::SlotData const& slotB) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit MaterialReducerContainerManagerController(
        ::std::weak_ptr<::MaterialReducerContainerManagerModel> containerManagerModel
    );

    MCNAPI_C void _consumeInputItem();

    MCNAPI_C void _destroySlot(::SlotData const& slot, ::ItemTransferAmount amount);

    MCNAPI_C void _fireReducerBlockEntered(::ItemStackBase const& input);

    MCNAPI_C bool _hasAnyInput();

    MCNAPI_C bool _hasAnyOutput();

    MCNAPI_C ::CreateContainerItemScope _makeCreateOutputItemScope(
        ::ItemStackRequestScope const& requestScope,
        ::SlotData const&              srcSlot,
        ::ItemInstance const&          instance
    );

    MCNAPI_C void _setupCallbacks();

    MCNAPI_C void _updateResult(::ItemStack const& input);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::weak_ptr<::MaterialReducerContainerManagerModel> containerManagerModel);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $isOutputSlot(::std::string const& collectionName) const;

    MCNAPI void $closeContainers();

    MCNAPI void $handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI int $handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCNAPI bool $handleSwap(::SlotData const& slotA, ::SlotData const& slotB);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
