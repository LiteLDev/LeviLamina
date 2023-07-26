#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
struct ItemDefinitionEventTriggeredEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemDefinitionAfterEvent {

public:
    // prevent constructor by default
    ScriptItemDefinitionAfterEvent() = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTITEMDEFINITIONAFTEREVENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptItemDefinitionAfterEvent(); // NOLINT
#endif
    /**
     * @symbol ??0ScriptItemDefinitionAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptItemDefinitionAfterEvent(struct ScriptModuleMinecraft::ScriptItemDefinitionAfterEvent const&); // NOLINT
    /**
     * @symbol
     * ??0ScriptItemDefinitionAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@V?$StrongTypedObjectHandle\@VScriptItemStack\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEBUItemDefinitionEventTriggeredEvent\@\@AEBVWeakLifetimeScope\@3\@\@Z
     */
    MCAPI
    ScriptItemDefinitionAfterEvent(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>, struct ItemDefinitionEventTriggeredEvent const&, class Scripting::WeakLifetimeScope const&); // NOLINT
    /**
     * @symbol ??0ScriptItemDefinitionAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI ScriptItemDefinitionAfterEvent(struct ScriptModuleMinecraft::ScriptItemDefinitionAfterEvent&&); // NOLINT
    /**
     * @symbol ??4ScriptItemDefinitionAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptItemDefinitionAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemDefinitionAfterEvent const&); // NOLINT
    /**
     * @symbol ??4ScriptItemDefinitionAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptItemDefinitionAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemDefinitionAfterEvent&&); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptItemDefinitionAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemDefinitionAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemDefinitionAfterEvent>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
