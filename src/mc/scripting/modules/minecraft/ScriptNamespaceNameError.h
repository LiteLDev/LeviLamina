#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Error.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EngineError; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptNamespaceNameError : public ::Scripting::Error {
public:
    // ScriptNamespaceNameError inner types define
    enum class Reason : int {
        Invalid             = 0,
        NoNamespace         = 1,
        DisallowedNamespace = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd02cad;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNamespaceNameError& operator=(ScriptNamespaceNameError const&);
    ScriptNamespaceNameError(ScriptNamespaceNameError const&);
    ScriptNamespaceNameError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptNamespaceNameError(
        ::std::string const&                                      name,
        ::ScriptModuleMinecraft::ScriptNamespaceNameError::Reason reason
    );

    MCAPI ~ScriptNamespaceNameError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();

    MCAPI static ::Scripting::EnumBinding bindReasonEnum();

    MCAPI static ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptNamespaceNameError, ::Scripting::EngineError>
    validate(::std::string const& name);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, ::ScriptModuleMinecraft::ScriptNamespaceNameError::Reason reason);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
