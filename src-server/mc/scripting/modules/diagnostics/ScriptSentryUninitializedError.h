#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

namespace ScriptModuleDiagnostics {

struct ScriptSentryUninitializedError : public ::Scripting::BaseError {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptSentryUninitializedError();

    MCNAPI ~ScriptSentryUninitializedError();
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

} // namespace ScriptModuleDiagnostics
