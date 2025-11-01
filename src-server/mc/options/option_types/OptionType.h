#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class OptionType : int {
    Boolean = 0,
    InputModeBoolean = 1,
    Float = 2,
    InputModeFloat = 3,
    String = 4,
    Int = 5,
    Enum = 6,
    Vec3 = 7,
    StringList = 8,
    Int64 = 9,
    UInt64 = 10,
};
