#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptBlockFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk3c5da0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockFilterData& operator=(ScriptBlockFilterData const&);
    ScriptBlockFilterData(ScriptBlockFilterData const&);
    ScriptBlockFilterData();

};

}
