#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWorldClockTimeMarkerNotFoundError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    ScriptWorldClockTimeMarkerNotFoundError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWorldClockTimeMarkerNotFoundError(::std::string const& clockName, ::std::string const& timeMarkerName);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& clockName, ::std::string const& timeMarkerName);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
