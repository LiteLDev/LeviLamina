#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/world/actor/PaletteColor.h"

namespace ScriptModuleMinecraft {

class ScriptPaletteColor {
public:
    // prevent constructor by default
    ScriptPaletteColor& operator=(ScriptPaletteColor const&);
    ScriptPaletteColor(ScriptPaletteColor const&);
    ScriptPaletteColor();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::EnumBindingBuilder<::PaletteColor, ::PaletteColor> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
