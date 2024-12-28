#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glTF {

struct Animation {
public:
    // prevent constructor by default
    Animation& operator=(Animation const&);
    Animation(Animation const&);
    Animation();
};

} // namespace glTF
