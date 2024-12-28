#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class zip_compression_status : int {
    Ok       = 0,
    End      = 1,
    Error    = 2,
    NeedData = 3,
};
