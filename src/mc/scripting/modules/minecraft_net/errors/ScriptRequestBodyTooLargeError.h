#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptRequestBodyTooLargeError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk1f4563;
    ::ll::UntypedStorage<4, 4> mUnkdca007;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptRequestBodyTooLargeError& operator=(ScriptRequestBodyTooLargeError const&);
    ScriptRequestBodyTooLargeError(ScriptRequestBodyTooLargeError const&);
    ScriptRequestBodyTooLargeError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptRequestBodyTooLargeError(uint providedBytes, uint maxBytes);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint providedBytes, uint maxBytes);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
