/**
 * @file  ScriptDeferredEventListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ScriptDeferredEventListener {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTDEFERREDEVENTLISTENER
public:
    class ScriptDeferredEventListener& operator=(class ScriptDeferredEventListener const &) = delete;
    ScriptDeferredEventListener(class ScriptDeferredEventListener const &) = delete;
    ScriptDeferredEventListener() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTDEFERREDEVENTLISTENER
    /**
     * @symbol ?onFlushSystemAfterEvents\@ScriptDeferredEventListener\@\@UEAA_NXZ
     */
    MCVAPI bool onFlushSystemAfterEvents();
    /**
     * @symbol ?onFlushWorldAfterEvents\@ScriptDeferredEventListener\@\@UEAA_NXZ
     */
    MCVAPI bool onFlushWorldAfterEvents();
    /**
     * @symbol ?onLevelTickEnd\@ScriptDeferredEventListener\@\@UEAAXXZ
     */
    MCVAPI void onLevelTickEnd();
    /**
     * @symbol ?onPostFlushAfterEvents\@ScriptDeferredEventListener\@\@UEAAXXZ
     */
    MCVAPI void onPostFlushAfterEvents();
    /**
     * @symbol ?onPreFlushAfterEvents\@ScriptDeferredEventListener\@\@UEAAXXZ
     */
    MCVAPI void onPreFlushAfterEvents();
    /**
     * @symbol ?onRunSystemTick\@ScriptDeferredEventListener\@\@UEAA_NXZ
     */
    MCVAPI bool onRunSystemTick();
#endif

};
