#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/items/components/ScriptItemComponent.h"

namespace ScriptModuleMinecraft {

class ScriptItemDurabilityComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptItemDurabilityComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<int> getCurrentDamage();

    MCAPI ::Scripting::Result_deprecated<int> getMaxDurability();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
