#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

struct GPUProfileTokenMarker {
public:
    // prevent constructor by default
    GPUProfileTokenMarker& operator=(GPUProfileTokenMarker const&);
    GPUProfileTokenMarker(GPUProfileTokenMarker const&);
    GPUProfileTokenMarker();
};

} // namespace Core::Profile
