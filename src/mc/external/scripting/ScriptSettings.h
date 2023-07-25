#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptSettings {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSETTINGS
public:
    ScriptSettings& operator=(ScriptSettings const&) = delete;
    ScriptSettings(ScriptSettings const&)            = delete;
#endif

public:
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
};
