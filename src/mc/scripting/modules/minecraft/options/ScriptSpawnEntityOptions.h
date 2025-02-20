#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptSpawnEntityOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnk23fd25;
    ::ll::UntypedStorage<4, 8> mUnka4d2c9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSpawnEntityOptions& operator=(ScriptSpawnEntityOptions const&);
    ScriptSpawnEntityOptions(ScriptSpawnEntityOptions const&);
    ScriptSpawnEntityOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptSpawnEntityOptions> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
