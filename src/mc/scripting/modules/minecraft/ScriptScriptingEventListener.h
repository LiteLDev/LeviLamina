#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScriptingEventListener;
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
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?onEvent\@ScriptScriptingEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUScriptCommandMessageEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ScriptCommandMessageEvent const&); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?onEvent\@?$EventListenerDispatcher\@VScriptingEventListener\@\@\@\@MEAA?AW4EventResult\@\@AEBUScriptingNotificationEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ScriptingNotificationEvent const&); // NOLINT
};

}; // namespace ScriptModuleMinecraft
