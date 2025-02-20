#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/deps/shared_types/legacy/item/EquipmentSlot.h"

namespace ScriptModuleMinecraft {

struct ScriptEquipmentSlot {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::EnumBindingBuilder<::std::string, ::SharedTypes::Legacy::EquipmentSlot> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
