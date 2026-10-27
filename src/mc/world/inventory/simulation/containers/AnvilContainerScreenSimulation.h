#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/safety/RedactableString.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/simulation/ContainerScreenAutoplaceBehaviour.h"
#include "mc/world/inventory/simulation/ContainerScreenSimulationCrafting.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
struct ContainerScreenActionResult;
struct ContainerValidationCraftResult;
struct ContainerValidationSlotData;
struct ItemTransferAmount;
struct RecipeNetIdTag;
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
    virtual ::ContainerScreenActionResult tryTakeAmount(
        ::ContainerValidationSlotData const& dstSlot,
        int                                  amount,
        ::ContainerValidationSlotData const& srcSlot
    ) /*override*/;

    virtual ::ContainerScreenActionResult
    tryTakeAll(::ContainerValidationSlotData const& dstSlot, ::ContainerValidationSlotData const& srcSlot) /*override*/;

    virtual ::ContainerScreenActionResult tryTakeHalf(
        ::ContainerValidationSlotData const& dstSlot,
        ::ContainerValidationSlotData const& srcSlot
    ) /*override*/;

    virtual ::ContainerScreenActionResult tryAutoPlace(
        ::ContainerValidationSlotData const& srcSlot,
        ::ItemTransferAmount                 amount,
        ::ContainerScreenAutoplaceBehaviour  autoplaceBehaviour
    ) /*override*/;

    virtual ::ContainerValidationCraftResult getCraftPreview() /*override*/;

    virtual void _registerCoalesceOrder() /*override*/;

    virtual void _registerAutoPlaceOrder() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::RecipeNetId const
    _getRecipeNetIdForMapItems(::ItemStack const& inputStack, ::ItemStack const& materialStack) const;

    MCAPI ::ContainerScreenActionResult
    _tryTransferCraft(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const& dstSlot);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::ContainerScreenActionResult $tryTakeAmount(
        ::ContainerValidationSlotData const& dstSlot,
        int                                  amount,
        ::ContainerValidationSlotData const& srcSlot
    );

    MCAPI ::ContainerScreenActionResult
    $tryTakeAll(::ContainerValidationSlotData const& dstSlot, ::ContainerValidationSlotData const& srcSlot);

    MCAPI ::ContainerScreenActionResult
    $tryTakeHalf(::ContainerValidationSlotData const& dstSlot, ::ContainerValidationSlotData const& srcSlot);

    MCAPI ::ContainerScreenActionResult $tryAutoPlace(
        ::ContainerValidationSlotData const& srcSlot,
        ::ItemTransferAmount                 amount,
        ::ContainerScreenAutoplaceBehaviour  autoplaceBehaviour
    );

    MCAPI ::ContainerValidationCraftResult $getCraftPreview();

    MCAPI void $_registerCoalesceOrder();

    MCAPI void $_registerAutoPlaceOrder();
#endif


    // NOLINTEND
};
