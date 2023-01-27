/**
 * @file  MinecraftScriptTelemetryLogger.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecraftScriptTelemetryLogger.
 *
 */
class MinecraftScriptTelemetryLogger {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTSCRIPTTELEMETRYLOGGER
public:
    class MinecraftScriptTelemetryLogger& operator=(class MinecraftScriptTelemetryLogger const &) = delete;
    MinecraftScriptTelemetryLogger(class MinecraftScriptTelemetryLogger const &) = delete;
    MinecraftScriptTelemetryLogger() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MinecraftScriptTelemetryLogger();
    /**
     * @hash   -527728846
     * @vftbl  1
     * @symbol  ?onPluginDiscovery\@MinecraftScriptTelemetryLogger\@\@UEAAXAEBVScriptPluginResult\@\@\@Z
     */
    virtual void onPluginDiscovery(class ScriptPluginResult const &);
    /**
     * @hash   -885765944
     * @vftbl  2
     * @symbol  ?onPluginRun\@MinecraftScriptTelemetryLogger\@\@UEAAXAEBVScriptPluginResult\@\@V?$duration\@_JU?$ratio\@$00$0PECEA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    virtual void onPluginRun(class ScriptPluginResult const &, class std::chrono::duration<__int64, struct std::ratio<1, 1000000>>);
    /**
     * @hash   -1069045555
     * @vftbl  3
     * @symbol  ?onDebuggerListen\@MinecraftScriptTelemetryLogger\@\@UEAAXXZ
     */
    virtual void onDebuggerListen();
    /**
     * @hash   -2023914384
     * @vftbl  4
     * @symbol  ?onDebuggerConnect\@MinecraftScriptTelemetryLogger\@\@UEAAXXZ
     */
    virtual void onDebuggerConnect();
    /**
     * @hash   73216229
     * @symbol  ??0MinecraftScriptTelemetryLogger\@\@QEAA\@AEAVIMinecraftEventing\@\@_N\@Z
     */
    MCAPI MinecraftScriptTelemetryLogger(class IMinecraftEventing &, bool);

};