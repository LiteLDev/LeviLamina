#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptEventMessageFilterOptions {
public:
    // prevent constructor by default
    ScriptEventMessageFilterOptions& operator=(ScriptEventMessageFilterOptions const&);
    ScriptEventMessageFilterOptions(ScriptEventMessageFilterOptions const&);
    ScriptEventMessageFilterOptions();

public:
    // NOLINTBEGIN
    MCAPI ~ScriptEventMessageFilterOptions();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
