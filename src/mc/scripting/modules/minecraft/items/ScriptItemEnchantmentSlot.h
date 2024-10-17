#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/world/item/enchanting/Enchant.h"

namespace ScriptModuleMinecraft {

class ScriptItemEnchantmentSlot {
public:
    // prevent constructor by default
    ScriptItemEnchantmentSlot& operator=(ScriptItemEnchantmentSlot const&);
    ScriptItemEnchantmentSlot(ScriptItemEnchantmentSlot const&);
    ScriptItemEnchantmentSlot();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::Enchant::Slot> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
