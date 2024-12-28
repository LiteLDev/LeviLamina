#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Error.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptActorData; }
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptInvalidActorError : public ::Scripting::Error {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkcfcc8a;
    ::ll::UntypedStorage<8, 32> mUnk4854f1;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInvalidActorError& operator=(ScriptInvalidActorError const&);
    ScriptInvalidActorError(ScriptInvalidActorError const&);
    ScriptInvalidActorError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptInvalidActorError(
        ::ScriptModuleMinecraft::ScriptActorData const& invalidActorData,
        ::std::string_view                              functionName
    );

    MCAPI ~ScriptInvalidActorError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::ScriptModuleMinecraft::ScriptActorData const& invalidActorData, ::std::string_view functionName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
