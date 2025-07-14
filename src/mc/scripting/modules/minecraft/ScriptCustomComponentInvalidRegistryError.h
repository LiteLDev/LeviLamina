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
    // prevent constructor by default
    ScriptCustomComponentInvalidRegistryError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptCustomComponentInvalidRegistryError(::std::string const& errorMessage);

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
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& errorMessage);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
