#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BlockSlot : int {
    None      = -1,
    Container = 0,
    Count     = 1,
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::BlockSlot>();
// clang-format on
