#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptWebSocketLimitExceededError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkacc5ff;
    ::ll::UntypedStorage<8, 8> mUnkf0dd3c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWebSocketLimitExceededError& operator=(ScriptWebSocketLimitExceededError const&);
    ScriptWebSocketLimitExceededError(ScriptWebSocketLimitExceededError const&);
    ScriptWebSocketLimitExceededError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWebSocketLimitExceededError(uint64 maxConcurrentConnections, uint64 connectedSockets);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint64 maxConcurrentConnections, uint64 connectedSockets);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
