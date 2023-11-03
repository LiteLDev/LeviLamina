#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DimensionHeightRange {
public:
    DimensionHeightRange(short mi, short ma) : min(mi), max(ma){};
    short min;
    short max;
};
