#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ContainerValidationOperationType : int {
    Invalid = 0,
    Remove = 1,
    MoveToDstSlot = 2,
    MoveToSrcSlot = 3,
    Craft = 4,
    Create = 5,
};
