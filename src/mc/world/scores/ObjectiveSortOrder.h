#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ObjectiveSortOrder : uchar {
    Ascending  = 0,
    Descending = 1,
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::ObjectiveSortOrder>();
// clang-format on
