#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

struct ContainerReplacementParams {
public:
    // prevent constructor by default
    ContainerReplacementParams& operator=(ContainerReplacementParams const&);
    ContainerReplacementParams(ContainerReplacementParams const&);
    ContainerReplacementParams();
};

}; // namespace Util
