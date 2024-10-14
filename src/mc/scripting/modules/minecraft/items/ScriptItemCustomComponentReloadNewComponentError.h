#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
    MCAPI ~ScriptItemCustomComponentReloadNewComponentError();

    MCAPI static struct Scripting::ErrorBinding bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
