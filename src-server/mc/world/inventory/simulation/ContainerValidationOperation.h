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
    ::ll::TypedStorage<4, 16, ::ContainerValidationSlotData> mSlotData;
    ::ll::TypedStorage<4, 4, int> mAmount;
    ::ll::TypedStorage<8, 152, ::ItemStack> mStack;
    // NOLINTEND

};
