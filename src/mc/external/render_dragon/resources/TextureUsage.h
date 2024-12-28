#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon {

class TextureUsage : public ::std::bitset<4> {
public:
    // prevent constructor by default
    TextureUsage& operator=(TextureUsage const&);
    TextureUsage(TextureUsage const&);
    TextureUsage();
};

} // namespace dragon
