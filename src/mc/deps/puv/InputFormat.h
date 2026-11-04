#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv {

enum class InputFormat : uchar {
    Binary       = 0,
    JsonString   = 1,
    JsonCpp      = 2,
    JsonRapid    = 3,
    DynamicValue = 4,
};

}
