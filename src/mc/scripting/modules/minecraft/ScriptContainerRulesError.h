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

struct ScriptContainerRulesError : public ::Scripting::BaseError {
public:
    // ScriptContainerRulesError inner types define
    enum class Reason : int {
        OverWeightLimit   = 0,
        NotAllowedItem    = 1,
        BannedItem        = 2,
        NestedStorageItem = 3,
        ZeroWeightItem    = 4,
        Invalid           = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptContainerRulesError::Reason> mReason;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();

    MCAPI static ::Scripting::EnumBinding bindReasonEnum();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
