#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptRGB {
public:
    // prevent constructor by default
    ScriptRGB& operator=(ScriptRGB const&);
    ScriptRGB(ScriptRGB const&);
    ScriptRGB();

public:
    // NOLINTBEGIN
    // symbol: ?getColor@ScriptRGB@ScriptModuleMinecraft@@QEBAAEBVColor@mce@@XZ
    MCAPI class mce::Color const& getColor() const;

    // symbol: ?isValid@ScriptRGB@ScriptModuleMinecraft@@QEAA_NXZ
    MCAPI bool isValid();

    // symbol:
    // ?bind@ScriptRGB@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@VScriptRGB@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<class ScriptModuleMinecraft::ScriptRGB> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
