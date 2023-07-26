#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptPluginHandleStats {

public:
    // prevent constructor by default
    ScriptPluginHandleStats(ScriptPluginHandleStats const&) = delete;
    ScriptPluginHandleStats()                               = delete;

public:
    /**
     * @symbol ??4ScriptPluginHandleStats\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ScriptPluginHandleStats& operator=(struct ScriptPluginHandleStats const&); // NOLINT
    /**
     * @symbol ??4ScriptPluginHandleStats\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct ScriptPluginHandleStats& operator=(struct ScriptPluginHandleStats&&); // NOLINT
    /**
     * @symbol ??1ScriptPluginHandleStats\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPluginHandleStats(); // NOLINT
};
