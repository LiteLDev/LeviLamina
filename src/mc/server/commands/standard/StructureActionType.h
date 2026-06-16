#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StructureActionType : int {
    Save   = 0,
    Load   = 1,
    Delete = 2,
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::StructureActionType>();
// clang-format on
