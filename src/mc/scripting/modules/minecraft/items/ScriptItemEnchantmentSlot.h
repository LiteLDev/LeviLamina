#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/world/item/enchanting/Enchant.h"

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentSlot {
public:
    // prevent constructor by default
    ScriptItemEnchantmentSlot& operator=(ScriptItemEnchantmentSlot const&);
    ScriptItemEnchantmentSlot(ScriptItemEnchantmentSlot const&);
    ScriptItemEnchantmentSlot();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::EnumBindingBuilder<::std::string, ::Enchant::Slot> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
