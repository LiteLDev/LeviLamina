#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentReloadVersionError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    ScriptBlockCustomComponentReloadVersionError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptBlockCustomComponentReloadVersionError(::HashedString const& componentName);

    MCNAPI ~ScriptBlockCustomComponentReloadVersionError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::HashedString const& componentName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
