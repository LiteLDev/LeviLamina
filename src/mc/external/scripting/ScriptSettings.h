#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptSettings {

public:
    // prevent constructor by default
    ScriptSettings& operator=(ScriptSettings const&) = delete;
    ScriptSettings(ScriptSettings const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ScriptSettings\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ScriptSettings(struct ScriptSettings&&);
    /**
     * @symbol ??0ScriptSettings\@\@QEAA\@XZ
     */
    MCAPI ScriptSettings();
    /**
     * @symbol ??1ScriptSettings\@\@QEAA\@XZ
     */
    MCAPI ~ScriptSettings();
    // NOLINTEND
};
