#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptCustomSpawnRulesRegistry; }
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptSpawnRulesInvalidRegistryError : public ::Scripting::BaseError {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptSpawnRulesInvalidRegistryError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();

    MCAPI static ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptSpawnRulesInvalidRegistryError>
    validate(::ScriptModuleMinecraft::ScriptCustomSpawnRulesRegistry const& registry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
