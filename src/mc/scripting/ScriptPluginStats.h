#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptPluginStats {

public:
    // prevent constructor by default
    ScriptPluginStats(ScriptPluginStats const&) = delete;
    ScriptPluginStats()                         = delete;

public:
    /**
     * @symbol ??4ScriptPluginStats\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ScriptPluginStats& operator=(struct ScriptPluginStats const&); // NOLINT
    /**
     * @symbol ??4ScriptPluginStats\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct ScriptPluginStats& operator=(struct ScriptPluginStats&&); // NOLINT
    /**
     * @symbol ??1ScriptPluginStats\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPluginStats(); // NOLINT
};
