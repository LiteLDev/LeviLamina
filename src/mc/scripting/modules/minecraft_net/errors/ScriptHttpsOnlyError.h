#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptHttpsOnlyError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc443f1;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptHttpsOnlyError& operator=(ScriptHttpsOnlyError const&);
    ScriptHttpsOnlyError(ScriptHttpsOnlyError const&);
    ScriptHttpsOnlyError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptHttpsOnlyError(::std::string uri);

    MCNAPI ::std::string getUri() const;

    MCNAPI ~ScriptHttpsOnlyError();
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
