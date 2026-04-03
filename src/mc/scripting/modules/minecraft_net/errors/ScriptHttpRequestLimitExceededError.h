#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptHttpRequestLimitExceededError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk85422e;
    ::ll::UntypedStorage<8, 8> mUnk1b69fc;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptHttpRequestLimitExceededError& operator=(ScriptHttpRequestLimitExceededError const&);
    ScriptHttpRequestLimitExceededError(ScriptHttpRequestLimitExceededError const&);
    ScriptHttpRequestLimitExceededError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptHttpRequestLimitExceededError();
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
