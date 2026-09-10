#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptFogSettingsError : public ::Scripting::BaseError {
public:
    // ScriptFogSettingsError inner types define
    enum class Reason : uchar {
        ExceedsFogStackLimit = 0,
        InvalidFogIdentifier = 1,
    };

public:
    // prevent constructor by default
    ScriptFogSettingsError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptFogSettingsError(::ScriptModuleMinecraft::ScriptFogSettingsError::Reason reason);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptFogSettingsError::Reason reason);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
