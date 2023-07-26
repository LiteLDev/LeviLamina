/**
 * @file  ScriptPluginManagerResult.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptPluginManagerResult.
 *
 */
class ScriptPluginManagerResult {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPLUGINMANAGERRESULT
public:
    class ScriptPluginManagerResult& operator=(class ScriptPluginManagerResult const &) = delete;
    ScriptPluginManagerResult(class ScriptPluginManagerResult const &) = delete;
    ScriptPluginManagerResult() = delete;
#endif

public:
    /**
     * @symbol  ?getOrCreatePluginResults\@ScriptPluginManagerResult\@\@QEAAAEAVScriptPluginResult\@\@AEBUModuleDescriptor\@Scripting\@\@\@Z
     */
    MCAPI class ScriptPluginResult & getOrCreatePluginResults(struct Scripting::ModuleDescriptor const &);
    /**
     * @symbol  ?writeToContentLog\@ScriptPluginManagerResult\@\@QEBAXXZ
     */
    MCAPI void writeToContentLog() const;
    /**
     * @symbol  ??1ScriptPluginManagerResult\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPluginManagerResult();

};