/**
 * @file  ScriptPluginStats.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ScriptPluginStats.
 *
 */
struct ScriptPluginStats {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPLUGINSTATS
public:
    ScriptPluginStats(struct ScriptPluginStats const &) = delete;
    ScriptPluginStats() = delete;
#endif

public:
    /**
     * @symbol  ??4ScriptPluginStats\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ScriptPluginStats & operator=(struct ScriptPluginStats const &);
    /**
     * @symbol  ??4ScriptPluginStats\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct ScriptPluginStats & operator=(struct ScriptPluginStats &&);
    /**
     * @symbol  ??1ScriptPluginStats\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPluginStats();

};