#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
enum class EventResult;
struct ScriptCommandMessageEvent;
struct ScriptingNotificationEvent;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScriptingEventListener {

public:
    // prevent constructor by default
    ScriptScriptingEventListener& operator=(ScriptScriptingEventListener const&) = delete;
    ScriptScriptingEventListener(ScriptScriptingEventListener const&)            = delete;
    ScriptScriptingEventListener()                                               = delete;

public:
    // NOLINTBEGIN
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
     * @symbol ?onEvent\@ScriptingEventListener\@\@UEAA?AW4EventResult\@\@AEBUScriptingNotificationEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ScriptingNotificationEvent const&);
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
