#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CameraShakeAction : uchar {
    Add  = 0,
    Stop = 1,
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::CameraShakeAction>();
// clang-format on
