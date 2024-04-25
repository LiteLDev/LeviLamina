#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentReloadNewEventError {
public:
    // prevent constructor by default
    ScriptItemCustomComponentReloadNewEventError& operator=(ScriptItemCustomComponentReloadNewEventError const&);
    ScriptItemCustomComponentReloadNewEventError(ScriptItemCustomComponentReloadNewEventError const&);
    ScriptItemCustomComponentReloadNewEventError();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptItemCustomComponentReloadNewEventError@ScriptModuleMinecraft@@QEAA@AEBVHashedString@@@Z
    MCAPI explicit ScriptItemCustomComponentReloadNewEventError(class HashedString const&);

    // symbol: ??1ScriptItemCustomComponentReloadNewEventError@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptItemCustomComponentReloadNewEventError();

    // symbol: ?bind@ScriptItemCustomComponentReloadNewEventError@ScriptModuleMinecraft@@SA?AUErrorBinding@Scripting@@XZ
    MCAPI static struct Scripting::ErrorBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
