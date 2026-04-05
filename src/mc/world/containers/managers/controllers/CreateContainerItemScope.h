#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackRequestScope.h"
#include "mc/world/inventory/network/TypedClientNetId.h"

// auto generated forward declare list
// clang-format off
class ContainerController;
class ItemInstance;
struct ItemStackRequestIdTag;
struct ItemTransferAmount;
struct SlotData;
// clang-format on

struct CreateContainerItemScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SlotData const* const>                   mSrcSlot;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContainerController>> mCreatedItemContainerController;
    ::ll::TypedStorage<8, 16, ::ItemStackRequestScope>                  mItemStackRequestScope;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    CreateContainerItemScope();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI CreateContainerItemScope(
        ::ItemStackRequestScope&&                requestScope,
        ::SlotData const&                        createdItemOutputSlot,
        ::ItemInstance const&                    item,
        ::ItemTransferAmount                     takeAmount,
        ::std::shared_ptr<::ContainerController> createdItemOutputContainerController
    );

    MCNAPI void _createItemStack(
        ::ItemStackRequestId const& currentRequestId,
        ::SlotData const&           createdItemOutputSlot,
        ::ItemInstance const&       item,
        ::ItemTransferAmount        takeAmount
    );

    MCNAPI ~CreateContainerItemScope();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::CreateContainerItemScope _createInnerScope(
        ::ItemStackRequestScope const&           requestScope,
        ::SlotData const&                        createdItemOutputSlot,
        ::ItemInstance const&                    item,
        ::ItemTransferAmount                     takeAmount,
        ::std::shared_ptr<::ContainerController> createdItemOutputContainerController
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::ItemStackRequestScope&&                requestScope,
        ::SlotData const&                        createdItemOutputSlot,
        ::ItemInstance const&                    item,
        ::ItemTransferAmount                     takeAmount,
        ::std::shared_ptr<::ContainerController> createdItemOutputContainerController
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
