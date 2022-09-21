/**
 * @file  MC/ScriptCommandProcessor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptCommandProcessor.
 *
 */
class ScriptCommandProcessor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTCOMMANDPROCESSOR
public:
    class ScriptCommandProcessor& operator=(class ScriptCommandProcessor const &) = delete;
    ScriptCommandProcessor(class ScriptCommandProcessor const &) = delete;
    ScriptCommandProcessor() = delete;
#endif

public:
    /**
     * @hash   1178058242
     * @symbol ??0ScriptCommandProcessor@@QEAA@_K@Z
     */
    MCAPI ScriptCommandProcessor(unsigned __int64);
    /**
     * @hash   1141488620
     * @symbol ?executeCommands@ScriptCommandProcessor@@QEAAXAEAVMinecraftCommands@@@Z
     */
    MCAPI void executeCommands(class MinecraftCommands &);
    /**
     * @hash   473678272
     * @symbol ?queueCommand@ScriptCommandProcessor@@QEAA_N$$QEAV?$shared_ptr@UScriptPendingCommand@@@std@@@Z
     */
    MCAPI bool queueCommand(class std::shared_ptr<struct ScriptPendingCommand> &&);
    /**
     * @hash   -267725901
     * @symbol ?rejectAll@ScriptCommandProcessor@@QEAAXXZ
     */
    MCAPI void rejectAll();
    /**
     * @hash   -941426164
     * @symbol ??1ScriptCommandProcessor@@QEAA@XZ
     */
    MCAPI ~ScriptCommandProcessor();

};