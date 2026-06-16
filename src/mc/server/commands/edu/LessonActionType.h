#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LessonActionType : uchar {
    Lesson   = 0,
    Activity = 1,
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::LessonActionType>();
// clang-format on
