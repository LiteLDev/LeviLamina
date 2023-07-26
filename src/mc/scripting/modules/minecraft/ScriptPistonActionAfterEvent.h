#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
struct PistonActionEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPistonActionAfterEvent {

public:
    // prevent constructor by default
    ScriptPistonActionAfterEvent(ScriptPistonActionAfterEvent const&) = delete;
    ScriptPistonActionAfterEvent()                                    = delete;

public:
    /**
     * @symbol
     * ??0ScriptPistonActionAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBUPistonActionEvent\@\@AEBVWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI
    ScriptPistonActionAfterEvent(struct PistonActionEvent const&, class Scripting::WeakLifetimeScope const&); // NOLINT
    /**
     * @symbol ??4ScriptPistonActionAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptPistonActionAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPistonActionAfterEvent const&); // NOLINT
    /**
     * @symbol ??4ScriptPistonActionAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptPistonActionAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPistonActionAfterEvent&&); // NOLINT
    /**
     * @symbol ??1ScriptPistonActionAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPistonActionAfterEvent(); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptPistonActionAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptPistonActionAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPistonActionAfterEvent>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
