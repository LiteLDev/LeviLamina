#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

enum class ResultCode : ushort {
    // bitfield representation
    Info                  = 1 << 0,
    Warning               = 1 << 1,
    UnrecognizedField     = 1 << 2,
    Error                 = 1 << 3,
    MalformedInput        = 1 << 4,
    UndefinedSchema       = 1 << 5,
    ConstraintViolation   = 1 << 6,
    MissingRequiredField  = 1 << 7,
    UnsupportedType       = 1 << 8,
    DeprecatedMember      = 1 << 9,
    VariantPriorityOrder  = 1 << 10,
    UnrecognizedComponent = 1 << 11,
    UnsupportedVersion    = 1 << 12,
    InvalidEnumValue      = 1 << 13,
    EnttEnumAsBitmask     = 65535,
    All                   = 65535,
};

}
