#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
class Mob;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentBeforeDurabilityDamageEvent {
public:
    // prevent constructor by default
    ScriptItemCustomComponentBeforeDurabilityDamageEvent&
    operator=(ScriptItemCustomComponentBeforeDurabilityDamageEvent const&);
    ScriptItemCustomComponentBeforeDurabilityDamageEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptItemCustomComponentBeforeDurabilityDamageEvent@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI
    ScriptItemCustomComponentBeforeDurabilityDamageEvent(struct ScriptModuleMinecraft::
                                                             ScriptItemCustomComponentBeforeDurabilityDamageEvent const&);

    // symbol: ??4ScriptItemCustomComponentBeforeDurabilityDamageEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemCustomComponentBeforeDurabilityDamageEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemCustomComponentBeforeDurabilityDamageEvent&&);

    // symbol:
    // ?setReturnValues@ScriptItemCustomComponentBeforeDurabilityDamageEvent@ScriptModuleMinecraft@@QEAAXAEAHAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    MCAPI void setReturnValues(int&, class ItemStack&, class Actor&, class Mob&);

    // symbol:
    // ?bind@ScriptItemCustomComponentBeforeDurabilityDamageEvent@ScriptModuleMinecraft@@SA?AUClassBinding@Scripting@@XZ
    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
