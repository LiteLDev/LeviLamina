#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/PaletteColor.h"
#include "mc/external/scripting/EnumBindingBuilder.h"

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
