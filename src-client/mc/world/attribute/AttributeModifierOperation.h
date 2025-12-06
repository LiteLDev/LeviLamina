#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class AttributeModifierOperation : int {
    OperationAddition      = 0,
    OperationMultiplyBase  = 1,
    OperationMultiplyTotal = 2,
    OperationCap           = 3,
    TotalOperations        = 4,
    OperationInvalid       = 4,
};
