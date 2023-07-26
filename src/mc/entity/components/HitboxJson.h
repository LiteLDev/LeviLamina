#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HitboxJson {

public:
    // prevent constructor by default
    HitboxJson& operator=(HitboxJson const&) = delete;
    HitboxJson(HitboxJson const&)            = delete;
    HitboxJson()                             = delete;
};
