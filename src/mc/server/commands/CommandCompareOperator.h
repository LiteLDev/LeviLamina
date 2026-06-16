#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandCompareOperator : uchar {
    Invalid           = 0,
    Equals            = 1,
    LessThan          = 2,
    GreaterThan       = 3,
    LessThanEquals    = 4,
    GreaterThanEquals = 5,
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::CommandCompareOperator>();
// clang-format on
