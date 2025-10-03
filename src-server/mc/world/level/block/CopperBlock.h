#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/block/CopperBehavior.h"

template <typename T0>
class CopperBlock : public T0 {
public:
    CopperBehavior mCopperBehavior;
};
