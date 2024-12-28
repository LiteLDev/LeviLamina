#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ItemCommandVisibility : uchar {
    Visible            = 0,
    Hidden             = 1,
    DeferToLegacyBlock = 2,
};
