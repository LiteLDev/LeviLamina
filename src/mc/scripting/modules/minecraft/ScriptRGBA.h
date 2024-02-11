#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"
#include "mc/scripting/modules/minecraft/ScriptRGB.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptRGB; }
namespace mce { class Color; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptRGBA : public ::ScriptModuleMinecraft::ScriptRGB {
public:
    // prevent constructor by default
    ScriptRGBA& operator=(ScriptRGBA const&);
    ScriptRGBA(ScriptRGBA const&);
    ScriptRGBA();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptRGBA@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptRGBA() = default;

    // vIndex: 1, symbol: ?isValid@ScriptRGBA@ScriptModuleMinecraft@@UEBA_NXZ
    virtual bool isValid() const;

    // symbol: ??0ScriptRGBA@ScriptModuleMinecraft@@QEAA@AEBVColor@mce@@@Z
    MCAPI explicit ScriptRGBA(class mce::Color const&);

    // symbol:
    // ?bind@ScriptRGBA@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@VScriptRGBA@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<class ScriptModuleMinecraft::ScriptRGBA> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
