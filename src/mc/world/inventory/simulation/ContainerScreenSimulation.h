#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/controllers/ItemTakeType.h"
#include "mc/world/containers/managers/controllers/ItemSpecialLocation.h"
#include "mc/world/containers/managers/controllers/ItemTransferType.h"
#include "mc/world/inventory/network/ContainerScreenContext.h"
#include "mc/world/inventory/simulation/ContainerScreenAutoplaceBehaviour.h"
#include "mc/world/inventory/simulation/ContainerScreenTransferBehaviour.h"
#include "mc/world/inventory/simulation/ContainerValidationCaller.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenActionScope;
class ContainerScreenTemporaryActionScope;
class ContainerScreenValidation;
class IContainerTransfer;
class ItemInstance;
struct AutoPlaceTarget;
struct ContainerScreenActionResult;
struct ContainerSimulationSplitStack;
struct ContainerValidationResult;
struct ContainerValidationSlotData;
struct FullContainerName;
struct ItemTransferAmount;
// clang-format on

class ContainerScreenSimulation : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ContainerScreenActionScope*>                  mCurrentScope;
    ::ll::TypedStorage<8, 40, ::ContainerScreenContext>                      mScreenContext;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ContainerScreenValidation>> mScreenValidation;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IContainerTransfer>>        mContainerTransferInterface;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ContainerEnumName, ::std::vector<::ContainerEnumName>>>
        mCoalesceOrderMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ContainerEnumName, ::std::vector<::AutoPlaceTarget>>>
        mAutoPlaceOrderMap;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerScreenSimulation();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ContainerScreenSimulation() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ContainerScreenSimulation() /*override*/;
