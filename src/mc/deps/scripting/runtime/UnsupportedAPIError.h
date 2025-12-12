#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

namespace Scripting {

struct UnsupportedAPIError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    UnsupportedAPIError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit UnsupportedAPIError(::std::string const& msg);

    MCNAPI ~UnsupportedAPIError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& msg);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
