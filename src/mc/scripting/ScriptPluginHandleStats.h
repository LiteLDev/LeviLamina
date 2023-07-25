#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptPluginHandleStats {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPLUGINHANDLESTATS
public:
    ScriptPluginHandleStats(ScriptPluginHandleStats const&) = delete;
    ScriptPluginHandleStats()                               = delete;
#endif

public:
    /**
     * @symbol ??4ScriptPluginHandleStats\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ScriptPluginHandleStats& operator=(struct ScriptPluginHandleStats const&);
    /**
     * @symbol ??4ScriptPluginHandleStats\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct ScriptPluginHandleStats& operator=(struct ScriptPluginHandleStats&&);
    /**
     * @symbol ??1ScriptPluginHandleStats\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPluginHandleStats();
};
