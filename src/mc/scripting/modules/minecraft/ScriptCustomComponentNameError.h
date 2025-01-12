#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Error.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Scripting { struct EngineError; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCustomComponentNameError : public ::Scripting::Error {
public:
    // ScriptCustomComponentNameError inner types define
    enum class Reason : int {
        Invalid             = 0,
        NoNamespace         = 1,
        DisallowedNamespace = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc41a25;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomComponentNameError& operator=(ScriptCustomComponentNameError const&);
    ScriptCustomComponentNameError(ScriptCustomComponentNameError const&);
    ScriptCustomComponentNameError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptCustomComponentNameError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();

    MCAPI static ::Scripting::EnumBinding bindReasonEnum();

    MCAPI static ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptCustomComponentNameError, ::Scripting::EngineError>
        validate(::HashedString const& componentName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
