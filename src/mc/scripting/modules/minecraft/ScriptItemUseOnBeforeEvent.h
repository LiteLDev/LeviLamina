#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptItemUseOnAfterEvent.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnAfterEvent; }
namespace Scripting { class WeakLifetimeScope; }
struct ItemUseOnEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemUseOnBeforeEvent : public ::ScriptModuleMinecraft::ScriptItemUseOnAfterEvent {
public:
    // prevent constructor by default
    ScriptItemUseOnBeforeEvent& operator=(ScriptItemUseOnBeforeEvent const&);
    ScriptItemUseOnBeforeEvent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptItemUseOnBeforeEvent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptItemUseOnBeforeEvent();

    // symbol: ??0ScriptItemUseOnBeforeEvent@ScriptModuleMinecraft@@QEAA@$$QEAU01@@Z
    MCAPI ScriptItemUseOnBeforeEvent(struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent&&);

    // symbol: ??0ScriptItemUseOnBeforeEvent@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptItemUseOnBeforeEvent(struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent const&);

    // symbol:
    // ??0ScriptItemUseOnBeforeEvent@ScriptModuleMinecraft@@QEAA@AEAUItemUseOnEvent@@V?$StrongTypedObjectHandle@VScriptItemStack@ScriptModuleMinecraft@@@Scripting@@PEAVPlayer@@AEBVWeakLifetimeScope@4@@Z
    MCAPI
    ScriptItemUseOnBeforeEvent(struct ItemUseOnEvent&, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>, class Player*, class Scripting::WeakLifetimeScope const&);

    // symbol: ??4ScriptItemUseOnBeforeEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent&&);

    // symbol:
    // ?bind@ScriptItemUseOnBeforeEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptItemUseOnBeforeEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent> bind();

    // symbol:
    // ?bindV010@ScriptItemUseOnBeforeEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptItemUseOnBeforeEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
