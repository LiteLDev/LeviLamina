#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptSettings {

public:
    // prevent constructor by default
    ScriptSettings& operator=(ScriptSettings const&) = delete;
    ScriptSettings(ScriptSettings const&)            = delete;

public:
    /**
     * @symbol ??0ScriptSettings\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ScriptSettings(struct ScriptSettings&&); // NOLINT
    /**
     * @symbol ??0ScriptSettings\@\@QEAA\@XZ
     */
    MCAPI ScriptSettings(); // NOLINT
    /**
     * @symbol ??1ScriptSettings\@\@QEAA\@XZ
     */
    MCAPI ~ScriptSettings(); // NOLINT
};
