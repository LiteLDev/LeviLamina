#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class AnimationMode : uchar {
    None   = 0,
    Layers = 1,
    Blocks = 2,
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::AnimationMode>();
// clang-format on
