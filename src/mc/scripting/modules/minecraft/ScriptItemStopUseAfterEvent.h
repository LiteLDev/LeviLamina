#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemStopUseAfterEvent {

public:
    // prevent constructor by default
    ScriptItemStopUseAfterEvent& operator=(ScriptItemStopUseAfterEvent const&) = delete;
    ScriptItemStopUseAfterEvent()                                              = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTITEMSTOPUSEAFTEREVENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptItemStopUseAfterEvent();
#endif
    /**
     * @symbol ??0ScriptItemStopUseAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptItemStopUseAfterEvent(struct ScriptModuleMinecraft::ScriptItemStopUseAfterEvent const&);
    /**
     * @symbol
     * ?bind\@ScriptItemStopUseAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemStopUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemStopUseAfterEvent> bind();
    /**
     * @symbol
     * ?bindV010\@ScriptItemStopUseAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemStopUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>
    bindV010();
    /**
     * @symbol ??4ScriptItemStopUseAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptItemStopUseAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemStopUseAfterEvent&&);
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
