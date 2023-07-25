#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DripstoneUtils {

struct PointedDripstoneBasePos {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRIPSTONEUTILS_POINTEDDRIPSTONEBASEPOS
public:
    PointedDripstoneBasePos& operator=(PointedDripstoneBasePos const&) = delete;
    PointedDripstoneBasePos(PointedDripstoneBasePos const&)            = delete;
    PointedDripstoneBasePos()                                          = delete;
#endif

public:
};

}; // namespace DripstoneUtils
