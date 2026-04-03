#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

namespace ScriptModuleServerAdmin {

class ScriptAllowListFileReloadError : public ::Scripting::BaseError {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptAllowListFileReloadError();

    MCNAPI ~ScriptAllowListFileReloadError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
