#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MusicRepeatMode : uchar {
    PlayOnce = 0,
    Loop     = 1,
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::MusicRepeatMode>();
// clang-format on
