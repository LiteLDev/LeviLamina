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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    MaterialReducerContainerManagerController();

#endif
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
#ifdef LL_PLAT_C
    MCNAPI explicit MaterialReducerContainerManagerController(
        ::std::weak_ptr<::MaterialReducerContainerManagerModel> containerManagerModel
    );

    MCNAPI void _consumeInputItem();

    MCNAPI void _destroySlot(::SlotData const& slot, ::ItemTransferAmount amount);

    MCNAPI void _fireReducerBlockEntered(::ItemStackBase const& input);

    MCNAPI bool _hasAnyInput();

    MCNAPI bool _hasAnyOutput();

    MCNAPI ::CreateContainerItemScope _makeCreateOutputItemScope(
        ::ItemStackRequestScope const& requestScope,
        ::SlotData const&              srcSlot,
        ::ItemInstance const&          instance
    );

    MCNAPI void _setupCallbacks();

    MCNAPI void _updateResult(::ItemStack const& input);

    MCNAPI bool isStillValid(float pickRange);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::weak_ptr<::MaterialReducerContainerManagerModel> containerManagerModel);
#endif
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
