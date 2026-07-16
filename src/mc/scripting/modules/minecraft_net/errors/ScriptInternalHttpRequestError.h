#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptInternalHttpRequestError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka5f057;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInternalHttpRequestError& operator=(ScriptInternalHttpRequestError const&);
    ScriptInternalHttpRequestError(ScriptInternalHttpRequestError const&);
    ScriptInternalHttpRequestError();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
