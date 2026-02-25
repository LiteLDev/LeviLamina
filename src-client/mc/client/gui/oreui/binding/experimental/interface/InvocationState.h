#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::Experimental {

enum class InvocationState : uchar {
    Idle    = 0,
    Working = 1,
    Done    = 2,
};

}
