#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
struct ActorDefinitionModifier;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDefinitionModifier {
public:
    // prevent constructor by default
    ScriptDefinitionModifier& operator=(ScriptDefinitionModifier const&);
    ScriptDefinitionModifier(ScriptDefinitionModifier const&);
    ScriptDefinitionModifier();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ActorDefinitionModifier> bind();

    MCAPI static ::Scripting::ClassBindingBuilder<::ActorDefinitionModifier> bindV010();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
