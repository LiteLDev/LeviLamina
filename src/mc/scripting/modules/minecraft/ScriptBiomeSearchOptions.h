#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBiomeSearchOptions {
public:
    // prevent constructor by default
    ScriptBiomeSearchOptions& operator=(ScriptBiomeSearchOptions const&);
    ScriptBiomeSearchOptions(ScriptBiomeSearchOptions const&);
    ScriptBiomeSearchOptions();

public:
    // NOLINTBEGIN
    MCAPI class Vec3 getBoundingSize() const;

    MCAPI class Scripting::Result<void> validate() const;

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptBiomeSearchOptions>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
