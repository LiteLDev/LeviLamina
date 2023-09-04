#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptItemDefinitionAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptItemDefinitionAfterEvent; }
namespace Scripting { class WeakLifetimeScope; }
struct ItemDefinitionEventTriggeredEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemDefinitionBeforeEvent : public ::ScriptModuleMinecraft::ScriptItemDefinitionAfterEvent {
public:
    // prevent constructor by default
    ScriptItemDefinitionBeforeEvent& operator=(ScriptItemDefinitionBeforeEvent const&) = delete;
    ScriptItemDefinitionBeforeEvent()                                                  = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1ScriptItemDefinitionBeforeEvent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptItemDefinitionBeforeEvent();

    // symbol:
    // ??0ScriptItemDefinitionBeforeEvent@ScriptModuleMinecraft@@QEAA@V?$StrongTypedObjectHandle@VScriptItemStack@ScriptModuleMinecraft@@@Scripting@@AEAUItemDefinitionEventTriggeredEvent@@AEBVWeakLifetimeScope@3@@Z
    MCAPI
    ScriptItemDefinitionBeforeEvent(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>, struct ItemDefinitionEventTriggeredEvent&, class Scripting::WeakLifetimeScope const&);

    // symbol: ??0ScriptItemDefinitionBeforeEvent@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptItemDefinitionBeforeEvent(struct ScriptModuleMinecraft::ScriptItemDefinitionBeforeEvent const&);

    // symbol: ??0ScriptItemDefinitionBeforeEvent@ScriptModuleMinecraft@@QEAA@$$QEAU01@@Z
    MCAPI ScriptItemDefinitionBeforeEvent(struct ScriptModuleMinecraft::ScriptItemDefinitionBeforeEvent&&);

    // symbol: ??4ScriptItemDefinitionBeforeEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemDefinitionBeforeEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemDefinitionBeforeEvent&&);

    // symbol:
    // ?bind@ScriptItemDefinitionBeforeEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptItemDefinitionBeforeEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemDefinitionBeforeEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
