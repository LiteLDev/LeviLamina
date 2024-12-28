#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct DeprecatedDimensionTypes {
public:
    // prevent constructor by default
    DeprecatedDimensionTypes& operator=(DeprecatedDimensionTypes const&);
    DeprecatedDimensionTypes(DeprecatedDimensionTypes const&);
    DeprecatedDimensionTypes();
};

} // namespace ScriptModuleMinecraft
