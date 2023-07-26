#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemReleaseUseAfterEvent {

public:
    // prevent constructor by default
    ScriptItemReleaseUseAfterEvent& operator=(ScriptItemReleaseUseAfterEvent const&) = delete;
    ScriptItemReleaseUseAfterEvent()                                                 = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTITEMRELEASEUSEAFTEREVENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptItemReleaseUseAfterEvent(); // NOLINT
#endif
    /**
     * @symbol ??0ScriptItemReleaseUseAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptItemReleaseUseAfterEvent(struct ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent const&); // NOLINT
    /**
     * @symbol ??4ScriptItemReleaseUseAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent&&); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptItemReleaseUseAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemReleaseUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>
    bind(); // NOLINT
    /**
     * @symbol
     * ?bindV010\@ScriptItemReleaseUseAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemReleaseUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>
    bindV010(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
