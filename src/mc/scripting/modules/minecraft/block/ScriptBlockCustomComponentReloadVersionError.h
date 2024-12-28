#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Error.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentReloadVersionError : public ::Scripting::Error {
public:
    // prevent constructor by default
    ScriptBlockCustomComponentReloadVersionError& operator=(ScriptBlockCustomComponentReloadVersionError const&);
    ScriptBlockCustomComponentReloadVersionError(ScriptBlockCustomComponentReloadVersionError const&);
    ScriptBlockCustomComponentReloadVersionError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptBlockCustomComponentReloadVersionError();
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
