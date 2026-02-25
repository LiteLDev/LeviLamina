#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LiteralType : uchar {
    None    = 0,
    Boolean = 1,
    Integer = 2,
    Float   = 3,
    String  = 4,
    Value   = 5,
};
