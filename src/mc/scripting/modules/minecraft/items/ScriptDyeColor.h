#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/world/item/ItemColor.h"

namespace ScriptModuleMinecraft {

class ScriptDyeColor {
public:
    // prevent constructor by default
    ScriptDyeColor& operator=(ScriptDyeColor const&);
    ScriptDyeColor(ScriptDyeColor const&);
    ScriptDyeColor();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::EnumBindingBuilder<::std::string, ::ItemColor> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
