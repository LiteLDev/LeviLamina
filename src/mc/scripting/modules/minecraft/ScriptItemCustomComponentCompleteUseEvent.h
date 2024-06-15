#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Closure.h"
#include "mc/external/scripting/ScriptItemCustomComponentConnectors.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class ItemStack;
class Level;
class Player;
namespace ScriptModuleMinecraft { struct IScriptItemCustomComponentClosures; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentCompleteUseEvent {
public:
    // prevent constructor by default
    ScriptItemCustomComponentCompleteUseEvent& operator=(ScriptItemCustomComponentCompleteUseEvent const&);
    ScriptItemCustomComponentCompleteUseEvent(ScriptItemCustomComponentCompleteUseEvent const&);
    ScriptItemCustomComponentCompleteUseEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptItemCustomComponentCompleteUseEvent@ScriptModuleMinecraft@@QEAA@AEAW4ItemUseMethod@@AEBVItemStack@@AEAV3@AEAVPlayer@@AEAVLevel@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI
    ScriptItemCustomComponentCompleteUseEvent(::ItemUseMethod&, class ItemStack const&, class ItemStack&, class Player&, class Level&, class Scripting::WeakLifetimeScope const&);

    // symbol: ??4ScriptItemCustomComponentCompleteUseEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemCustomComponentCompleteUseEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemCustomComponentCompleteUseEvent&&);

    // symbol: ?bind@ScriptItemCustomComponentCompleteUseEvent@ScriptModuleMinecraft@@SA?AUClassBinding@Scripting@@XZ
    MCAPI static struct Scripting::ClassBinding bind();

    // symbol:
    // ?getClosure@ScriptItemCustomComponentCompleteUseEvent@ScriptModuleMinecraft@@SA?AV?$optional@V?$Closure@$$A6AXV?$StrongTypedObjectHandle@UScriptItemCustomComponentCompleteUseEvent@ScriptModuleMinecraft@@@Scripting@@@Z$$V@Scripting@@@std@@AEBUIScriptItemCustomComponentClosures@2@@Z
    MCAPI static std::optional<
        class Scripting::Closure<void(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptItemCustomComponentCompleteUseEvent>)>>
    getClosure(struct ScriptModuleMinecraft::IScriptItemCustomComponentClosures const&);

    // symbol:
    // ?getConnectors@ScriptItemCustomComponentCompleteUseEvent@ScriptModuleMinecraft@@SA?AU?$ScriptItemCustomComponentConnectors@$$A6AXAEAW4ItemUseMethod@@AEBVItemStack@@AEAV2@AEAVPlayer@@AEAVLevel@@@Z$$V@@AEAVComponentItem@@@Z
    MCAPI static struct ScriptItemCustomComponentConnectors<
        void(::ItemUseMethod&, class ItemStack const&, class ItemStack&, class Player&, class Level&)>
    getConnectors(class ComponentItem&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
