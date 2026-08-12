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
class ContainerScreenValidation;
class ItemInstance;
struct AutoPlaceTarget;
struct ContainerScreenActionResult;
struct ContainerSimulationSplitStack;
struct ContainerValidationResult;
struct ContainerValidationSlotData;
struct FullContainerName;
struct ItemTransferAmount;
class IContainerTransfer;
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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ContainerScreenSimulation();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ContainerScreenSimulation() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ContainerScreenSimulation() /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::ContainerScreenActionResult
    tryPlaceOne(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);
#else // LL_PLAT_C
    virtual ::ContainerScreenActionResult
    tryPlaceOne(::ContainerValidationSlotData const& srcSlot, ::ContainerValidationSlotData const& dstSlot);
#endif

#ifdef LL_PLAT_S
    virtual ::ContainerScreenActionResult
    tryPlaceAmount(::ContainerValidationSlotData const&, int, ::ContainerValidationSlotData const&);
#else // LL_PLAT_C
    virtual ::ContainerScreenActionResult tryPlaceAmount(
        ::ContainerValidationSlotData const& srcSlot,
        int                                  amount,
        ::ContainerValidationSlotData const& dstSlot
    );
#endif

#ifdef LL_PLAT_S
    virtual ::ContainerScreenActionResult
    tryPlaceAll(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);
#else // LL_PLAT_C
    virtual ::ContainerScreenActionResult
    tryPlaceAll(::ContainerValidationSlotData const& srcSlot, ::ContainerValidationSlotData const& dstSlot);
#endif

#ifdef LL_PLAT_S
    virtual ::ContainerScreenActionResult
    tryTakeAmount(::ContainerValidationSlotData const&, int, ::ContainerValidationSlotData const&);
#else // LL_PLAT_C
    virtual ::ContainerScreenActionResult tryTakeAmount(
        ::ContainerValidationSlotData const& dstSlot,
        int                                  amount,
        ::ContainerValidationSlotData const& srcSlot
    );
#endif

#ifdef LL_PLAT_S
    virtual ::ContainerScreenActionResult
    tryTakeAll(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);
#else // LL_PLAT_C
    virtual ::ContainerScreenActionResult
    tryTakeAll(::ContainerValidationSlotData const& dstSlot, ::ContainerValidationSlotData const& srcSlot);
#endif

#ifdef LL_PLAT_S
    virtual ::ContainerScreenActionResult
    tryTakeHalf(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);
#else // LL_PLAT_C
    virtual ::ContainerScreenActionResult
    tryTakeHalf(::ContainerValidationSlotData const& dstSlot, ::ContainerValidationSlotData const& srcSlot);
#endif

#ifdef LL_PLAT_S
    virtual ::ContainerScreenActionResult
    trySwap(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);
#else // LL_PLAT_C
    virtual ::ContainerScreenActionResult
    trySwap(::ContainerValidationSlotData const& slotA, ::ContainerValidationSlotData const& slotB);
#endif

#ifdef LL_PLAT_S
    virtual ::ContainerScreenActionResult
    tryAddToStack(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&, ::ItemTakeType);
#else // LL_PLAT_C
    virtual ::ContainerScreenActionResult tryAddToStack(
        ::ContainerValidationSlotData const& dstSlot,
        ::ContainerValidationSlotData const& srcSlot,
        ::ItemTakeType                       type
    );
#endif

#ifdef LL_PLAT_S
    virtual ::ContainerScreenActionResult tryCoalesce(::ContainerValidationSlotData const&, ::ContainerEnumName);
#else // LL_PLAT_C
    virtual ::ContainerScreenActionResult
    tryCoalesce(::ContainerValidationSlotData const& dstSlot, ::ContainerEnumName coalesceContainerEnum);
#endif

#ifdef LL_PLAT_S
    virtual ::ContainerScreenActionResult
    tryAutoPlace(::ContainerValidationSlotData const&, ::ItemTransferAmount, ::ContainerScreenAutoplaceBehaviour);
