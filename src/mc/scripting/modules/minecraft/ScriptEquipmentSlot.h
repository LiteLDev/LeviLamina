#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/EnumBindingBuilder.h"

// auto generated forward declare list
// clang-format off
enum class EquipmentSlot;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEquipmentSlot {

public:
    // prevent constructor by default
    ScriptEquipmentSlot& operator=(ScriptEquipmentSlot const&) = delete;
    ScriptEquipmentSlot(ScriptEquipmentSlot const&)            = delete;
    ScriptEquipmentSlot()                                      = delete;

public:
    /**
     * @symbol
     * ?bind\@ScriptEquipmentSlot\@ScriptModuleMinecraft\@\@SA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4EquipmentSlot\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::EnumBindingBuilder<std::string, enum class EquipmentSlot> bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
