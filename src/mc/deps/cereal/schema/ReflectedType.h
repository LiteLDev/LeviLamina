#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

enum class ReflectedType : int {
    Bool                 = 0,
    String               = 1,
    Int8                 = 2,
    Uint8                = 3,
    Int16                = 4,
    Uint16               = 5,
    Int32                = 6,
    Uint32               = 7,
    Int64                = 8,
    Uint64               = 9,
    Float                = 10,
    Double               = 11,
    Enum                 = 12,
    SequenceContainer    = 13,
    AssociativeContainer = 14,
    Object               = 15,
};

}