#else // LL_PLAT_C
    virtual ::ContainerScreenActionResult tryAutoPlace(
        ::ContainerValidationSlotData const& srcSlot,
        ::ItemTransferAmount                 amount,
        ::ContainerScreenAutoplaceBehaviour  autoplaceBehaviour
    );
#endif

#ifdef LL_PLAT_S
    virtual ::ContainerScreenActionResult trySplitSingle(
        ::ContainerValidationSlotData const&,
        ::ContainerValidationSlotData const&,
        ::std::vector<::ContainerSimulationSplitStack>&
    );
#else // LL_PLAT_C
    virtual ::ContainerScreenActionResult trySplitSingle(
        ::ContainerValidationSlotData const&            srcSlot,
        ::ContainerValidationSlotData const&            dstSlot,
        ::std::vector<::ContainerSimulationSplitStack>& containerSplitItemStackItems
    );
#endif

#ifdef LL_PLAT_S
    virtual ::ContainerScreenActionResult trySplitMultiple(
        ::ContainerValidationSlotData const&,
        int,
        ::ItemInstance const&,
        ::ContainerValidationSlotData const&,
        ::std::vector<::ContainerSimulationSplitStack>&,
        int&
    );
#else // LL_PLAT_C
    virtual ::ContainerScreenActionResult trySplitMultiple(
        ::ContainerValidationSlotData const&            srcSlot,
        int                                             progressiveTake,
        ::ItemInstance const&                           itemTemplate,
        ::ContainerValidationSlotData const&            dstSlot,
        ::std::vector<::ContainerSimulationSplitStack>& containerSplitItemStackItems,
        int&                                            splitItemRemainder
    );
#endif

#ifdef LL_PLAT_S
    virtual ::ContainerScreenActionResult
    tryDrop(::ContainerValidationSlotData const&, ::ItemTransferAmount const, bool);
#else // LL_PLAT_C
    virtual ::ContainerScreenActionResult
    tryDrop(::ContainerValidationSlotData const& srcSlot, ::ItemTransferAmount const transferAmount, bool randomly);
#endif

#ifdef LL_PLAT_S
    virtual ::ContainerScreenActionResult tryDestroy(::ContainerValidationSlotData const&, ::ItemTransferAmount const);
#else // LL_PLAT_C
    virtual ::ContainerScreenActionResult
    tryDestroy(::ContainerValidationSlotData const& srcSlot, ::ItemTransferAmount const transferAmount);
#endif

#ifdef LL_PLAT_S
    virtual ::ContainerScreenActionResult tryConsume(::ContainerValidationSlotData const&, ::ItemTransferAmount const);
#else // LL_PLAT_C
    virtual ::ContainerScreenActionResult
    tryConsume(::ContainerValidationSlotData const& srcSlot, ::ItemTransferAmount const transferAmount);
#endif

#ifdef LL_PLAT_S
    virtual ::ContainerScreenActionResult tryConsumeExpected(::ContainerValidationSlotData const&);
#else // LL_PLAT_C
    virtual ::ContainerScreenActionResult tryConsumeExpected(::ContainerValidationSlotData const& srcSlot);
