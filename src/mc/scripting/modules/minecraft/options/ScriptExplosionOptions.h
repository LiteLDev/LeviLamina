#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptExplosionOptions {
public:
    // prevent constructor by default
    ScriptExplosionOptions& operator=(ScriptExplosionOptions const&);
    ScriptExplosionOptions(ScriptExplosionOptions const&);
    ScriptExplosionOptions();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptExplosionOptions> bindV010();

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptExplosionOptions>
    bindV1();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static bool const& ALLOW_UNDERWATER_DEFAULT();

    MCAPI static bool const& BREAKS_BLOCKS_DEFAULT();

    MCAPI static bool const& CAUSES_FIRE_DEFAULT();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
