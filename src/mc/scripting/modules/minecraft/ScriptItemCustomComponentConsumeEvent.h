#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Closure.h"
#include "mc/external/scripting/ScriptItemCustomComponentConnectors.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ComponentItem;
class ItemStack;
namespace ScriptModuleMinecraft { struct IScriptItemCustomComponentClosures; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentConsumeEvent {
public:
    // prevent constructor by default
    ScriptItemCustomComponentConsumeEvent& operator=(ScriptItemCustomComponentConsumeEvent const&);
    ScriptItemCustomComponentConsumeEvent(ScriptItemCustomComponentConsumeEvent const&);
    ScriptItemCustomComponentConsumeEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptItemCustomComponentConsumeEvent@ScriptModuleMinecraft@@QEAA@AEBVItemStack@@AEAV2@AEAVActor@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI
    ScriptItemCustomComponentConsumeEvent(class ItemStack const&, class ItemStack&, class Actor&, class Scripting::WeakLifetimeScope const&);

    // symbol: ??4ScriptItemCustomComponentConsumeEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemCustomComponentConsumeEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemCustomComponentConsumeEvent&&);

    // symbol: ?bind@ScriptItemCustomComponentConsumeEvent@ScriptModuleMinecraft@@SA?AUClassBinding@Scripting@@XZ
    MCAPI static struct Scripting::ClassBinding bind();

    // symbol:
    // ?getClosure@ScriptItemCustomComponentConsumeEvent@ScriptModuleMinecraft@@SA?AV?$optional@V?$Closure@$$A6AXV?$StrongTypedObjectHandle@UScriptItemCustomComponentConsumeEvent@ScriptModuleMinecraft@@@Scripting@@@Z$$V@Scripting@@@std@@AEBUIScriptItemCustomComponentClosures@2@@Z
    MCAPI static std::optional<
        class Scripting::Closure<void(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptItemCustomComponentConsumeEvent>)>>
    getClosure(struct ScriptModuleMinecraft::IScriptItemCustomComponentClosures const&);

    // symbol:
    // ?getConnectors@ScriptItemCustomComponentConsumeEvent@ScriptModuleMinecraft@@SA?AU?$ScriptItemCustomComponentConnectors@$$A6AXAEBVItemStack@@AEAV1@AEAVActor@@@Z$$V@@AEAVComponentItem@@@Z
    MCAPI static struct ScriptItemCustomComponentConnectors<
        void(class ItemStack const&, class ItemStack&, class Actor&)>
    getConnectors(class ComponentItem&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
