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
     * @symbol  ?onEvent\@ScriptFormPromiseTracker\@\@UEAA?AW4EventResult\@\@AEBUPlayerFormCloseEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct PlayerFormCloseEvent const &);
    /**
     * @symbol  ?onEvent\@ScriptFormPromiseTracker\@\@UEAA?AW4EventResult\@\@AEBUPlayerFormResponseEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct PlayerFormResponseEvent const &);
#endif
    /**
     * @symbol  ??0ScriptFormPromiseTracker\@\@QEAA\@XZ
     */
    MCAPI ScriptFormPromiseTracker();
    /**
     * @symbol  ?handleFormResponse\@ScriptFormPromiseTracker\@\@QEAAXIAEBVValue\@Json\@\@\@Z
     */
    MCAPI void handleFormResponse(unsigned int, class Json::Value const &);
    /**
     * @symbol  ?handlePlayerQuit\@ScriptFormPromiseTracker\@\@QEAAXAEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI void handlePlayerQuit(class NetworkIdentifier const &);
    /**
     * @symbol  ??4ScriptFormPromiseTracker\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ScriptFormPromiseTracker & operator=(class ScriptFormPromiseTracker const &);
    /**
     * @symbol  ?rejectAllForShutdown\@ScriptFormPromiseTracker\@\@QEAAXXZ
     */
    MCAPI void rejectAllForShutdown();

};