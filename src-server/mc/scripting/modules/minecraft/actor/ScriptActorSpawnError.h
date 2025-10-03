#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"
#include "mc/world/level/ActorValidationError.h"

namespace ScriptModuleMinecraft {

struct ScriptActorSpawnError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    ScriptActorSpawnError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptActorSpawnError(::ActorValidationError error);

    MCAPI ~ScriptActorSpawnError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorValidationError error);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
