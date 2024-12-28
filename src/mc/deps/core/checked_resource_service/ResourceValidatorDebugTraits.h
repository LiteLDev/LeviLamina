#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

template <typename T0>
struct ResourceValidatorDebugTraits {
public:
    // prevent constructor by default
    ResourceValidatorDebugTraits& operator=(ResourceValidatorDebugTraits const&);
    ResourceValidatorDebugTraits(ResourceValidatorDebugTraits const&);
    ResourceValidatorDebugTraits();
};

} // namespace mce
