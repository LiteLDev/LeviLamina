#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilderStorageQueryOptions {

enum class Operation : uchar {
    None  = 0x0,
    Get   = 0x1,
    Set   = 0x2,
    Reset = 0x3,
};
};
