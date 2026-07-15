#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetErrorInvalidObject : public ::Scripting::BaseError {
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ScriptWidgetErrorInvalidObject();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bindError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
    // NOLINTEND
};

} // namespace Editor::ScriptModule
