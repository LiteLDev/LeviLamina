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
    // symbol:
    // ?bind@ScriptPaletteColor@ScriptModuleMinecraft@@SA?AV?$EnumBindingBuilder@W4PaletteColor@@W41@@Scripting@@XZ
    MCAPI static class Scripting::EnumBindingBuilder<::PaletteColor, ::PaletteColor> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
