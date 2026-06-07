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

struct ScriptItemCustomComponentReloadVersionError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    ScriptItemCustomComponentReloadVersionError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptItemCustomComponentReloadVersionError(::HashedString const& componentName);
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
};

} // namespace ScriptModuleMinecraft
