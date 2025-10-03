#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SetTargetMode : uchar {
    Never               = 0,
    OnceAndStopScanning = 1,
    OnceAndKeepScanning = 2,
};
