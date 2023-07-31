#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/external/scripting/WeakTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { struct ScriptWatchdogTerminateBeforeEvent; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSystemBeforeEvents {

public:
    // prevent constructor by default
    ScriptSystemBeforeEvents& operator=(ScriptSystemBeforeEvents const&) = delete;
    ScriptSystemBeforeEvents(ScriptSystemBeforeEvents const&)            = delete;
    ScriptSystemBeforeEvents()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0ScriptSystemBeforeEvents\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakLifetimeScope\@Scripting\@\@V?$not_null\@PEAVServerLevel\@\@\@gsl\@\@\@Z
     */
    MCAPI ScriptSystemBeforeEvents(class Scripting::WeakLifetimeScope const&, class gsl::not_null<class ServerLevel*>);
    /**
     * @symbol ??0ScriptSystemBeforeEvents\@ScriptModuleMinecraft\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI ScriptSystemBeforeEvents(class ScriptModuleMinecraft::ScriptSystemBeforeEvents&&);
    /**
     * @symbol
     * ?onBeforeWatchdogTerminate\@ScriptSystemBeforeEvents\@ScriptModuleMinecraft\@\@QEAAXV?$WeakTypedObjectHandle\@UScriptWatchdogTerminateBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCAPI void onBeforeWatchdogTerminate(class Scripting::WeakTypedObjectHandle<
                                         struct ScriptModuleMinecraft::ScriptWatchdogTerminateBeforeEvent>);
    /**
     * @symbol ??4ScriptSystemBeforeEvents\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptSystemBeforeEvents&
    operator=(class ScriptModuleMinecraft::ScriptSystemBeforeEvents&&);
    /**
     * @symbol
     * ?registerHandler\@ScriptSystemBeforeEvents\@ScriptModuleMinecraft\@\@QEAAXU?$TypedObjectHandle\@VScriptSystemBeforeEvents\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCAPI void
        registerHandler(struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptSystemBeforeEvents>);
    /**
     * @symbol ??1ScriptSystemBeforeEvents\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptSystemBeforeEvents();
    /**
     * @symbol ?bind\@ScriptSystemBeforeEvents\@ScriptModuleMinecraft\@\@SAXAEAVModuleBindingBuilder\@Scripting\@\@\@Z
     */
    MCAPI static void bind(class Scripting::ModuleBindingBuilder&);
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
