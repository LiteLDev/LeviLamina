#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/controllers/ItemTakeType.h"
#include "mc/world/inventory/simulation/ContainerScreenAutoplaceBehaviour.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
struct ContainerScreenActionResult;
struct ContainerSimulationSplitStack;
struct ContainerValidationSlotData;
struct ItemTransferAmount;
// clang-format on

class ContainerScreenSimulation : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk17f23a;
    ::ll::UntypedStorage<8, 40> mUnk453c22;
    ::ll::UntypedStorage<8, 8>  mUnka52675;
    ::ll::UntypedStorage<8, 8>  mUnk41ec16;
    ::ll::UntypedStorage<8, 64> mUnk69f53c;
    ::ll::UntypedStorage<8, 64> mUnk2f254c;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerScreenSimulation& operator=(ContainerScreenSimulation const&);
    ContainerScreenSimulation(ContainerScreenSimulation const&);
    ContainerScreenSimulation();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContainerScreenSimulation() /*override*/;

    // vIndex: 1
    virtual ::ContainerScreenActionResult
    tryPlaceOne(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    // vIndex: 2
    virtual ::ContainerScreenActionResult
    tryPlaceAmount(::ContainerValidationSlotData const&, int, ::ContainerValidationSlotData const&);

    // vIndex: 3
    virtual ::ContainerScreenActionResult
    tryPlaceAll(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    // vIndex: 4
    virtual ::ContainerScreenActionResult
    tryTakeAmount(::ContainerValidationSlotData const&, int, ::ContainerValidationSlotData const&);

    // vIndex: 5
    virtual ::ContainerScreenActionResult
    tryTakeAll(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    // vIndex: 6
    virtual ::ContainerScreenActionResult
    tryTakeHalf(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    // vIndex: 7
    virtual ::ContainerScreenActionResult
    trySwap(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    // vIndex: 8
    virtual ::ContainerScreenActionResult
    tryAddToStack(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&, ::ItemTakeType);

    // vIndex: 9
    virtual ::ContainerScreenActionResult tryCoalesce(::ContainerValidationSlotData const&, ::ContainerEnumName);

    // vIndex: 10
    virtual ::ContainerScreenActionResult
    tryAutoPlace(::ContainerValidationSlotData const&, ::ItemTransferAmount, ::ContainerScreenAutoplaceBehaviour);

    // vIndex: 11
    virtual ::ContainerScreenActionResult
    trySplitSingle(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&, ::std::vector<::ContainerSimulationSplitStack>&);

    // vIndex: 12
    virtual ::ContainerScreenActionResult
    trySplitMultiple(::ContainerValidationSlotData const&, int, ::ItemInstance const&, ::ContainerValidationSlotData const&, ::std::vector<::ContainerSimulationSplitStack>&, int&);

    // vIndex: 13
    virtual ::ContainerScreenActionResult
    tryDrop(::ContainerValidationSlotData const&, ::ItemTransferAmount const, bool);

    // vIndex: 14
    virtual ::ContainerScreenActionResult tryDestroy(::ContainerValidationSlotData const&, ::ItemTransferAmount const);

    // vIndex: 15
    virtual ::ContainerScreenActionResult tryConsume(::ContainerValidationSlotData const&, ::ItemTransferAmount const);

    // vIndex: 16
    virtual ::ContainerScreenActionResult tryConsumeExpected(::ContainerValidationSlotData const&);

    // vIndex: 17
    virtual void _registerCoalesceOrder();

    // vIndex: 18
    virtual void _registerAutoPlaceOrder();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ContainerScreenActionResult
    $tryPlaceOne(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    MCAPI ::ContainerScreenActionResult
    $tryPlaceAmount(::ContainerValidationSlotData const&, int, ::ContainerValidationSlotData const&);

    MCAPI ::ContainerScreenActionResult
    $tryPlaceAll(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    MCAPI ::ContainerScreenActionResult
    $tryTakeAmount(::ContainerValidationSlotData const&, int, ::ContainerValidationSlotData const&);

    MCAPI ::ContainerScreenActionResult
    $tryTakeAll(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    MCAPI ::ContainerScreenActionResult
    $tryTakeHalf(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    MCAPI ::ContainerScreenActionResult
    $trySwap(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    MCAPI ::ContainerScreenActionResult
    $tryAddToStack(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&, ::ItemTakeType);

    MCAPI ::ContainerScreenActionResult $tryCoalesce(::ContainerValidationSlotData const&, ::ContainerEnumName);

    MCAPI ::ContainerScreenActionResult
    $tryAutoPlace(::ContainerValidationSlotData const&, ::ItemTransferAmount, ::ContainerScreenAutoplaceBehaviour);

    MCAPI ::ContainerScreenActionResult
    $trySplitSingle(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&, ::std::vector<::ContainerSimulationSplitStack>&);

    MCAPI ::ContainerScreenActionResult
    $trySplitMultiple(::ContainerValidationSlotData const&, int, ::ItemInstance const&, ::ContainerValidationSlotData const&, ::std::vector<::ContainerSimulationSplitStack>&, int&);

    MCAPI ::ContainerScreenActionResult
    $tryDrop(::ContainerValidationSlotData const&, ::ItemTransferAmount const, bool);

    MCAPI ::ContainerScreenActionResult $tryDestroy(::ContainerValidationSlotData const&, ::ItemTransferAmount const);

    MCAPI ::ContainerScreenActionResult $tryConsume(::ContainerValidationSlotData const&, ::ItemTransferAmount const);

    MCAPI ::ContainerScreenActionResult $tryConsumeExpected(::ContainerValidationSlotData const&);

    MCAPI void $_registerCoalesceOrder();

    MCAPI void $_registerAutoPlaceOrder();
    // NOLINTEND
};
