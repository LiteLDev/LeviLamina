#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptingEventListener {

public:
    // prevent constructor by default
    ScriptingEventListener& operator=(ScriptingEventListener const&) = delete;
    ScriptingEventListener(ScriptingEventListener const&)            = delete;
    ScriptingEventListener()                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?onEvent\@ScriptingEventListener\@\@UEAA?AW4EventResult\@\@AEBUScriptingNotificationEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ScriptingNotificationEvent const&); // NOLINT
};
