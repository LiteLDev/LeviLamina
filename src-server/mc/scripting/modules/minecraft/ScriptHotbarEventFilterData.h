#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptHotbarEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke8ed8c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptHotbarEventFilterData& operator=(ScriptHotbarEventFilterData const&);
    ScriptHotbarEventFilterData(ScriptHotbarEventFilterData const&);
    ScriptHotbarEventFilterData();

};

}
