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

struct ScriptBookError : public ::Scripting::BaseError {
public:
    // ScriptBookError inner types define
    enum class Reason : uchar {
        ExceedsMaxPageLength = 0,
        ExceedsMaxPages      = 1,
        ExceedsTitleLength   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ScriptModuleMinecraft::ScriptBookError::Reason> mErrorReason;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBookError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBookError(::std::string_view name, ::ScriptModuleMinecraft::ScriptBookError::Reason reason);

    MCAPI ~ScriptBookError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();

    MCAPI static ::Scripting::EnumBinding bindReasonEnum();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string_view name, ::ScriptModuleMinecraft::ScriptBookError::Reason reason);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
