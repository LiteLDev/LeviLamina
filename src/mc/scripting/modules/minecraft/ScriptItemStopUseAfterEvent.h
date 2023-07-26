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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTITEMSTOPUSEAFTEREVENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptItemStopUseAfterEvent(); // NOLINT
#endif
    /**
     * @symbol ??0ScriptItemStopUseAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptItemStopUseAfterEvent(struct ScriptModuleMinecraft::ScriptItemStopUseAfterEvent const&); // NOLINT
    /**
     * @symbol ??4ScriptItemStopUseAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptItemStopUseAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemStopUseAfterEvent&&); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptItemStopUseAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemStopUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>
    bind(); // NOLINT
    /**
     * @symbol
     * ?bindV010\@ScriptItemStopUseAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemStopUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>
    bindV010(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
