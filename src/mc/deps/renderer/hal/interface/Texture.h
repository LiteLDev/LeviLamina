#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class Texture {
public:
    // prevent constructor by default
    Texture& operator=(Texture const&);
    Texture(Texture const&);
    Texture();
};

} // namespace mce
