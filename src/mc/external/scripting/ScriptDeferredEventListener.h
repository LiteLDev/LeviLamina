#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptDeferredEventListener {

public:
    // prevent constructor by default
    ScriptDeferredEventListener& operator=(ScriptDeferredEventListener const&) = delete;
    ScriptDeferredEventListener(ScriptDeferredEventListener const&)            = delete;
    ScriptDeferredEventListener()                                              = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTDEFERREDEVENTLISTENER
    /**
     * @symbol ?onFlushSystemAfterEvents\@ScriptDeferredEventListener\@\@UEAA_NXZ
     */
    MCVAPI bool onFlushSystemAfterEvents(); // NOLINT
    /**
     * @symbol ?onFlushWorldAfterEvents\@ScriptDeferredEventListener\@\@UEAA_NXZ
     */
    MCVAPI bool onFlushWorldAfterEvents(); // NOLINT
    /**
     * @symbol ?onLevelTickEnd\@ScriptDeferredEventListener\@\@UEAAXXZ
     */
    MCVAPI void onLevelTickEnd(); // NOLINT
    /**
     * @symbol ?onPostFlushAfterEvents\@ScriptDeferredEventListener\@\@UEAAXXZ
     */
    MCVAPI void onPostFlushAfterEvents(); // NOLINT
    /**
     * @symbol ?onPreFlushAfterEvents\@ScriptDeferredEventListener\@\@UEAAXXZ
     */
    MCVAPI void onPreFlushAfterEvents(); // NOLINT
    /**
     * @symbol ?onRunSystemTick\@ScriptDeferredEventListener\@\@UEAA_NXZ
     */
    MCVAPI bool onRunSystemTick(); // NOLINT
#endif
};