#endif

    virtual void _registerCoalesceOrder();

    virtual void _registerAutoPlaceOrder();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ContainerScreenSimulation(
        ::ContainerScreenContext const&                                           screenContext,
        ::ContainerValidationCaller                                               caller,
        ::std::unique_ptr<::IContainerTransfer>&&                                 containerTransferInterface,
        ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>> predictiveContainers
    );

    MCNAPI ::ContainerScreenActionResult _tryTransfer(
        ::ItemTransferType const             transferType,
        ::ContainerValidationSlotData const& srcSlot,
        ::ContainerValidationSlotData const& dstSlot,
        ::ItemTransferAmount const           transferAmount,
        ::ContainerScreenTransferBehaviour   transferBehaviour
    );

    MCNAPI ::ContainerScreenActionResult _tryTransferSpecial(
        ::ContainerValidationSlotData const& srcSlot,
        ::ItemTransferAmount const           transferAmount,
        ::ItemSpecialLocation                location
    );

    MCNAPI ::ContainerScreenActionResult _updateCurrentScope(::ContainerScreenActionResult result);

    MCNAPI ::ContainerScreenActionResult _updateCurrentScope(::ContainerValidationResult result);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::ContainerScreenContext const&                                           screenContext,
        ::ContainerValidationCaller                                               caller,
        ::std::unique_ptr<::IContainerTransfer>&&                                 containerTransferInterface,
        ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>> predictiveContainers
    );
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
#ifdef LL_PLAT_S
    MCNAPI ::ContainerScreenActionResult
    $tryPlaceOne(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);
#else // LL_PLAT_C
    MCNAPI ::ContainerScreenActionResult
    $tryPlaceOne(::ContainerValidationSlotData const& srcSlot, ::ContainerValidationSlotData const& dstSlot);
#endif

#ifdef LL_PLAT_S
    MCNAPI ::ContainerScreenActionResult
    $tryPlaceAmount(::ContainerValidationSlotData const&, int, ::ContainerValidationSlotData const&);
#else // LL_PLAT_C
    MCNAPI ::ContainerScreenActionResult $tryPlaceAmount(
        ::ContainerValidationSlotData const& srcSlot,
        int                                  amount,
        ::ContainerValidationSlotData const& dstSlot
    );
#endif

#ifdef LL_PLAT_S
    MCNAPI ::ContainerScreenActionResult
    $tryPlaceAll(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);
#else // LL_PLAT_C
    MCNAPI ::ContainerScreenActionResult
    $tryPlaceAll(::ContainerValidationSlotData const& srcSlot, ::ContainerValidationSlotData const& dstSlot);
#endif

#ifdef LL_PLAT_S
    MCNAPI ::ContainerScreenActionResult
    $tryTakeAmount(::ContainerValidationSlotData const&, int, ::ContainerValidationSlotData const&);
#else // LL_PLAT_C
    MCNAPI ::ContainerScreenActionResult $tryTakeAmount(
        ::ContainerValidationSlotData const& dstSlot,
        int                                  amount,
        ::ContainerValidationSlotData const& srcSlot
    );
#endif

#ifdef LL_PLAT_S
    MCNAPI ::ContainerScreenActionResult
    $tryTakeAll(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);
#else // LL_PLAT_C
    MCNAPI ::ContainerScreenActionResult
    $tryTakeAll(::ContainerValidationSlotData const& dstSlot, ::ContainerValidationSlotData const& srcSlot);
#endif

#ifdef LL_PLAT_S
    MCNAPI ::ContainerScreenActionResult
    $tryTakeHalf(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);
#else // LL_PLAT_C
    MCNAPI ::ContainerScreenActionResult
    $tryTakeHalf(::ContainerValidationSlotData const& dstSlot, ::ContainerValidationSlotData const& srcSlot);
#endif

#ifdef LL_PLAT_S
    MCNAPI ::ContainerScreenActionResult
    $trySwap(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);
#else // LL_PLAT_C
    MCNAPI ::ContainerScreenActionResult
    $trySwap(::ContainerValidationSlotData const& slotA, ::ContainerValidationSlotData const& slotB);
#endif

#ifdef LL_PLAT_S
    MCNAPI ::ContainerScreenActionResult
    $tryAddToStack(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&, ::ItemTakeType);
#else // LL_PLAT_C
    MCNAPI ::ContainerScreenActionResult $tryAddToStack(
        ::ContainerValidationSlotData const& dstSlot,
        ::ContainerValidationSlotData const& srcSlot,
        ::ItemTakeType                       type
    );
#endif

#ifdef LL_PLAT_S
    MCNAPI ::ContainerScreenActionResult $tryCoalesce(::ContainerValidationSlotData const&, ::ContainerEnumName);
