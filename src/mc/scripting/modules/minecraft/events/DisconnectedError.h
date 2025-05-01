#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Error.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct DisconnectedError : public ::Scripting::Error {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc5ec98;
    // NOLINTEND

public:
    // prevent constructor by default
    DisconnectedError& operator=(DisconnectedError const&);
    DisconnectedError(DisconnectedError const&);
    DisconnectedError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DisconnectedError();
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

} // namespace ScriptModuleMinecraft
