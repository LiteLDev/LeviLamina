#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemStartUseAfterEvent {

public:
    // prevent constructor by default
    ScriptItemStartUseAfterEvent& operator=(ScriptItemStartUseAfterEvent const&) = delete;
    ScriptItemStartUseAfterEvent()                                               = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTITEMSTARTUSEAFTEREVENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptItemStartUseAfterEvent(); // NOLINT
#endif
    /**
     * @symbol ??0ScriptItemStartUseAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptItemStartUseAfterEvent(struct ScriptModuleMinecraft::ScriptItemStartUseAfterEvent const&); // NOLINT
    /**
     * @symbol ??4ScriptItemStartUseAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptItemStartUseAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemStartUseAfterEvent&&); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptItemStartUseAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemStartUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>
    bind(); // NOLINT
    /**
     * @symbol
     * ?bindV010\@ScriptItemStartUseAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemStartUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>
    bindV010(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
