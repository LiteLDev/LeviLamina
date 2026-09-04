#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

struct ScriptInvalidPathError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkef83ea;
    ::ll::UntypedStorage<8, 32> mUnk58afb9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInvalidPathError& operator=(ScriptInvalidPathError const&);
    ScriptInvalidPathError(ScriptInvalidPathError const&);
    ScriptInvalidPathError();
};
