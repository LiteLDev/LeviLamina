#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

enum class ReflectedType : int {
    Null                 = 0,
    Bool                 = 1,
    String               = 2,
    Int8                 = 3,
    Uint8                = 4,
    Int16                = 5,
    Uint16               = 6,
    Int32                = 7,
    Uint32               = 8,
    Int64                = 9,
    Uint64               = 10,
    Float                = 11,
    Double               = 12,
    Enum                 = 13,
    SequenceContainer    = 14,
    AssociativeContainer = 15,
    Object               = 16,
};

}
