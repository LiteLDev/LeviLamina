#pragma once

#include "mc/world/level/block/CopperBehavior.h"
#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class CopperBlock : public T0 {
public:
    CopperBehavior mCopperBehavior;
};
