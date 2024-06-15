#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentNameError {
public:
    // prevent constructor by default
    ScriptItemCustomComponentNameError& operator=(ScriptItemCustomComponentNameError const&);
    ScriptItemCustomComponentNameError(ScriptItemCustomComponentNameError const&);
    ScriptItemCustomComponentNameError();

public:
    // NOLINTBEGIN
    // symbol: ??1ScriptItemCustomComponentNameError@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptItemCustomComponentNameError();

    // symbol: ?bind@ScriptItemCustomComponentNameError@ScriptModuleMinecraft@@SA?AUErrorBinding@Scripting@@XZ
    MCAPI static struct Scripting::ErrorBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
