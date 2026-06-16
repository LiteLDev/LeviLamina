#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class Mirror : uchar {
    None = 0,
    X    = 1,
    Z    = 2,
    Xz   = 3,
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::Mirror>();
// clang-format on
