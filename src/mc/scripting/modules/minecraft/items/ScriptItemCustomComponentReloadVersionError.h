#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
    MCAPI ~ScriptItemCustomComponentReloadVersionError();

    MCAPI static struct Scripting::ErrorBinding bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
