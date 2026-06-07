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

struct ScriptItemCustomComponentAlreadyRegisteredError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    ScriptItemCustomComponentAlreadyRegisteredError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptItemCustomComponentAlreadyRegisteredError(::HashedString const& componentName);
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
