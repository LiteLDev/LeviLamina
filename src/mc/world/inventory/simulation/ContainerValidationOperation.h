#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerValidationOperationType.h"
#include "mc/world/inventory/simulation/ContainerValidationSlotData.h"
#include "mc/world/item/ItemStack.h"

struct ContainerValidationOperation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ContainerValidationOperationType> mType;
    ::ll::TypedStorage<4, 16, ::ContainerValidationSlotData>     mSlotData;
    ::ll::TypedStorage<4, 4, int>                                mAmount;
    ::ll::TypedStorage<8, 152, ::ItemStack>                      mStack;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ContainerValidationOperation();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI ContainerValidationOperation(
        ::ContainerValidationOperationType   type,
        ::ContainerValidationSlotData const& slotData,
        int                                  amount,
        ::ItemStack const&                   stack
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(
        ::ContainerValidationOperationType   type,
        ::ContainerValidationSlotData const& slotData,
        int                                  amount,
        ::ItemStack const&                   stack
    );
#endif
    // NOLINTEND
};
