#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockTessellationFallbackUtils {

struct TessellationConfigInfo {
public:
    // prevent constructor by default
    TessellationConfigInfo& operator=(TessellationConfigInfo const&);
    TessellationConfigInfo(TessellationConfigInfo const&);
    TessellationConfigInfo();
};

} // namespace BlockTessellationFallbackUtils
