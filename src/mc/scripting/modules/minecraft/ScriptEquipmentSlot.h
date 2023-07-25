#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/EnumBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptEquipmentSlot {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTEQUIPMENTSLOT
public:
    ScriptEquipmentSlot& operator=(ScriptEquipmentSlot const&) = delete;
    ScriptEquipmentSlot(ScriptEquipmentSlot const&)            = delete;
    ScriptEquipmentSlot()                                      = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@ScriptEquipmentSlot\@ScriptModuleMinecraft\@\@SA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4EquipmentSlot\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::EnumBindingBuilder<std::string, enum class EquipmentSlot> bind();
};

}; // namespace ScriptModuleMinecraft
