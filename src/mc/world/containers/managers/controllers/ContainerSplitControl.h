#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ContainerValidationSlotData;
struct SlotData;
// clang-format on

struct ContainerSplitControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::ContainerValidationSlotData> containerSlot;
    ::ll::TypedStorage<8, 40, ::SlotData>                    slot;
    ::ll::TypedStorage<4, 4, int>                            addedCount;
    // NOLINTEND
};
