#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class HudVisibility : int {
    Hide  = 0,
    Reset = 1,
    Count = 2,
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::HudVisibility>();
// clang-format on
