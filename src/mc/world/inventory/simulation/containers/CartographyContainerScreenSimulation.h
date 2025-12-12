#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/safety/RedactableString.h"
#include "mc/world/containers/managers/controllers/MapOutputType.h"
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

class CartographyContainerScreenSimulation : public ::ContainerScreenSimulationCrafting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString> mItemName;
    ::ll::TypedStorage<4, 4, ::MapOutputType>                      mMapOutputType;
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

    virtual ~CartographyContainerScreenSimulation() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::RecipeNetId _getRecipeNetId(::ItemStack const& inputStack, ::ItemStack const& additionalStack);

    MCNAPI_C bool _isRenamingMap(::ItemStack const& inputStack, ::ItemStack const& additionalStack) const;

    MCNAPI_C ::ContainerScreenActionResult
    _tryTransferCraft(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const& dstSlot);
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
