#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/StatusCode.h"
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptWebSocketConnectionFailedError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk1f4664;
    ::ll::UntypedStorage<8, 32> mUnk9923cf;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWebSocketConnectionFailedError& operator=(ScriptWebSocketConnectionFailedError const&);
    ScriptWebSocketConnectionFailedError(ScriptWebSocketConnectionFailedError const&);
    ScriptWebSocketConnectionFailedError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWebSocketConnectionFailedError(::std::string uri, ::Bedrock::Http::StatusCode errorCode);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string uri, ::Bedrock::Http::StatusCode errorCode);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
