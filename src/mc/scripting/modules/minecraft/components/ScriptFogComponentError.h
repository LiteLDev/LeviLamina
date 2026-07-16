#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptFogComponentError : public ::Scripting::BaseError {
public:
    // ScriptFogComponentError inner types define
    enum class Reason : uchar {
        ExceedsFogStackLimit = 0,
        InvalidFogIdentifier = 1,
    };

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ScriptFogComponentError();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI explicit ScriptFogComponentError(::ScriptModuleMinecraft::ScriptFogComponentError::Reason reason);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptFogComponentError::Reason reason);
#endif
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
