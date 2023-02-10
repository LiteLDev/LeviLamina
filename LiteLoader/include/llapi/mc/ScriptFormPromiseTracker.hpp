/**
 * @file  ScriptFormPromiseTracker.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @hash   -1562352472
     * @symbol  ?onEvent\@ScriptFormPromiseTracker\@\@UEAA?AW4EventResult\@\@AEBUPlayerFormCloseEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct PlayerFormCloseEvent const &);
    /**
     * @hash   -392211559
     * @symbol  ?onEvent\@ScriptFormPromiseTracker\@\@UEAA?AW4EventResult\@\@AEBUPlayerFormResponseEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct PlayerFormResponseEvent const &);
#endif
    /**
     * @hash   -1261528152
     * @symbol  ??0ScriptFormPromiseTracker\@\@QEAA\@XZ
     */
    MCAPI ScriptFormPromiseTracker();
    /**
     * @hash   874643379
     * @symbol  ?handleFormResponse\@ScriptFormPromiseTracker\@\@QEAAXIAEBVValue\@Json\@\@\@Z
     */
    MCAPI void handleFormResponse(unsigned int, class Json::Value const &);
    /**
     * @hash   -1238893886
     * @symbol  ?handlePlayerQuit\@ScriptFormPromiseTracker\@\@QEAAXAEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI void handlePlayerQuit(class NetworkIdentifier const &);
    /**
     * @hash   -225197500
     * @symbol  ??4ScriptFormPromiseTracker\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ScriptFormPromiseTracker & operator=(class ScriptFormPromiseTracker const &);
    /**
     * @hash   1710064197
     * @symbol  ?rejectAllForShutdown\@ScriptFormPromiseTracker\@\@QEAAXXZ
     */
    MCAPI void rejectAllForShutdown();

};