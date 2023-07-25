#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptingEventListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTINGEVENTLISTENER
public:
    ScriptingEventListener& operator=(ScriptingEventListener const&) = delete;
    ScriptingEventListener(ScriptingEventListener const&)            = delete;
    ScriptingEventListener()                                         = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?onEvent\@ScriptingEventListener\@\@UEAA?AW4EventResult\@\@AEBUScriptingNotificationEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ScriptingNotificationEvent const&);
};
