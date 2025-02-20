#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptProjectileShootOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk3e3b22;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptProjectileShootOptions& operator=(ScriptProjectileShootOptions const&);
    ScriptProjectileShootOptions(ScriptProjectileShootOptions const&);
    ScriptProjectileShootOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptProjectileShootOptions> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
