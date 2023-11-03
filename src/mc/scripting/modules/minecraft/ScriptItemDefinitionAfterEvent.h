#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptItemEvent.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace ScriptModuleMinecraft { class ScriptItemEvent; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
struct ItemDefinitionEventTriggeredEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemDefinitionAfterEvent : public ::ScriptModuleMinecraft::ScriptItemEvent {
public:
    // prevent constructor by default
    ScriptItemDefinitionAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1ScriptItemDefinitionAfterEvent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptItemDefinitionAfterEvent();

    // symbol: ??0ScriptItemDefinitionAfterEvent@ScriptModuleMinecraft@@QEAA@$$QEAU01@@Z
    MCAPI ScriptItemDefinitionAfterEvent(struct ScriptModuleMinecraft::ScriptItemDefinitionAfterEvent&&);

    // symbol: ??0ScriptItemDefinitionAfterEvent@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptItemDefinitionAfterEvent(struct ScriptModuleMinecraft::ScriptItemDefinitionAfterEvent const&);

    // symbol:
    // ??0ScriptItemDefinitionAfterEvent@ScriptModuleMinecraft@@QEAA@V?$StrongTypedObjectHandle@VScriptItemStack@ScriptModuleMinecraft@@@Scripting@@AEBUItemDefinitionEventTriggeredEvent@@@Z
    MCAPI
    ScriptItemDefinitionAfterEvent(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>, struct ItemDefinitionEventTriggeredEvent const&);

    // symbol:
    // ??0ScriptItemDefinitionAfterEvent@ScriptModuleMinecraft@@QEAA@V?$StrongTypedObjectHandle@VScriptItemStack@ScriptModuleMinecraft@@@Scripting@@AEBVPlayer@@AEBUItemDefinitionEventTriggeredEvent@@AEBVWeakLifetimeScope@3@@Z
    MCAPI
    ScriptItemDefinitionAfterEvent(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>, class Player const&, struct ItemDefinitionEventTriggeredEvent const&, class Scripting::WeakLifetimeScope const&);

    // symbol: ??4ScriptItemDefinitionAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemDefinitionAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemDefinitionAfterEvent&&);

    // symbol: ??4ScriptItemDefinitionAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemDefinitionAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemDefinitionAfterEvent const&);

    // symbol:
    // ?bind@ScriptItemDefinitionAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptItemDefinitionAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemDefinitionAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
