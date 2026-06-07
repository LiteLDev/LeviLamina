#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

enum class ThreadFrameType : uchar {
    Invalid      = 0,
    Unclassified = 1,
    Client       = 2,
    Server       = 3,
    Render       = 4,
};

}
