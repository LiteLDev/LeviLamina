#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemCompleteUseAfterEvent {

public:
    // prevent constructor by default
    ScriptItemCompleteUseAfterEvent& operator=(ScriptItemCompleteUseAfterEvent const&) = delete;
    ScriptItemCompleteUseAfterEvent()                                                  = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTITEMCOMPLETEUSEAFTEREVENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptItemCompleteUseAfterEvent();
#endif
    /**
     * @symbol ??0ScriptItemCompleteUseAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptItemCompleteUseAfterEvent(struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent const&);
    /**
     * @symbol ??4ScriptItemCompleteUseAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent&&);
    /**
     * @symbol
     * ?bind\@ScriptItemCompleteUseAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemCompleteUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>
    bind();
    /**
     * @symbol
     * ?bindV010\@ScriptItemCompleteUseAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemCompleteUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>
    bindV010();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
