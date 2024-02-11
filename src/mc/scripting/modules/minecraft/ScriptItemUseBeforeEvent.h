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
struct ItemUseEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemUseBeforeEvent {
public:
    // prevent constructor by default
    ScriptItemUseBeforeEvent& operator=(ScriptItemUseBeforeEvent const&);
    ScriptItemUseBeforeEvent(ScriptItemUseBeforeEvent const&);
    ScriptItemUseBeforeEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptItemUseBeforeEvent@ScriptModuleMinecraft@@QEAA@V?$StrongTypedObjectHandle@VScriptItemStack@ScriptModuleMinecraft@@@Scripting@@AEBVPlayer@@AEAUItemUseEvent@@AEBVWeakLifetimeScope@3@@Z
    MCAPI
    ScriptItemUseBeforeEvent(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>, class Player const&, struct ItemUseEvent&, class Scripting::WeakLifetimeScope const&);

    // symbol: ??4ScriptItemUseBeforeEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemUseBeforeEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemUseBeforeEvent&&);

    // symbol:
    // ?bind@ScriptItemUseBeforeEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptItemUseBeforeEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemUseBeforeEvent> bind();

    // symbol:
    // ?bindV010@ScriptItemUseBeforeEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptItemUseBeforeEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemUseBeforeEvent>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
