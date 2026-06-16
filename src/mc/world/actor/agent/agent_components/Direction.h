#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

enum class Direction : uchar {
    Up        = 0,
    Down      = 1,
    Forward   = 2,
    Back      = 3,
    Left      = 4,
    Right     = 5,
    Undefined = 6,
};

}

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::AgentComponents::Direction>();
// clang-format on
