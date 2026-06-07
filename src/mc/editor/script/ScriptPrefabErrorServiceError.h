#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptPrefabErrorServiceError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    ScriptPrefabErrorServiceError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptPrefabErrorServiceError(::std::string const& message);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& message);
    // NOLINTEND
};

} // namespace Editor::ScriptModule
