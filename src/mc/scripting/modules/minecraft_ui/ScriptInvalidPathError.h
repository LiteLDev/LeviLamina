#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

struct ScriptInvalidPathError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke08066;
    ::ll::UntypedStorage<8, 32> mUnkd66375;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInvalidPathError& operator=(ScriptInvalidPathError const&);
    ScriptInvalidPathError(ScriptInvalidPathError const&);
    ScriptInvalidPathError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptInvalidPathError(::std::string const& path, ::std::string const& message);

    MCNAPI ~ScriptInvalidPathError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& path, ::std::string const& message);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
