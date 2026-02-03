#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EngineError; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptNamespaceNameError : public ::Scripting::BaseError {
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
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptNamespaceNameError::Reason> mReason;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNamespaceNameError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptNamespaceNameError(
        ::std::string const&                                      name,
        ::std::string const&                                      message,
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
    validate(::std::string const& name, bool allowMinecraftNamespace, bool allowMultipleNamespaces);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                                      name,
        ::std::string const&                                      message,
        ::ScriptModuleMinecraft::ScriptNamespaceNameError::Reason reason
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
