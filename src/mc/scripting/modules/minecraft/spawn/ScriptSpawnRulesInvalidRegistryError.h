#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptCustomSpawnRulesRegistry; }
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptSpawnRulesInvalidRegistryError : public ::Scripting::BaseError {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();

    MCAPI static ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptSpawnRulesInvalidRegistryError>
    validate(::ScriptModuleMinecraft::ScriptCustomSpawnRulesRegistry const& registry);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
