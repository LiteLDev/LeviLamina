#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilderExecutionState {

enum class CodeStatus : uchar {
    None       = 0,
    NotStarted = 1,
    InProgress = 2,
    Paused     = 3,
    Error      = 4,
    Succeeded  = 5,
};

}

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::CodeBuilderExecutionState::CodeStatus>();
// clang-format on
