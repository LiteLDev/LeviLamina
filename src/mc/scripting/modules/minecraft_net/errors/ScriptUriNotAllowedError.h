#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptUriNotAllowedError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkfb8850;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptUriNotAllowedError& operator=(ScriptUriNotAllowedError const&);
    ScriptUriNotAllowedError(ScriptUriNotAllowedError const&);
    ScriptUriNotAllowedError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptUriNotAllowedError(::std::string uri);

    MCNAPI ~ScriptUriNotAllowedError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string uri);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
