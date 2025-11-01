#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules::postfx {

struct BloomParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb9a93c;
    ::ll::UntypedStorage<1, 1> mUnk6e6a19;
    ::ll::UntypedStorage<4, 4> mUnk4ae14e;
    // NOLINTEND

public:
    // prevent constructor by default
    BloomParameters& operator=(BloomParameters const&);
    BloomParameters(BloomParameters const&);
    BloomParameters();
};

} // namespace dragon::framerenderer::modules::postfx
