#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

enum class ElementType : int {
    Boolean           = 0,
    Int8              = 1,
    UInt8             = 2,
    Int16             = 3,
    UInt16            = 4,
    Int32             = 5,
    UInt32            = 6,
    Int64             = 7,
    UInt64            = 8,
    Float             = 9,
    Double            = 10,
    String            = 11,
    Color             = 12,
    Array             = 13,
    Map               = 14,
    Pair              = 15,
    UserType          = 16,
    PolymorphUserType = 17,
};

}
