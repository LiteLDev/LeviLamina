#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptCustomComponentRegistry; }
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCustomComponentInvalidRegistryError : public ::Scripting::BaseError {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptCustomComponentInvalidRegistryError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();

    MCNAPI static ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError>
    validate(::ScriptModuleMinecraft::ScriptCustomComponentRegistry const& registry);

    MCNAPI static ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError>
    validateV1(::ScriptModuleMinecraft::ScriptCustomComponentRegistry const& registry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
