#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptInternalWebSocketError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk90fcdc;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInternalWebSocketError& operator=(ScriptInternalWebSocketError const&);
    ScriptInternalWebSocketError(ScriptInternalWebSocketError const&);
    ScriptInternalWebSocketError();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
