#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/controllers/ItemTakeType.h"
#include "mc/world/inventory/network/ContainerScreenContext.h"
#include "mc/world/inventory/simulation/ContainerScreenAutoplaceBehaviour.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenActionScope;
class ContainerScreenValidation;
class IContainerTransfer;
class ItemInstance;
struct AutoPlaceTarget;
struct ContainerScreenActionResult;
struct ContainerSimulationSplitStack;
struct ContainerValidationSlotData;
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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContainerScreenSimulation() /*override*/ = default;

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
    virtual ::ContainerScreenActionResult trySplitSingle(
        ::ContainerValidationSlotData const&,
        ::ContainerValidationSlotData const&,
        ::std::vector<::ContainerSimulationSplitStack>&
    );

    // vIndex: 12
    virtual ::ContainerScreenActionResult trySplitMultiple(
        ::ContainerValidationSlotData const&,
        int,
        ::ItemInstance const&,
        ::ContainerValidationSlotData const&,
        ::std::vector<::ContainerSimulationSplitStack>&,
        int&
    );

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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
