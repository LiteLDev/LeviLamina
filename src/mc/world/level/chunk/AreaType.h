#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class AreaType : uchar {
    Bounds      = 0,
    Circle      = 1,
    TickingArea = 2,
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::AreaType>();
// clang-format on
