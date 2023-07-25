#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptDeferredEventListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTDEFERREDEVENTLISTENER
public:
    ScriptDeferredEventListener& operator=(ScriptDeferredEventListener const&) = delete;
    ScriptDeferredEventListener(ScriptDeferredEventListener const&)            = delete;
    ScriptDeferredEventListener()                                              = delete;
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
