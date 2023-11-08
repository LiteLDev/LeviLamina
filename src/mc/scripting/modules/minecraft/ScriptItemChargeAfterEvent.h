#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptItemEvent.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace ScriptModuleMinecraft { class ScriptItemEvent; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
struct ItemChargeEvent;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemChargeAfterEvent : public ::ScriptModuleMinecraft::ScriptItemEvent {
public:
    // prevent constructor by default
    ScriptItemChargeAfterEvent& operator=(ScriptItemChargeAfterEvent const&);
    ScriptItemChargeAfterEvent(ScriptItemChargeAfterEvent const&);
    ScriptItemChargeAfterEvent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptItemChargeAfterEvent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptItemChargeAfterEvent() = default;

    // symbol:
    // ??0ScriptItemChargeAfterEvent@ScriptModuleMinecraft@@QEAA@V?$StrongTypedObjectHandle@VScriptItemStack@ScriptModuleMinecraft@@@Scripting@@AEBVPlayer@@AEBUItemChargeEvent@@AEBVWeakLifetimeScope@3@@Z
    MCAPI
    ScriptItemChargeAfterEvent(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>, class Player const&, struct ItemChargeEvent const&, class Scripting::WeakLifetimeScope const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
