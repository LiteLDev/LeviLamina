#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentAlreadyRegisteredError {
public:
    // prevent constructor by default
    ScriptItemCustomComponentAlreadyRegisteredError& operator=(ScriptItemCustomComponentAlreadyRegisteredError const&);
    ScriptItemCustomComponentAlreadyRegisteredError(ScriptItemCustomComponentAlreadyRegisteredError const&);
    ScriptItemCustomComponentAlreadyRegisteredError();

public:
    // NOLINTBEGIN
    MCAPI ~ScriptItemCustomComponentAlreadyRegisteredError();

    MCAPI static struct Scripting::ErrorBinding bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
