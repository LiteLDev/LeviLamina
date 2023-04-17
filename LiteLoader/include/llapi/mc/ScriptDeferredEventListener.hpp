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
     * @symbol ?onFlushAfterEvents\@ScriptDeferredEventListener\@\@UEAA_NXZ
     */
    MCVAPI bool onFlushAfterEvents();
    /**
     * @symbol ?onLevelTickEnd\@ScriptDeferredEventListener\@\@UEAAXXZ
     */
    MCVAPI void onLevelTickEnd();
    /**
     * @symbol ?onRunSystemEvents\@ScriptDeferredEventListener\@\@UEAA_NXZ
     */
    MCVAPI bool onRunSystemEvents();
#endif

};
