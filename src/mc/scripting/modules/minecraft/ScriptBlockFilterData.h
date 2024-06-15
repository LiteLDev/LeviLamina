#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptBlockFilterData {
public:
    // prevent constructor by default
    ScriptBlockFilterData& operator=(ScriptBlockFilterData const&);
    ScriptBlockFilterData(ScriptBlockFilterData const&);
    ScriptBlockFilterData();
};

}; // namespace ScriptModuleMinecraft::EventFilters
