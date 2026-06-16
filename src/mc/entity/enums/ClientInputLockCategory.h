#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ClientInputLockCategory : uchar {
    Undefined       = 0,
    Camera          = 1,
    Movement        = 2,
    Emoting         = 3,
    LateralMovement = 4,
    Sneak           = 5,
    Jump            = 6,
    Mount           = 7,
    Dismount        = 8,
    MoveForward     = 9,
    MoveBackward    = 10,
    MoveLeft        = 11,
    MoveRight       = 12,
    Count           = 13,
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::ClientInputLockCategory>();
// clang-format on
