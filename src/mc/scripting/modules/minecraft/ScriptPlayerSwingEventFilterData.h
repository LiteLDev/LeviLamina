#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptPlayerSwingEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkc3e509;
    ::ll::UntypedStorage<1, 1> mUnk639fba;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerSwingEventFilterData& operator=(ScriptPlayerSwingEventFilterData const&);
    ScriptPlayerSwingEventFilterData(ScriptPlayerSwingEventFilterData const&);
    ScriptPlayerSwingEventFilterData();
};

} // namespace ScriptModuleMinecraft::EventFilters
