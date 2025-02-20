#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptEntityEffectOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkb63041;
    ::ll::UntypedStorage<1, 2> mUnkf6cd6b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEntityEffectOptions& operator=(ScriptEntityEffectOptions const&);
    ScriptEntityEffectOptions(ScriptEntityEffectOptions const&);
    ScriptEntityEffectOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptEntityEffectOptions> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