#else // LL_PLAT_C
    MCNAPI ::ContainerScreenActionResult
    $tryCoalesce(::ContainerValidationSlotData const& dstSlot, ::ContainerEnumName coalesceContainerEnum);
#endif

#ifdef LL_PLAT_S
    MCNAPI ::ContainerScreenActionResult
    $tryAutoPlace(::ContainerValidationSlotData const&, ::ItemTransferAmount, ::ContainerScreenAutoplaceBehaviour);
#else // LL_PLAT_C
    MCNAPI ::ContainerScreenActionResult $tryAutoPlace(
        ::ContainerValidationSlotData const& srcSlot,
        ::ItemTransferAmount                 amount,
        ::ContainerScreenAutoplaceBehaviour  autoplaceBehaviour
    );
#endif

#ifdef LL_PLAT_S
    MCNAPI ::ContainerScreenActionResult $trySplitSingle(
        ::ContainerValidationSlotData const&,
        ::ContainerValidationSlotData const&,
        ::std::vector<::ContainerSimulationSplitStack>&
    );
#else // LL_PLAT_C
    MCNAPI ::ContainerScreenActionResult $trySplitSingle(
        ::ContainerValidationSlotData const&            srcSlot,
        ::ContainerValidationSlotData const&            dstSlot,
        ::std::vector<::ContainerSimulationSplitStack>& containerSplitItemStackItems
    );
#endif

#ifdef LL_PLAT_S
    MCNAPI ::ContainerScreenActionResult $trySplitMultiple(
        ::ContainerValidationSlotData const&,
        int,
        ::ItemInstance const&,
        ::ContainerValidationSlotData const&,
        ::std::vector<::ContainerSimulationSplitStack>&,
        int&
    );
#else // LL_PLAT_C
    MCNAPI ::ContainerScreenActionResult $trySplitMultiple(
        ::ContainerValidationSlotData const&            srcSlot,
        int                                             progressiveTake,
        ::ItemInstance const&                           itemTemplate,
        ::ContainerValidationSlotData const&            dstSlot,
        ::std::vector<::ContainerSimulationSplitStack>& containerSplitItemStackItems,
        int&                                            splitItemRemainder
    );
#endif

#ifdef LL_PLAT_S
    MCNAPI ::ContainerScreenActionResult
    $tryDrop(::ContainerValidationSlotData const&, ::ItemTransferAmount const, bool);
#else // LL_PLAT_C
    MCNAPI ::ContainerScreenActionResult
    $tryDrop(::ContainerValidationSlotData const& srcSlot, ::ItemTransferAmount const transferAmount, bool randomly);
#endif

#ifdef LL_PLAT_S
    MCNAPI ::ContainerScreenActionResult $tryDestroy(::ContainerValidationSlotData const&, ::ItemTransferAmount const);
#else // LL_PLAT_C
    MCNAPI ::ContainerScreenActionResult
    $tryDestroy(::ContainerValidationSlotData const& srcSlot, ::ItemTransferAmount const transferAmount);
#endif

#ifdef LL_PLAT_S
    MCNAPI ::ContainerScreenActionResult $tryConsume(::ContainerValidationSlotData const&, ::ItemTransferAmount const);
#else // LL_PLAT_C
    MCNAPI ::ContainerScreenActionResult
    $tryConsume(::ContainerValidationSlotData const& srcSlot, ::ItemTransferAmount const transferAmount);
#endif

#ifdef LL_PLAT_S
    MCNAPI ::ContainerScreenActionResult $tryConsumeExpected(::ContainerValidationSlotData const&);
#else // LL_PLAT_C
    MCNAPI ::ContainerScreenActionResult $tryConsumeExpected(::ContainerValidationSlotData const& srcSlot);
#endif

    MCNAPI void $_registerCoalesceOrder();

    MCNAPI void $_registerAutoPlaceOrder();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
