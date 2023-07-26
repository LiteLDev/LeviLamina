#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DripstoneUtils {

struct PointedDripstoneBasePos {

public:
    // prevent constructor by default
    PointedDripstoneBasePos& operator=(PointedDripstoneBasePos const&) = delete;
    PointedDripstoneBasePos(PointedDripstoneBasePos const&)            = delete;
    PointedDripstoneBasePos()                                          = delete;
};

}; // namespace DripstoneUtils
