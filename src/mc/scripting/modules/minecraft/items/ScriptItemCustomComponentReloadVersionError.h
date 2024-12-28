#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Error.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentReloadVersionError : public ::Scripting::Error {
public:
    // prevent constructor by default
    ScriptItemCustomComponentReloadVersionError& operator=(ScriptItemCustomComponentReloadVersionError const&);
    ScriptItemCustomComponentReloadVersionError(ScriptItemCustomComponentReloadVersionError const&);
    ScriptItemCustomComponentReloadVersionError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptItemCustomComponentReloadVersionError(::HashedString const& componentName);

    MCAPI ~ScriptItemCustomComponentReloadVersionError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::HashedString const& componentName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
