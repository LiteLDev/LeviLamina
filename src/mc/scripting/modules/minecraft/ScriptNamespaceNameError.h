#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

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
    MCNAPI ScriptNamespaceNameError(
        ::std::string const&                                      name,
        ::std::string const&                                      message,
        ::ScriptModuleMinecraft::ScriptNamespaceNameError::Reason reason
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();

    MCNAPI static ::Scripting::EnumBinding bindReasonEnum();

    MCNAPI static ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptNamespaceNameError, ::Scripting::EngineError>
    validate(::std::string const& name, bool allowMinecraftNamespace, bool allowMultipleNamespaces);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string const&                                      name,
        ::std::string const&                                      message,
        ::ScriptModuleMinecraft::ScriptNamespaceNameError::Reason reason
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
