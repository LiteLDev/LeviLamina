#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PackReportState : uchar {
    Unavailable = 0,
    Generating  = 1,
    Available   = 2,
};
