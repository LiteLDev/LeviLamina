#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
struct ActorDefinitionModifier;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDefinitionModifier {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::ActorDefinitionModifier> bind();

    MCNAPI static ::Scripting::ClassBindingBuilder<::ActorDefinitionModifier> bindV010();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
