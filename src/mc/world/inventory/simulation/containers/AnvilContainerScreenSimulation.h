#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/safety/RedactableString.h"
#include "mc/world/inventory/simulation/ContainerScreenAutoplaceBehaviour.h"
#include "mc/world/inventory/simulation/ContainerScreenSimulationCrafting.h"

// auto generated forward declare list
// clang-format off
struct ContainerScreenActionResult;
struct ContainerValidationCraftResult;
struct ContainerValidationSlotData;
struct ItemTransferAmount;
// clang-format on

class AnvilContainerScreenSimulation : public ::ContainerScreenSimulationCrafting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString> mItemName;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString> mItemPreview;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ::ContainerScreenActionResult
    tryTakeAmount(::ContainerValidationSlotData const&, int, ::ContainerValidationSlotData const&) /*override*/;
#else // LL_PLAT_C
    virtual ::ContainerScreenActionResult tryTakeAmount(
        ::ContainerValidationSlotData const& dstSlot,
        int                                  amount,
        ::ContainerValidationSlotData const& srcSlot
    ) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::ContainerScreenActionResult
    tryTakeAll(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&) /*override*/;
#else // LL_PLAT_C
    virtual ::ContainerScreenActionResult
    tryTakeAll(::ContainerValidationSlotData const& dstSlot, ::ContainerValidationSlotData const& srcSlot) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::ContainerScreenActionResult
    tryTakeHalf(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&) /*override*/;
#else // LL_PLAT_C
    virtual ::ContainerScreenActionResult tryTakeHalf(
        ::ContainerValidationSlotData const& dstSlot,
        ::ContainerValidationSlotData const& srcSlot
    ) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::ContainerScreenActionResult tryAutoPlace(
        ::ContainerValidationSlotData const&,
        ::ItemTransferAmount,
        ::ContainerScreenAutoplaceBehaviour
    ) /*override*/;
#else // LL_PLAT_C
    virtual ::ContainerScreenActionResult tryAutoPlace(
        ::ContainerValidationSlotData const& srcSlot,
        ::ItemTransferAmount                 amount,
        ::ContainerScreenAutoplaceBehaviour  autoplaceBehaviour
    ) /*override*/;
#endif

    virtual ::ContainerValidationCraftResult getCraftPreview() /*override*/;

    virtual void _registerCoalesceOrder() /*override*/;

    virtual void _registerAutoPlaceOrder() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::ContainerScreenActionResult $tryTakeAmount(
        ::ContainerValidationSlotData const& dstSlot,
        int                                  amount,
        ::ContainerValidationSlotData const& srcSlot
    );

    MCNAPI ::ContainerScreenActionResult
    $tryTakeAll(::ContainerValidationSlotData const& dstSlot, ::ContainerValidationSlotData const& srcSlot);

    MCNAPI ::ContainerScreenActionResult
    $tryTakeHalf(::ContainerValidationSlotData const& dstSlot, ::ContainerValidationSlotData const& srcSlot);

    MCNAPI ::ContainerScreenActionResult $tryAutoPlace(
        ::ContainerValidationSlotData const& srcSlot,
        ::ItemTransferAmount                 amount,
        ::ContainerScreenAutoplaceBehaviour  autoplaceBehaviour
    );

    MCNAPI ::ContainerValidationCraftResult $getCraftPreview();

    MCNAPI void $_registerCoalesceOrder();

    MCNAPI void $_registerAutoPlaceOrder();
#endif


    // NOLINTEND
};
