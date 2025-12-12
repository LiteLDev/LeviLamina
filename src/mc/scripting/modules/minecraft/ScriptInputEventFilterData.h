#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptInputEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk848ada;
    ::ll::UntypedStorage<4, 4> mUnk27dfcc;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInputEventFilterData& operator=(ScriptInputEventFilterData const&);
    ScriptInputEventFilterData(ScriptInputEventFilterData const&);
    ScriptInputEventFilterData();
};

} // namespace ScriptModuleMinecraft::EventFilters
