#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/EnumBindingBuilder.h"
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
    // symbol:
    // ?bind@ScriptItemEnchantmentSlot@ScriptModuleMinecraft@@SA?AV?$EnumBindingBuilder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Slot@Enchant@@@Scripting@@XZ
    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::Enchant::Slot> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
