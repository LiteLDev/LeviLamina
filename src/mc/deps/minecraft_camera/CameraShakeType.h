#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CameraShakeType : uchar {
    Positional = 0,
    Rotational = 1,
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::CameraShakeType>();
// clang-format on