#endif

    virtual ::ContainerScreenActionResult
    tryPlaceOne(::ContainerValidationSlotData const& srcSlot, ::ContainerValidationSlotData const& dstSlot);

    virtual ::ContainerScreenActionResult tryPlaceAmount(
        ::ContainerValidationSlotData const& srcSlot,
        int                                  amount,
        ::ContainerValidationSlotData const& dstSlot
    );

    virtual ::ContainerScreenActionResult
    tryPlaceAll(::ContainerValidationSlotData const& srcSlot, ::ContainerValidationSlotData const& dstSlot);

    virtual ::ContainerScreenActionResult tryTakeAmount(
        ::ContainerValidationSlotData const& dstSlot,
        int                                  amount,
        ::ContainerValidationSlotData const& srcSlot
    );

    virtual ::ContainerScreenActionResult
    tryTakeAll(::ContainerValidationSlotData const& dstSlot, ::ContainerValidationSlotData const& srcSlot);

    virtual ::ContainerScreenActionResult
    tryTakeHalf(::ContainerValidationSlotData const& dstSlot, ::ContainerValidationSlotData const& srcSlot);

    virtual ::ContainerScreenActionResult
    trySwap(::ContainerValidationSlotData const& slotA, ::ContainerValidationSlotData const& slotB);

    virtual ::ContainerScreenActionResult tryAddToStack(
        ::ContainerValidationSlotData const& dstSlot,
        ::ContainerValidationSlotData const& srcSlot,
        ::ItemTakeType                       type
    );

    virtual ::ContainerScreenActionResult
    tryCoalesce(::ContainerValidationSlotData const& dstSlot, ::ContainerEnumName coalesceContainerEnum);

    virtual ::ContainerScreenActionResult tryAutoPlace(
        ::ContainerValidationSlotData const& srcSlot,
        ::ItemTransferAmount                 amount,
        ::ContainerScreenAutoplaceBehaviour  autoplaceBehaviour
    );

    virtual ::ContainerScreenActionResult trySplitSingle(
        ::ContainerValidationSlotData const&            srcSlot,
        ::ContainerValidationSlotData const&            dstSlot,
        ::std::vector<::ContainerSimulationSplitStack>& containerSplitItemStackItems
    );

    virtual ::ContainerScreenActionResult trySplitMultiple(
        ::ContainerValidationSlotData const&            srcSlot,
        int                                             progressiveTake,
        ::ItemInstance const&                           itemTemplate,
        ::ContainerValidationSlotData const&            dstSlot,
        ::std::vector<::ContainerSimulationSplitStack>& containerSplitItemStackItems,
        int&                                            splitItemRemainder
    );

    virtual ::ContainerScreenActionResult
    tryDrop(::ContainerValidationSlotData const& srcSlot, ::ItemTransferAmount const transferAmount, bool randomly);

    virtual ::ContainerScreenActionResult
    tryDestroy(::ContainerValidationSlotData const& srcSlot, ::ItemTransferAmount const transferAmount);

    virtual ::ContainerScreenActionResult
    tryConsume(::ContainerValidationSlotData const& srcSlot, ::ItemTransferAmount const transferAmount);

    virtual ::ContainerScreenActionResult tryConsumeExpected(::ContainerValidationSlotData const& srcSlot);

    virtual void _registerCoalesceOrder();

    virtual void _registerAutoPlaceOrder();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ContainerScreenSimulation(
        ::ContainerScreenContext const&                                           screenContext,
        ::ContainerValidationCaller                                               caller,
        ::std::unique_ptr<::IContainerTransfer>&&                                 containerTransferInterface,
        ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>> predictiveContainers
    );

    MCNAPI_C ::ContainerScreenTemporaryActionScope _createTemporaryScope();

    MCNAPI_C void _leaveActionScope(::ContainerScreenActionResult& result);

    MCNAPI_C ::ContainerScreenActionResult _tryTransfer(
        ::ItemTransferType                   transferType,
        ::ContainerValidationSlotData const& srcSlot,
        ::ContainerValidationSlotData const& dstSlot,
        ::ItemTransferAmount                 transferAmount,
        ::ContainerScreenTransferBehaviour   transferBehaviour
    );

    MCNAPI_C ::ContainerScreenActionResult _tryTransferSpecial(
        ::ContainerValidationSlotData const& srcSlot,
        ::ItemTransferAmount                 transferAmount,
        ::ItemSpecialLocation                location
    );

    MCNAPI_C ::ContainerScreenActionResult _updateCurrentScope(::ContainerScreenActionResult result);

    MCNAPI_C ::ContainerScreenActionResult _updateCurrentScope(::ContainerValidationResult result);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::ContainerScreenContext const&                                           screenContext,
        ::ContainerValidationCaller                                               caller,
        ::std::unique_ptr<::IContainerTransfer>&&                                 containerTransferInterface,
        ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>> predictiveContainers
    );
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
    MCNAPI ::ContainerScreenActionResult
    $tryPlaceOne(::ContainerValidationSlotData const& srcSlot, ::ContainerValidationSlotData const& dstSlot);

    MCNAPI ::ContainerScreenActionResult $tryPlaceAmount(
        ::ContainerValidationSlotData const& srcSlot,
        int                                  amount,
        ::ContainerValidationSlotData const& dstSlot
    );

    MCNAPI ::ContainerScreenActionResult
    $tryPlaceAll(::ContainerValidationSlotData const& srcSlot, ::ContainerValidationSlotData const& dstSlot);

    MCNAPI ::ContainerScreenActionResult $tryTakeAmount(
        ::ContainerValidationSlotData const& dstSlot,
        int                                  amount,
        ::ContainerValidationSlotData const& srcSlot
    );

    MCNAPI ::ContainerScreenActionResult
    $tryTakeAll(::ContainerValidationSlotData const& dstSlot, ::ContainerValidationSlotData const& srcSlot);

    MCNAPI ::ContainerScreenActionResult
    $tryTakeHalf(::ContainerValidationSlotData const& dstSlot, ::ContainerValidationSlotData const& srcSlot);

    MCNAPI ::ContainerScreenActionResult
    $trySwap(::ContainerValidationSlotData const& slotA, ::ContainerValidationSlotData const& slotB);

    MCNAPI ::ContainerScreenActionResult $tryAddToStack(
        ::ContainerValidationSlotData const& dstSlot,
        ::ContainerValidationSlotData const& srcSlot,
        ::ItemTakeType                       type
    );

    MCNAPI ::ContainerScreenActionResult
    $tryCoalesce(::ContainerValidationSlotData const& dstSlot, ::ContainerEnumName coalesceContainerEnum);

    MCNAPI ::ContainerScreenActionResult $tryAutoPlace(
        ::ContainerValidationSlotData const& srcSlot,
        ::ItemTransferAmount                 amount,
        ::ContainerScreenAutoplaceBehaviour  autoplaceBehaviour
    );

    MCNAPI ::ContainerScreenActionResult $trySplitSingle(
        ::ContainerValidationSlotData const&            srcSlot,
        ::ContainerValidationSlotData const&            dstSlot,
        ::std::vector<::ContainerSimulationSplitStack>& containerSplitItemStackItems
    );

    MCNAPI ::ContainerScreenActionResult $trySplitMultiple(
        ::ContainerValidationSlotData const&            srcSlot,
        int                                             progressiveTake,
        ::ItemInstance const&                           itemTemplate,
        ::ContainerValidationSlotData const&            dstSlot,
        ::std::vector<::ContainerSimulationSplitStack>& containerSplitItemStackItems,
        int&                                            splitItemRemainder
    );

    MCNAPI ::ContainerScreenActionResult
    $tryDrop(::ContainerValidationSlotData const& srcSlot, ::ItemTransferAmount const transferAmount, bool randomly);

    MCNAPI ::ContainerScreenActionResult
    $tryDestroy(::ContainerValidationSlotData const& srcSlot, ::ItemTransferAmount const transferAmount);

    MCNAPI ::ContainerScreenActionResult
    $tryConsume(::ContainerValidationSlotData const& srcSlot, ::ItemTransferAmount const transferAmount);

    MCNAPI ::ContainerScreenActionResult $tryConsumeExpected(::ContainerValidationSlotData const& srcSlot);

    MCNAPI void $_registerCoalesceOrder();

    MCNAPI void $_registerAutoPlaceOrder();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
