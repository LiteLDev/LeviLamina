#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
struct ItemUseEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemUseAfterEvent {

public:
    // prevent constructor by default
    ScriptItemUseAfterEvent(ScriptItemUseAfterEvent const&) = delete;
    ScriptItemUseAfterEvent()                               = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTITEMUSEAFTEREVENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptItemUseAfterEvent(); // NOLINT
#endif
    /**
     * @symbol
     * ??0ScriptItemUseAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@V?$StrongTypedObjectHandle\@VScriptItemStack\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEBUItemUseEvent\@\@AEBVWeakLifetimeScope\@3\@\@Z
     */
    MCAPI
    ScriptItemUseAfterEvent(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>, struct ItemUseEvent const&, class Scripting::WeakLifetimeScope const&); // NOLINT
    /**
     * @symbol ??4ScriptItemUseAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptItemUseAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemUseAfterEvent const&); // NOLINT
    /**
     * @symbol ??4ScriptItemUseAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptItemUseAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemUseAfterEvent&&); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptItemUseAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemUseAfterEvent>
    bind(); // NOLINT
    /**
     * @symbol
     * ?bindV010\@ScriptItemUseAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemUseAfterEvent>
    bindV010(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
