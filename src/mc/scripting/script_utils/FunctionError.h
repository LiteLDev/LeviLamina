#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

namespace ScriptUtils {

struct FunctionError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    FunctionError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FunctionError(::std::string_view functionName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view functionName);
    // NOLINTEND
};

} // namespace ScriptUtils
