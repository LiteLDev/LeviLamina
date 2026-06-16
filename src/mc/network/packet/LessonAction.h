#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LessonAction : schar {
    Start    = 0,
    Complete = 1,
    Restart  = 2,
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::LessonAction>();
// clang-format on
