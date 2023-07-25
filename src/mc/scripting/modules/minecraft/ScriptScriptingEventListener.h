#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptScriptingEventListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTSCRIPTINGEVENTLISTENER
public:
    ScriptScriptingEventListener& operator=(ScriptScriptingEventListener const&) = delete;
    ScriptScriptingEventListener(ScriptScriptingEventListener const&)            = delete;
    ScriptScriptingEventListener()                                               = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?onEvent\@ScriptScriptingEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUScriptCommandMessageEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ScriptCommandMessageEvent const&);
    /**
     * @vftbl 2
     * @symbol
     * ?onEvent\@?$EventListenerDispatcher\@VScriptingEventListener\@\@\@\@MEAA?AW4EventResult\@\@AEBUScriptingNotificationEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ScriptingNotificationEvent const&);
};

}; // namespace ScriptModuleMinecraft
