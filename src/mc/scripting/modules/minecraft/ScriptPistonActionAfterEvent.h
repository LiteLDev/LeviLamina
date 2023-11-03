#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BlockSourceHandle;
namespace ScriptModuleMinecraft { class ScriptBlockPistonComponent; }
namespace Scripting { class WeakLifetimeScope; }
struct PistonActionEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPistonActionAfterEvent {
public:
    // prevent constructor by default
    ScriptPistonActionAfterEvent(ScriptPistonActionAfterEvent const&);
    ScriptPistonActionAfterEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptPistonActionAfterEvent@ScriptModuleMinecraft@@QEAA@AEBUPistonActionEvent@@AEAVBlockSourceHandle@@AEAV?$StrongTypedObjectHandle@VScriptBlockPistonComponent@ScriptModuleMinecraft@@@Scripting@@AEBVWeakLifetimeScope@5@@Z
    MCAPI
    ScriptPistonActionAfterEvent(struct PistonActionEvent const&, class BlockSourceHandle&, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPistonComponent>&, class Scripting::WeakLifetimeScope const&);

    // symbol: ??4ScriptPistonActionAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptPistonActionAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPistonActionAfterEvent&&);

    // symbol: ??4ScriptPistonActionAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptPistonActionAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPistonActionAfterEvent const&);

    // symbol:
    // ?bind@ScriptPistonActionAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptPistonActionAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPistonActionAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
