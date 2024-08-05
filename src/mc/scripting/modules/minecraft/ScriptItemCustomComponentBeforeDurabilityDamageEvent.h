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
    MCAPI
    ScriptItemCustomComponentBeforeDurabilityDamageEvent(struct ScriptModuleMinecraft::
                                                             ScriptItemCustomComponentBeforeDurabilityDamageEvent const&);

    MCAPI struct ScriptModuleMinecraft::ScriptItemCustomComponentBeforeDurabilityDamageEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemCustomComponentBeforeDurabilityDamageEvent&&);

    MCAPI void setReturnValues(int&, class ItemStack&, class Actor&, class Mob&);

    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
