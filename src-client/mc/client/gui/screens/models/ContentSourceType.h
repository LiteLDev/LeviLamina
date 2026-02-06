#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ContentSourceType : int {
    None                   = 0,
    PackManager            = 1,
    WorldPackManager       = 2,
    RealmPackManager       = 3,
    RealmsWorldPackManager = 4,
    InvalidResource        = 5,
    WorldContent           = 6,
    WorldTemplate          = 7,
    SkinContent            = 8,
};
