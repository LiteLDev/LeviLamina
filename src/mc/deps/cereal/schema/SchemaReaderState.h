#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

enum class SchemaReaderState : uchar {
    Unknown = 0,
    True    = 1,
    False   = 2,
};

}
