#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptRGBA {
public:
    // prevent constructor by default
    ScriptRGBA& operator=(ScriptRGBA const&);
    ScriptRGBA(ScriptRGBA const&);
    ScriptRGBA();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptRGBA@ScriptModuleMinecraft@@QEAA@AEBVColor@mce@@@Z
    MCAPI explicit ScriptRGBA(class mce::Color const&);

    // symbol: ?getColor@ScriptRGBA@ScriptModuleMinecraft@@QEBAAEBVColor@mce@@XZ
    MCAPI class mce::Color const& getColor() const;

    // symbol:
    // ?bind@ScriptRGBA@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@VScriptRGBA@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<class ScriptModuleMinecraft::ScriptRGBA> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
