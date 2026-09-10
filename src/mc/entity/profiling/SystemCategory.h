#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ECS::Profiling::Diagnostics {

struct SystemCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3a854c;
    ::ll::UntypedStorage<8, 8>  mUnk3cec83;
    // NOLINTEND

public:
    // prevent constructor by default
    SystemCategory& operator=(SystemCategory const&);
    SystemCategory(SystemCategory const&);
    SystemCategory();
};

} // namespace ECS::Profiling::Diagnostics
