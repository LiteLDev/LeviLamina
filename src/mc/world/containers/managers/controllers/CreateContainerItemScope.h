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

public:
    // prevent constructor by default
    CreateContainerItemScope();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C CreateContainerItemScope(
        ::ItemStackRequestScope&&                requestScope,
        ::SlotData const&                        createdItemOutputSlot,
        ::ItemInstance const&                    item,
        ::ItemTransferAmount                     takeAmount,
        ::std::shared_ptr<::ContainerController> createdItemOutputContainerController
    );

    MCNAPI_C void _createItemStack(
        ::ItemStackRequestId const& currentRequestId,
        ::SlotData const&           createdItemOutputSlot,
        ::ItemInstance const&       item,
        ::ItemTransferAmount        takeAmount
    );

    MCNAPI_C ~CreateContainerItemScope();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::CreateContainerItemScope _createInnerScope(
        ::ItemStackRequestScope const&           requestScope,
        ::SlotData const&                        createdItemOutputSlot,
        ::ItemInstance const&                    item,
        ::ItemTransferAmount                     takeAmount,
        ::std::shared_ptr<::ContainerController> createdItemOutputContainerController
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::ItemStackRequestScope&&                requestScope,
        ::SlotData const&                        createdItemOutputSlot,
        ::ItemInstance const&                    item,
        ::ItemTransferAmount                     takeAmount,
        ::std::shared_ptr<::ContainerController> createdItemOutputContainerController
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
