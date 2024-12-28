#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DripstoneUtils {

struct PointedDripstoneBasePos {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkdf63ff;
    ::ll::UntypedStorage<1, 1>  mUnk70bbc7;
    // NOLINTEND

public:
    // prevent constructor by default
    PointedDripstoneBasePos& operator=(PointedDripstoneBasePos const&);
    PointedDripstoneBasePos(PointedDripstoneBasePos const&);
    PointedDripstoneBasePos();
};

} // namespace DripstoneUtils
