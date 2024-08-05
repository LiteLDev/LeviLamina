#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/external/scripting/EnumBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptEquipmentSlot {
public:
    // prevent constructor by default
    ScriptEquipmentSlot& operator=(ScriptEquipmentSlot const&);
    ScriptEquipmentSlot(ScriptEquipmentSlot const&);
    ScriptEquipmentSlot();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::Puv::Legacy::EquipmentSlot> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
