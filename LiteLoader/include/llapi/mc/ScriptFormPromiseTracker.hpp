/**
 * @file  MC/ScriptFormPromiseTracker.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptFormPromiseTracker.
 *
 */
class ScriptFormPromiseTracker {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTFORMPROMISETRACKER
public:
    ScriptFormPromiseTracker(class ScriptFormPromiseTracker const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTFORMPROMISETRACKER
    /**
     * @hash   1976603064
     * @symbol ?onEvent@ScriptFormPromiseTracker@@UEAA?AW4EventResult@@AEBUPlayerFormCloseEvent@@@Z
     */
    MCVAPI enum EventResult onEvent(struct PlayerFormCloseEvent const &);
    /**
     * @hash   -1148469335
     * @symbol ?onEvent@ScriptFormPromiseTracker@@UEAA?AW4EventResult@@AEBUPlayerFormResponseEvent@@@Z
     */
    MCVAPI enum EventResult onEvent(struct PlayerFormResponseEvent const &);
#endif
    /**
     * @hash   -215298984
     * @symbol ??0ScriptFormPromiseTracker@@QEAA@XZ
     */
    MCAPI ScriptFormPromiseTracker();
    /**
     * @hash   -1083364536
     * @symbol ?handleFormClose@ScriptFormPromiseTracker@@QEAAXAEBUPlayerFormCloseEvent@@@Z
     */
    MCAPI void handleFormClose(struct PlayerFormCloseEvent const &);
    /**
     * @hash   119523427
     * @symbol ?handleFormResponse@ScriptFormPromiseTracker@@QEAAXIAEBVValue@Json@@@Z
     */
    MCAPI void handleFormResponse(unsigned int, class Json::Value const &);
    /**
     * @hash   -1995136286
     * @symbol ?handlePlayerQuit@ScriptFormPromiseTracker@@QEAAXAEBVNetworkIdentifier@@@Z
     */
    MCAPI void handlePlayerQuit(class NetworkIdentifier const &);
    /**
     * @hash   819309556
     * @symbol ??4ScriptFormPromiseTracker@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class ScriptFormPromiseTracker & operator=(class ScriptFormPromiseTracker const &);
    /**
     * @hash   953652661
     * @symbol ?rejectAllForShutdown@ScriptFormPromiseTracker@@QEAAXXZ
     */
    MCAPI void rejectAllForShutdown();

};