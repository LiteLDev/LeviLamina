#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerValidationSlotData.h"
#include "mc/world/item/ItemStack.h"

struct CursorDragDeferredSlot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::ContainerValidationSlotData> mSlotData;
    ::ll::TypedStorage<8, 152, ::ItemStack>                  mItem;
    // NOLINTEND
};
