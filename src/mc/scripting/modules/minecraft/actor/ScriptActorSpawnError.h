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
    MCNAPI explicit ScriptActorSpawnError(::ActorValidationError error);

    MCNAPI ~ScriptActorSpawnError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorValidationError error);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
