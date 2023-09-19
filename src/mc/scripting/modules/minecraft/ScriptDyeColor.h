#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/EnumBindingBuilder.h"
#include "mc/world/item/components/ItemColor.h"

namespace ScriptModuleMinecraft {

class ScriptDyeColor {
public:
    // prevent constructor by default
    ScriptDyeColor& operator=(ScriptDyeColor const&);
    ScriptDyeColor(ScriptDyeColor const&);
    ScriptDyeColor();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptDyeColor@ScriptModuleMinecraft@@SA?AV?$EnumBindingBuilder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ItemColor@@@Scripting@@XZ
    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::ItemColor> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
