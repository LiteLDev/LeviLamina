#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentReloadVersionError {
public:
    // prevent constructor by default
    ScriptItemCustomComponentReloadVersionError& operator=(ScriptItemCustomComponentReloadVersionError const&);
    ScriptItemCustomComponentReloadVersionError(ScriptItemCustomComponentReloadVersionError const&);
    ScriptItemCustomComponentReloadVersionError();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptItemCustomComponentReloadVersionError@ScriptModuleMinecraft@@QEAA@AEBVHashedString@@@Z
    MCAPI explicit ScriptItemCustomComponentReloadVersionError(class HashedString const&);

    // symbol: ??1ScriptItemCustomComponentReloadVersionError@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptItemCustomComponentReloadVersionError();

    // symbol: ?bind@ScriptItemCustomComponentReloadVersionError@ScriptModuleMinecraft@@SA?AUErrorBinding@Scripting@@XZ
    MCAPI static struct Scripting::ErrorBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
