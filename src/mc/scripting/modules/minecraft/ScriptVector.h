#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptVector {
public:
    // prevent constructor by default
    ScriptVector& operator=(ScriptVector const&);
    ScriptVector(ScriptVector const&);
    ScriptVector();

public:
    // NOLINTBEGIN
    // symbol: ?normalized@ScriptVector@ScriptModuleMinecraft@@QEBA?AV12@XZ
    MCAPI class ScriptModuleMinecraft::ScriptVector normalized() const;

    // symbol: ??8ScriptVector@ScriptModuleMinecraft@@QEBA_NAEBV01@@Z
    MCAPI bool operator==(class ScriptModuleMinecraft::ScriptVector const& rhs) const;

    // symbol:
    // ?bind@ScriptVector@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptVector@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptVector> bind();

    // symbol:
    // ?divide@ScriptVector@ScriptModuleMinecraft@@SA?AV?$Result@VScriptVector@ScriptModuleMinecraft@@$$V@Scripting@@AEBVVec3@@AEBV?$variant@MVVec3@@@std@@@Z
    MCAPI static class Scripting::Result<class ScriptModuleMinecraft::ScriptVector>
    divide(class Vec3 const& a, std::variant<float, class Vec3> const& b);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
