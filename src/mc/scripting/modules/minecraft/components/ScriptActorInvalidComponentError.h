#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorInvalidComponentError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    ScriptActorInvalidComponentError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptActorInvalidComponentError(::std::string_view entityComponentName);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view entityComponentName);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
