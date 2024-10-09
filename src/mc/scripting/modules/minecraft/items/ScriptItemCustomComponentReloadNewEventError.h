#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
    MCAPI ~ScriptItemCustomComponentReloadNewEventError();

    MCAPI static struct Scripting::ErrorBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
