#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"
#include "mc/scripting/modules/minecraft/ErrorMemberType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWorldClockInvalidTimeMarkerError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    ScriptWorldClockInvalidTimeMarkerError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWorldClockInvalidTimeMarkerError(
        ::ScriptModuleMinecraft::ErrorMemberType memberType,
        ::std::string_view                       propertyName
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ErrorMemberType memberType, ::std::string_view propertyName);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
