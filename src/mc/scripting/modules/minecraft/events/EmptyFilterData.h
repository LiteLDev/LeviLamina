#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct EmptyFilterData {
public:
    // prevent constructor by default
    EmptyFilterData& operator=(EmptyFilterData const&);
    EmptyFilterData(EmptyFilterData const&);
    EmptyFilterData();
};

} // namespace ScriptModuleMinecraft
