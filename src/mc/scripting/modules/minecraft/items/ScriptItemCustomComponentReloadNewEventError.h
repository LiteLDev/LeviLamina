#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Error.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentReloadNewEventError : public ::Scripting::Error {
public:
    // prevent constructor by default
    ScriptItemCustomComponentReloadNewEventError& operator=(ScriptItemCustomComponentReloadNewEventError const&);
    ScriptItemCustomComponentReloadNewEventError(ScriptItemCustomComponentReloadNewEventError const&);
    ScriptItemCustomComponentReloadNewEventError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptItemCustomComponentReloadNewEventError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
