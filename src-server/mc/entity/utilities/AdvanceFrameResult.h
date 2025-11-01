#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class AdvanceFrameResult : uchar {
    NoChange       = 0,
    ObjectModified = 1,
    NotImplemented = 2,
};
