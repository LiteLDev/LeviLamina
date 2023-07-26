/**
 * @file  ScriptWatchdog.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ScriptWatchdog.
 *
 */
namespace ScriptWatchdog {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol  ?initialize\@ScriptWatchdog\@\@YAXPEAVIWatchdog\@Scripting\@\@AEAVServerLevel\@\@PEAVScriptPluginManager\@\@VWeakLifetimeScope\@3\@PEAVServerInstance\@\@\@Z
     */
    MCAPI void initialize(class Scripting::IWatchdog *, class ServerLevel &, class ScriptPluginManager *, class Scripting::WeakLifetimeScope, class ServerInstance *);

};