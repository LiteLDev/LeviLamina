#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCustomCommandError : public ::Scripting::BaseError {
public:
    // ScriptCustomCommandError inner types define
    enum class Reason : int {
        AlreadyRegistered     = 0,
        ParameterLimit        = 1,
        RegistryInvalid       = 2,
        RegistryReadOnly      = 3,
        NamespaceMismatch     = 4,
        EnumDependencyMissing = 5,
        UnexpectedEnumName    = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdc2807;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomCommandError& operator=(ScriptCustomCommandError const&);
    ScriptCustomCommandError(ScriptCustomCommandError const&);
    ScriptCustomCommandError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptCustomCommandError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();

    MCNAPI static ::Scripting::EnumBinding bindReasonEnum();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
