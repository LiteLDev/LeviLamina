#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

namespace ScriptUtils {

struct GetPropertyError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    GetPropertyError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GetPropertyError(::std::string_view propertyName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view propertyName);
    // NOLINTEND
};

} // namespace ScriptUtils
