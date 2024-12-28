#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Error.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentReloadNewComponentError : public ::Scripting::Error {
public:
    // prevent constructor by default
    ScriptBlockCustomComponentReloadNewComponentError&
    operator=(ScriptBlockCustomComponentReloadNewComponentError const&);
    ScriptBlockCustomComponentReloadNewComponentError(ScriptBlockCustomComponentReloadNewComponentError const&);
    ScriptBlockCustomComponentReloadNewComponentError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptBlockCustomComponentReloadNewComponentError();
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
