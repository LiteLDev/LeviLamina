#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Closure.h"
#include "mc/external/scripting/ScriptItemCustomComponentConnectors.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class ItemStack;
class Player;
namespace ScriptModuleMinecraft { struct IScriptItemCustomComponentClosures; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentUseEvent {
public:
    // prevent constructor by default
    ScriptItemCustomComponentUseEvent& operator=(ScriptItemCustomComponentUseEvent const&);
    ScriptItemCustomComponentUseEvent(ScriptItemCustomComponentUseEvent const&);
    ScriptItemCustomComponentUseEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptItemCustomComponentUseEvent@ScriptModuleMinecraft@@QEAA@AEA_NAEAVItemStack@@AEAVPlayer@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI
    ScriptItemCustomComponentUseEvent(bool&, class ItemStack&, class Player&, class Scripting::WeakLifetimeScope const&);

    // symbol: ??4ScriptItemCustomComponentUseEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemCustomComponentUseEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemCustomComponentUseEvent&&);

    // symbol: ?bind@ScriptItemCustomComponentUseEvent@ScriptModuleMinecraft@@SA?AUClassBinding@Scripting@@XZ
    MCAPI static struct Scripting::ClassBinding bind();

    // symbol:
    // ?getClosure@ScriptItemCustomComponentUseEvent@ScriptModuleMinecraft@@SA?AV?$optional@V?$Closure@$$A6AXV?$StrongTypedObjectHandle@UScriptItemCustomComponentUseEvent@ScriptModuleMinecraft@@@Scripting@@@Z$$V@Scripting@@@std@@AEBUIScriptItemCustomComponentClosures@2@@Z
    MCAPI static std::optional<
        class Scripting::Closure<void(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptItemCustomComponentUseEvent>)>>
    getClosure(struct ScriptModuleMinecraft::IScriptItemCustomComponentClosures const&);

    // symbol:
    // ?getConnectors@ScriptItemCustomComponentUseEvent@ScriptModuleMinecraft@@SA?AU?$ScriptItemCustomComponentConnectors@$$A6AXAEA_NAEAVItemStack@@AEAVPlayer@@@Z$$V@@AEAVComponentItem@@@Z
    MCAPI static struct ScriptItemCustomComponentConnectors<void(bool&, class ItemStack&, class Player&)>
    getConnectors(class ComponentItem&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
