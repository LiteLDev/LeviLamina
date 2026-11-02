#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"
#include "mc/world/level/ActorValidationError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorSpawnError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    ScriptActorSpawnError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptActorSpawnError(::ActorValidationError error);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorValidationError error);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
