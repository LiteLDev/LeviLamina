#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptEventMessageFilterOptions {

public:
    // prevent constructor by default
    ScriptEventMessageFilterOptions& operator=(ScriptEventMessageFilterOptions const&) = delete;
    ScriptEventMessageFilterOptions(ScriptEventMessageFilterOptions const&)            = delete;
    ScriptEventMessageFilterOptions()                                                  = delete;

public:
    /**
     * @symbol ??1ScriptEventMessageFilterOptions\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptEventMessageFilterOptions(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
