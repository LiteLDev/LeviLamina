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
    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::ItemColor> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
