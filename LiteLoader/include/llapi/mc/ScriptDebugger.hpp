/**
 * @file  ScriptDebugger.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptDebugger.
 *
 */
class ScriptDebugger {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTDEBUGGER
public:
    class ScriptDebugger& operator=(class ScriptDebugger const &) = delete;
    ScriptDebugger(class ScriptDebugger const &) = delete;
    ScriptDebugger() = delete;
#endif

public:
    /**
     * @hash   -473487591
     * @vftbl  0
     * @symbol ?listen@ScriptDebugger@@UEAA_NG@Z
     */
    virtual bool listen(unsigned short);
    /**
     * @hash   -1279466920
     * @vftbl  1
     * @symbol ?connect@ScriptDebugger@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@Z
     */
    virtual bool connect(std::string const &, unsigned short);
    /**
     * @hash   984684643
     * @vftbl  2
     * @symbol ?close@ScriptDebugger@@UEAAXXZ
     */
    virtual void close();
    /**
     * @hash   1166809846
     * @vftbl  3
     * @symbol ?startProfiler@ScriptDebugger@@UEAAXXZ
     */
    virtual void startProfiler();
    /**
     * @hash   299499174
     * @vftbl  4
     * @symbol ?stopProfiler@ScriptDebugger@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void stopProfiler(std::string const &);
    /**
     * @vftbl  5
     * @symbol ?getResourceStats@ScriptDebugger@@UEBA?AUScriptResourceStats@@XZ
     */
    virtual struct ScriptResourceStats getResourceStats() const;
    /**
     * @symbol ??0ScriptDebugger@@QEAA@AEAVScriptEngine@Scripting@@AEAVScriptPluginManager@@AEAVIScriptDebuggerWatchdog@@V?$unique_ptr@VIScriptTelemetryLogger@@U?$default_delete@VIScriptTelemetryLogger@@@std@@@std@@@Z
     */
    MCAPI ScriptDebugger(class Scripting::ScriptEngine &, class ScriptPluginManager &, class IScriptDebuggerWatchdog &, std::unique_ptr<class IScriptTelemetryLogger>);
    /**
     * @hash   -472502987
     * @symbol ?checkConnections@ScriptDebugger@@QEAAXXZ
     */
    MCAPI void checkConnections();

//private:
    /**
     * @hash   -1403165146
     * @symbol ?_createController@ScriptDebugger@@AEAAPEAVIDebuggerController@Scripting@@XZ
     */
    MCAPI class Scripting::IDebuggerController * _createController();
    /**
     * @hash   1181343156
     * @symbol ?_releaseController@ScriptDebugger@@AEAAXXZ
     */
    MCAPI void _releaseController();

private:

};