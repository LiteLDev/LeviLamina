#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::Reflection {

enum class ReturnPolicy : uchar {
    Copy = 0,
    Baked = 1,
};

}
