#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {

enum class ValueType : int {
    Null    = 0x0,
    Int     = 0x1,
    Uint    = 0x2,
    Real    = 0x3,
    String  = 0x4,
    Boolean = 0x5,
    Array   = 0x6,
    Object  = 0x7,
};

};
