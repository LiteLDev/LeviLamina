#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCompleteUseEvent {
public:
    // prevent constructor by default
    ScriptItemCompleteUseEvent(ScriptItemCompleteUseEvent const&);
    ScriptItemCompleteUseEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptItemCompleteUseEvent@ScriptModuleMinecraft@@QEAA@V?$StrongTypedObjectHandle@VScriptItemStack@ScriptModuleMinecraft@@@Scripting@@AEBVPlayer@@AEBVWeakLifetimeScope@3@@Z
    MCAPI
    ScriptItemCompleteUseEvent(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>, class Player const&, class Scripting::WeakLifetimeScope const&);

    // symbol: ??4ScriptItemCompleteUseEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemCompleteUseEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemCompleteUseEvent&&);

    // symbol: ??4ScriptItemCompleteUseEvent@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemCompleteUseEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemCompleteUseEvent const&);

    // symbol:
    // ?bind@ScriptItemCompleteUseEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptItemCompleteUseEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemCompleteUseEvent> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
