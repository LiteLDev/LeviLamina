/**
 * @file  ScriptDebugger.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @hash   -521286983
     * @vftbl  0
     * @symbol  ?listen\@ScriptDebugger\@\@UEAA_NG\@Z
     */
    virtual bool listen(unsigned short);
    /**
     * @hash   -1327589208
     * @vftbl  1
     * @symbol  ?connect\@ScriptDebugger\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@G\@Z
     */
    virtual bool connect(std::string const &, unsigned short);
    /**
     * @hash   936562355
     * @vftbl  2
     * @symbol  ?close\@ScriptDebugger\@\@UEAAXXZ
     */
    virtual void close();
    /**
     * @hash   1119041206
     * @vftbl  3
     * @symbol  ?startProfiler\@ScriptDebugger\@\@UEAAXXZ
     */
    virtual void startProfiler();
    /**
     * @hash   251730534
     * @vftbl  4
     * @symbol  ?stopProfiler\@ScriptDebugger\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void stopProfiler(std::string const &);
    /**
     * @hash   215499011
     * @vftbl  5
     * @symbol  ?getResourceStats\@ScriptDebugger\@\@UEBA?AUScriptResourceStats\@\@XZ
     */
    virtual struct ScriptResourceStats getResourceStats() const;
    /**
     * @hash   737299330
     * @symbol  ??0ScriptDebugger\@\@QEAA\@AEAVScriptEngine\@Scripting\@\@AEAVScriptPluginManager\@\@AEAVIScriptDebuggerWatchdog\@\@V?$unique_ptr\@VIScriptTelemetryLogger\@\@U?$default_delete\@VIScriptTelemetryLogger\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI ScriptDebugger(class Scripting::ScriptEngine &, class ScriptPluginManager &, class IScriptDebuggerWatchdog &, std::unique_ptr<class IScriptTelemetryLogger>);
    /**
     * @hash   -520686779
     * @symbol  ?checkConnections\@ScriptDebugger\@\@QEAAXXZ
     */
    MCAPI void checkConnections();

//private:
    /**
     * @hash   -1451348938
     * @symbol  ?_createController\@ScriptDebugger\@\@AEAAPEAVIDebuggerController\@Scripting\@\@XZ
     */
    MCAPI class Scripting::IDebuggerController * _createController();
    /**
     * @hash   1133159364
     * @symbol  ?_releaseController\@ScriptDebugger\@\@AEAAXXZ
     */
    MCAPI void _releaseController();

private:

};