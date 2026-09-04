#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

namespace Scripting {

struct UnsupportedAPIError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    UnsupportedAPIError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit UnsupportedAPIError(::std::string const& msg);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& msg);
    // NOLINTEND
};

} // namespace Scripting
