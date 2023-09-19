#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DripstoneUtils {

struct PointedDripstoneBasePos {
public:
    // prevent constructor by default
    PointedDripstoneBasePos& operator=(PointedDripstoneBasePos const&);
    PointedDripstoneBasePos(PointedDripstoneBasePos const&);
    PointedDripstoneBasePos();
};

}; // namespace DripstoneUtils
