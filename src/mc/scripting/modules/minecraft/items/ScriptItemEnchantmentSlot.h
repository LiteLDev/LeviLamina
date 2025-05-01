#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/world/item/enchanting/Enchant.h"

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentSlot {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBindingBuilder<::std::string, ::Enchant::Slot> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
