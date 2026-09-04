#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

namespace ScriptUtils {

struct SetPropertyError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    SetPropertyError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SetPropertyError(::std::string_view propertyName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view propertyName);
    // NOLINTEND
};

} // namespace ScriptUtils
