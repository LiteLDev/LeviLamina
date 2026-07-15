#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

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
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();

    MCAPI static ::Scripting::EnumBinding bindReasonEnum();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
