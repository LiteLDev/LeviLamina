#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::ResourceUri {

enum class ValidationStatus : int {
    Success         = 0,
    InvalidScheme   = 1,
    InvalidFilePath = 2,
    InvalidEmpty    = 3,
};

}
