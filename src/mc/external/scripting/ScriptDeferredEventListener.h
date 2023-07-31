#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptDeferredEventListener {

public:
    // prevent constructor by default
    ScriptDeferredEventListener& operator=(ScriptDeferredEventListener const&) = delete;
    ScriptDeferredEventListener(ScriptDeferredEventListener const&)            = delete;
    ScriptDeferredEventListener()                                              = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
