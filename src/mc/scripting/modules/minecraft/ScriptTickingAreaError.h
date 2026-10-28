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

struct ScriptTickingAreaError : public ::Scripting::BaseError {
public:
    // ScriptTickingAreaError inner types define
    enum class Reason : int {
        OverChunkLimit          = 0,
        UnknownIdentifier       = 1,
        SideLengthExceeded      = 2,
        IdentifierAlreadyExists = 3,
        Invalid                 = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptTickingAreaError::Reason> mReason;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();

    MCAPI static ::Scripting::EnumBinding bindReasonEnum();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
