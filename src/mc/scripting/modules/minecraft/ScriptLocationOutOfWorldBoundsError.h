#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ErrorBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptLocationOutOfWorldBoundsError {
public:
    // prevent constructor by default
    ScriptLocationOutOfWorldBoundsError& operator=(ScriptLocationOutOfWorldBoundsError const&);
    ScriptLocationOutOfWorldBoundsError(ScriptLocationOutOfWorldBoundsError const&);
    ScriptLocationOutOfWorldBoundsError();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptLocationOutOfWorldBoundsError@ScriptModuleMinecraft@@QEAA@AEBVVec3@@@Z
    MCAPI explicit ScriptLocationOutOfWorldBoundsError(class Vec3 const&);

    // symbol:
    // ??0ScriptLocationOutOfWorldBoundsError@ScriptModuleMinecraft@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@@Z
    MCAPI ScriptLocationOutOfWorldBoundsError(std::string const&, class Vec3 const&);

    // symbol: ??1ScriptLocationOutOfWorldBoundsError@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptLocationOutOfWorldBoundsError();

    // symbol:
    // ?bind@ScriptLocationOutOfWorldBoundsError@ScriptModuleMinecraft@@SA?AV?$ErrorBindingBuilder@UScriptLocationOutOfWorldBoundsError@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ErrorBindingBuilder<struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
