#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class UpdateType : uchar {
    ClearOverrides = 0,
    RemoveOverride = 1,
    SetIntOverride = 2,
    SetFloatOverride = 3,
};
