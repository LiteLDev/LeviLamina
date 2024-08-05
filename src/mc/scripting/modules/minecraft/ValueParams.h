#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ValueParams {
public:
    // prevent constructor by default
    ValueParams& operator=(ValueParams const&);
    ValueParams(ValueParams const&);
    ValueParams();

public:
    // NOLINTBEGIN
    MCAPI ~ValueParams();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
