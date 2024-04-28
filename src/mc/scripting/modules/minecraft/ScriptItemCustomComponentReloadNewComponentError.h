#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentReloadNewComponentError {
public:
    // prevent constructor by default
    ScriptItemCustomComponentReloadNewComponentError&
    operator=(ScriptItemCustomComponentReloadNewComponentError const&);
    ScriptItemCustomComponentReloadNewComponentError(ScriptItemCustomComponentReloadNewComponentError const&);
    ScriptItemCustomComponentReloadNewComponentError();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptItemCustomComponentReloadNewComponentError@ScriptModuleMinecraft@@QEAA@AEBVHashedString@@@Z
    MCAPI explicit ScriptItemCustomComponentReloadNewComponentError(class HashedString const&);

    // symbol: ??1ScriptItemCustomComponentReloadNewComponentError@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptItemCustomComponentReloadNewComponentError();

    // symbol:
    // ?bind@ScriptItemCustomComponentReloadNewComponentError@ScriptModuleMinecraft@@SA?AUErrorBinding@Scripting@@XZ
    MCAPI static struct Scripting::ErrorBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
