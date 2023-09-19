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
    // symbol: ??1ScriptEventMessageFilterOptions@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptEventMessageFilterOptions();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
