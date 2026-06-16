#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RotationCommandUtils {

enum class FacingResult : int {
    HaveFacing = 0,
    NoFacing   = 1,
    Error      = 2,
};

}

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::RotationCommandUtils::FacingResult>();
// clang-format on
