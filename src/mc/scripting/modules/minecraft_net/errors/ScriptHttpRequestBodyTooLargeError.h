#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptHttpRequestBodyTooLargeError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka4462d;
    ::ll::UntypedStorage<4, 4> mUnkbd1a3d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptHttpRequestBodyTooLargeError& operator=(ScriptHttpRequestBodyTooLargeError const&);
    ScriptHttpRequestBodyTooLargeError(ScriptHttpRequestBodyTooLargeError const&);
    ScriptHttpRequestBodyTooLargeError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptHttpRequestBodyTooLargeError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
