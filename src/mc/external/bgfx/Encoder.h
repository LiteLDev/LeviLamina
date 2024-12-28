#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct Encoder {
public:
    // prevent constructor by default
    Encoder& operator=(Encoder const&);
    Encoder(Encoder const&);
    Encoder();
};

} // namespace bgfx
