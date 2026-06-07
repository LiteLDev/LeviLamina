#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptPrefabErrorTemplateNotFound : public ::Scripting::BaseError {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPrefabErrorTemplateNotFound();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
