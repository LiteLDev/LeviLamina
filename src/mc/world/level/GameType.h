#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class GameType : int {
    Undefined    = -1,
    Survival     = 0,
    Creative     = 1,
    Adventure    = 2,
    Default      = 5,
    Spectator    = 6,
    WorldDefault = 0,
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::GameType>();
// clang-format on
