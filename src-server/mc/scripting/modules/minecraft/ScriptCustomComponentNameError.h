#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Scripting { struct EngineError; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCustomComponentNameError : public ::Scripting::BaseError {
public:
    // ScriptCustomComponentNameError inner types define
    enum class Reason : int {
        Invalid = 0,
        NoNamespace = 1,
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
    MCNAPI ~ScriptCustomComponentNameError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();

    MCNAPI static ::Scripting::EnumBinding bindReasonEnum();

    MCNAPI static ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptCustomComponentNameError, ::Scripting::EngineError> validate(::HashedString const& componentName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
