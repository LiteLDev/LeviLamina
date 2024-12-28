#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/EquipmentSlot.h"
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptEquipmentSlot {
public:
    // prevent constructor by default
    ScriptEquipmentSlot& operator=(ScriptEquipmentSlot const&);
    ScriptEquipmentSlot(ScriptEquipmentSlot const&);
    ScriptEquipmentSlot();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::EnumBindingBuilder<::std::string, ::SharedTypes::Legacy::EquipmentSlot> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
