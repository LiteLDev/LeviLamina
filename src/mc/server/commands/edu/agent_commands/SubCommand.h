#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentCommands {

enum class SubCommand : int {
    None     = 0,
    Destroy  = 1,
    Inspect  = 2,
    Interact = 3,
};

}

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::AgentCommands::SubCommand>();
// clang-format on
