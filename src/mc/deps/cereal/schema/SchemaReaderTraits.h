#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

enum class SchemaReaderTraits : int {
    NoTraits          = 0,
    IsSequenceReader  = 1,
    IsStrictReader    = 2,
    EnttEnumAsBitmask = 255,
};

}
