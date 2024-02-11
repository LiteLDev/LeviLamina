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
    // vIndex: 0, symbol: __gen_??1ScriptRGB@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptRGB() = default;

    // vIndex: 1, symbol: ?isValid@ScriptRGB@ScriptModuleMinecraft@@UEBA_NXZ
    virtual bool isValid() const;

    // symbol: ?getColor@ScriptRGB@ScriptModuleMinecraft@@QEBAAEBVColor@mce@@XZ
    MCAPI class mce::Color const& getColor() const;

    // symbol:
    // ?bind@ScriptRGB@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@VScriptRGB@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<class ScriptModuleMinecraft::ScriptRGB> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
