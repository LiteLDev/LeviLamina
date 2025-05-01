#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Error.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptInternalHttpRequestError : public ::Scripting::Error {
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
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptInternalHttpRequestError(::std::error_code const& error);

    MCNAPI ::std::string getMessage() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::error_code const& error);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
