#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

namespace ScriptModuleMinecraftNet {

class ScriptMalformedHttpRequestError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    ScriptMalformedHttpRequestError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptMalformedHttpRequestError(::std::string message);

    MCNAPI ~ScriptMalformedHttpRequestError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string message);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
